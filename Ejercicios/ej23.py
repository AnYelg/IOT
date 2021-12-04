#Ejercicio 23

nombre = input("Nombre: ")
edad = input("Edad: ")
direccion = input("Direccion: ")
telefono = input("Telefono: ")

dic = {'Nombre': nombre, 'Edad' : edad, 'Direccion': direccion, 'Telefono' : telefono}

print(f"{dic['Nombre']}, tiene {dic['Edad']} años, vive en {dic['Direccion']} y su número de telefono es {dic['Telefono']}")