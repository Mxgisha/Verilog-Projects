#include <iostream>
#include <verilated.h>
#include "Vpwm.h"

// Helper function to run the simulation for a specific duty cycle and count high pulses
int measure_pwm(Vpwm* top, int duty_val, int cycles) {
    top->dty = duty_val;
    
    // Apply reset pulse
    top->rst = 1;
    for (int i = 0; i < 4; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    top->rst = 0;

    int high_count = 0;
    // Run for the given number of clock cycles
    for (int i = 0; i < cycles * 2; i++) {
        top->clk = !top->clk;
        top->eval();
        
        // Count when the clock goes high and the PWM output is active
        if (top->clk == 1 && top->out == 1) {
            high_count++;
        }
    }
    return high_count;
}

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vpwm* top = new Vpwm{contextp};

    // A list of different duty cycle settings to test
    int test_duties[] = {32, 64, 128, 192, 255};
    int total_cycles = 256; // Full period for an 8-bit counter

    std::cout << "--- 8-Bit PWM Hardware Verification ---" << std::endl;

    for (int dty : test_duties) {
        int highs = measure_pwm(top, dty, total_cycles);
        double measured_pct = ((double)highs / total_cycles) * 100.0;
        double expected_pct = ((double)dty / 256.0) * 100.0;

        std::cout << "Duty Register: " << dty 
                  << " | Expected: " << expected_pct << "%"
                  << " | Measured: " << measured_pct << "% (" 
                  << highs << "/" << total_cycles << " cycles)" << std::endl;
    }

    delete top;
    delete contextp;
    return 0;
}
