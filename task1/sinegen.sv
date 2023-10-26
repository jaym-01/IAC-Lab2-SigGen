module sinegen #(
    parameter WIDTH = 8
)(
    input logic clk,
    input logic en,
    input logic rst,
    input logic [WIDTH-1:0] incr,
    output logic [WIDTH-1:0] dout
);

    logic [WIDTH-1:0] addr;

    counter counter1(
        .clk (clk),
        .en (en),
        .rst (rst),
        .incr (incr),
        .count (addr)
    );

    rom rom1(
        .clk (clk),
        .addr (addr),
        .dout (dout)
    );

endmodule
