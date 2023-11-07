sudo rm -rf obj_dir
sudo rm -f counter.vcd

verilator -Wall --cc --trace counter.sv --exe sinegen_tbb.cpp
verilator -Wall --cc --trace rom.sv --exe sinegen_tbb.cpp
verilator -Wall --cc --trace sinegen.sv --exe sinegen_tbb.cpp

make -j -C obj_dir/ -f Vsinegen.mk Vsinegen

# require super user privledges to access port?
sudo obj_dir/Vsinegen