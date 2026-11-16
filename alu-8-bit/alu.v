module alu( 
    input wire [7:0] A,
    input wire [7:0] B,
    input wire [3:0] SEL,
    output reg [7:0] OUT,
    output reg [3:0] STAT);

    always &(*) begin
        OUT = 8'b0;
        STAT = 4'b0;

        case (SEL)
            4'b0000 begin
                pass;
            end

            default:begin
                OUT = 8'b0;
            end
    end

   
endmodule
