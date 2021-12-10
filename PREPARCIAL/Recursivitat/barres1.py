from easyinput import read


def escriure_barres(n):

    if copia == n:
        print('*' * n)
    else:
        print('*')
        escriure_barres(n + 1)
    
        print('*' * copia)


def main():
    n = read(int)
    escriure_barres(n)


main()
