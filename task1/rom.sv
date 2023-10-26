module rom #(
    parameter ADDRESS_WIDTH = 8,
    DATA_WIDTH = 8
)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1: 0] addr,
    output logic [DATA_WIDTH-1:0] dout
);

// first [] -> defines each row in the memory
// second [] -> define the number of rows
// |-> (2^8) different locations -> therefore (2^8) rows 
logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("sinerom.mem", rom_array);
end;

always_ff @(posedge clk)
    // output is synchronous
    dout <= rom_array[addr];

endmodule
