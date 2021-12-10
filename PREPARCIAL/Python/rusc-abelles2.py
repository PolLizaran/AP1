from easyinput import read


def pinta_rusc(f, c):
    print(" _", sep = '', end = '')
    print("   _" * (c - 1))
    for i in range (1, f + 1):
        print("/ \\_" * (c - 1), end ='')
        print("/ \\")
        print("\\_/ " * (c -1), end='')
        print("\\_/")


def main():
    f, c = read(int, int)
    comptador = 0
    while f is not None:
        if comptador == 0:
            pinta_rusc(f, c)
            comptador += 1
        else:
            print()
            pinta_rusc(f, c)
        f = read(int)
        c = read(int)

main()
