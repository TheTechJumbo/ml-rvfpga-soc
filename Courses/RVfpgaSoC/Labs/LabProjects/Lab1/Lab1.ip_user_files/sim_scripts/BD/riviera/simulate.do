transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+BD  -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.BD xil_defaultlib.glbl

do {BD.udo}

run 1000ns

endsim

quit -force
