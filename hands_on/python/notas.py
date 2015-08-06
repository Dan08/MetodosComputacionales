import sys

infile = open(sys.argv[1], 'r')
print("estoy leyendo %s"%(sys.argv[1]))
outganador= open('mecanica_ganadores.txt', 'w')
outperdedor= open('mecanica_perdedores.txt', 'w')

lineas = infile.readlines()

for linea in lineas:
    if(linea[0]!='#'):
        ls = linea.split()
        nota1 = float(ls[3])
        nota2 = float(ls[4])
        nota3 = float(ls[5])        
        promedio = (nota1 + nota2 + nota3)/3.0
        if(promedio>=3.0):
            outganador.write("%s %s %s %f\n"%(ls[0], ls[1], ls[2], promedio))
        else:
            outperdedor.write("%s %s %s %f\n"%(ls[0], ls[1], ls[2], promedio))
    else:
        outganador.write(linea)
        outperdedor.write(linea)

outganador.close()
outperdedor.close()
infile.close()
