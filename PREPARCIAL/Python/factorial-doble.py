from easyinput import read

def main():
    nombre = read(int)
    resultat = 1
    while nombre is not None:
        n = nombre
        if n == 0 or n == 1:
            print (1)
        else:
            for n in range(n, 1, -2):
                resultat = resultat * n
            print(resultat)
        resultat = 1
        nombre = read(int)

main()
