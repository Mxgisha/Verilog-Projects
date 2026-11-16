#include "Vour.h"
#include "verilated.h"

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    // Instantiate the Verilated design
    Vour* top = new Vour;

    // Simulate until $finish is called
    while (!contextp->gotFinish()) {
        top->eval();
    }

    delete top;
    delete contextp;
    return 0;
}
