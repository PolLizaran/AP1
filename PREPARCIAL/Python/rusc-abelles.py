from easyinput import read

def pinta_rusc(f, c):

    copia_c = c
        #primera fila
    for i in range(1, f + 1):
        if i == 1:
            print(" ", '_', sep = "", end="")
        else:
            print ("  ", '_', end="")
    print( )
            #segona fila
    while copia_c > 0:
        for j in range(1, f + 1):
            print ("/ \\", end="")
            if(j < f):
                print("_", end ="")
            else:
                print( )
        #tercera fila
        for k in range(1, f + 1):
            print("\\_/", end ="")
            if(k < f):
                print(" ", end ="")
            else:
                print( )

        copia_c -= 1


def main():
    f, c = read(int, int)
    while f is not None:
        pinta_rusc(f, c)

        f, c = read(int, int)

main()
