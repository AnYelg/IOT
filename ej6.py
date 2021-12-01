import math

def circulo(radio):
    return math.pi * radio * 2

def volumen (altura, radio):
    return circulo(radio)*altura


print(circulo(2), "m^2")
print(volumen(8,2), "m^3")
