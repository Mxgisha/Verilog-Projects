module pwm(clk, rst, dty, out);
    input wire clk;
    input wire rst;
    input wire[7:0] dty;

    output reg out;
    reg[7:0] count;

    always@(posedge(clk))
    begin
      if(rst)
        count <= 0;
      else
        count <= count + 1;
      
      if(count < dty)
        out <= 1;
      else
        out <= 0;
    end
endmodule

