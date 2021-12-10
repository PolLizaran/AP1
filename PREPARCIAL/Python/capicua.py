import easyinput

def es_capicua(n):

    nombre_girat = 0
    n1 = n
    while n1 != 0:
        nombre_girat = nombre_girat * 10
        r = n1 % 10
        nombre_girat = nombre_girat + r
        n1 //= 10
    return n == nombre_girat


def main():

    if es_capicua(n):
        print("true")
    else:
        print("false")

n = easyinput.read(int)
main()
