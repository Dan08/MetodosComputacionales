solucion.pdf:	salida.dat simple_matplotlib.py
	python simple_matplotlib.py

salida.dat : a.out
	./a.out > salida.dat

a.out : solve_wave.o array.o solver.o
	cc solve_wave.o array.o solver.o -lm 

#solve_wave.o: solve_wave.c
#	cc -c solve_wave

clean: 
	rm -f a.out salida.dat solucion.pdf *.o
