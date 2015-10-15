solucion.pdf:	salida.dat simple_matplotlib.py
	python simple_matplotlib.py

salida.dat : a.out
	./a.out $(NUMERO) > salida.dat

a.out : solve_wave.c 
	cc solve_wave.c -lm 

clean: 
	rm -f a.out salida.dat solucion.pdf
