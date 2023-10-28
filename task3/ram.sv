module ram #(
    parameter ADDRESS_WIDTH = 9,
    DATA_WIDTH = 8
)(
    input logic clk,
    input logic we1,
    input logic we2,
    input logic re1,
    input logic re2,
    input logic [DATA_WIDTH-1:0] din1,
    input logic [DATA_WIDTH-1:0] din2,
    input logic [ADDRESS_WIDTH-1:0] addr1,
    input logic [ADDRESS_WIDTH-1:0] addr2,
    // output logic [DATA_WIDTH-1:0] dout1,
    output logic [DATA_WIDTH-1:0] dout2
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    // ram is synchronous
    if(we1 == 1'b1)
        ram_array[addr1] <= din1;
    if(we2 == 1'b1)
        ram_array[addr2] <= din2;
    // if(re1 == 1'b1)
    //     dout1 <= ram_array[addr1];
    if(re2 == 1'b1)
        dout2 <= ram_array[addr2];
end

endmodule
