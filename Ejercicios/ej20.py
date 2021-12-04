#Ejercicio 20

listamat = []
x = 1

while(x == 1):
    materia = str(input("Ingrese la materia: "))
    listamat.append(materia)
    x = int(input("Si quieres meter otra materia pon 1, si no pon 0: "))

for i in range (len(listamat)):
    print(f"Yo estudio {listamat[i]}")
