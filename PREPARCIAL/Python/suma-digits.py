from easyinput import read

def main():
    nombre = read(int)
    while nombre is not None:
        copia_nombre = nombre
        digits = 0
        while copia_nombre != 0:
            digits += copia_nombre % 10
            copia_nombre = copia_nombre // 10
        print("La suma dels digits de ", nombre, " es ", digits, ".", sep='')
        nombre = read(int)
main()
