from easyinput import read

def main():

    interval = read(int)

    while interval is not None:

        resultat_interval = 0
        for i in range(1, interval + 1):
            resultat_interval += i

        resultat_nombres = 0
        for j in range(1, interval):
            nombres = read(int)
            resultat_nombres += nombres


        print(resultat_interval - resultat_nombres)

        interval = read(int)

main()
