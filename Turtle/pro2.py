from easyinput import read
import turtle

def fractal(llargada, nivells):
    if nivells == 1:
        turtle.fd(llargada)
    else:
        fractal(llargada / 3, nivells -1)
        turtle.left(45)
        fractal(llargada / 3, nivells -1)
        turtle.right(90)
        fractal(llargada / 3, nivells -1)
        turtle.left(45)



def main():
    llargada = 100
    nivells = 4
    turtle.speed(10)
    fractal(llargada, nivells)
    simbol = read(chr)

main()
