from easyinput import read
import math

def main():
    nombre = read(int)
    while nombre > 0:
        figura = read(str)
        if figura == "cercle":
            radi = read(float)
            print("{:.6f}".format(math.pi * radi ** 2))
        elif figura == "rectangle":
            base = read(float)
            altura = read(float)
            print("{:.6f}".format(base * altura))
        nombre = nombre - 1

main()
