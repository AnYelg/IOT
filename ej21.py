#Ejemplo 21

x = int(input("Cuantos números ingresarás: "))
listalot = []

while (x != 0):
    num = int(input("Ingresa un número: "))
    listalot.append(num)
    x -= 1

listalot.sort()

print(f"Lista ordenada: {listalot}")
