from easyinput import read


def main():
    nombre = read(int)
    entrada = read(int)
    contador = 0
    while entrada != - 1 and contador != nombre:
            valor = entrada
            contador += 1
            entrada = read(int)
    if nombre > contador or nombre <= 0:
            print("Posicio incorrecta.")
    else:
        print("A la posicio ", nombre, " hi ha un ", valor, ".", sep='')


main()
