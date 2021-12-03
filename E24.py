#Ejercicio 24

dic = {'Fruta' : ['Plátano', 'Manzana', 'Pera', 'Naranja'], 'Precio' : [1.35, 0.80, 0.85, 0.70]}

usuarioinput = input("Ingresa una fruta: ")
flag = True
for fruta in range (len(dic['Fruta'])):
    if(usuarioinput == dic['Fruta'][fruta]):
        print(f"El precio de {usuarioinput} por kilo es {dic['Precio'][fruta]}")
        flag = True
        break
    else:
        flag = False

if (flag == False):
    print("No esta la fruta")