divisas =  {'Euro':'€', 'Dollar':'$', 'Yen':'¥'}

# print(divisas ['Euro'])

# for divisa in divisas:
#     print(divisas[divisa])

usuario_input = input("Escribe una divisa: ")

for divisa in divisas:
    if (usuario_input == divisa):
        print(f"La divisa es: {divisas[divisa]}")
        break
    else:
        print("Divisa no existente")
        