import easyinput
def main():
    nombre2 = nombre
    i = 1
    while nombre2 // 10 != 0:
        i = i + 1
        nombre2 = nombre2 // 10
    print("El nombre de digits de ", nombre, " es ", i, ".", sep='')

nombre = easyinput.read(int)
main()
