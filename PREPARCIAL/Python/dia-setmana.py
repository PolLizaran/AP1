from easyinput import read

def dia_de_la_setmana (d, m, a):
    m -= 2
    if m <= 0:
        m += 12
        a -= 1
    c = a // 100
    y = a % 100
    f =  int(2.6 * m - 0.2)  + d + y + ( y // 4 ) + ( c // 4 ) - 2 * c

    f %= 7

    if f == 0:
        print("diumenge")
    elif f == 1:
        print("dilluns")
    elif f == 2:
        print("dimarts")
    elif f == 3:
        print("dimecres")
    elif f == 4:
        print("dijous")
    elif f == 5:
        print("divendres")
    elif f == 6:
        print("dissabte")


def main():
    d = read(int)
    m = read(int)
    a = read(int)
    while d is not None:
        dia_de_la_setmana(d, m, a)
        d = read(int)
        m = read(int)
        a = read(int)

main()
