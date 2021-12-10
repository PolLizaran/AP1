import turtle
import easyinput
import random

def koch(llargada, nivells):
    if nivells == 1:
        turtle.fd(llargada)
    else:
        koch(llargada / 3, nivells -1)
        turtle.left(60)
        koch(llargada / 3, nivells -1)
        turtle.right(120)
        koch(llargada / 3, nivells -1)
        turtle.left(60)
        koch(llargada / 3, nivells -1)

def main():
    llargada = 300
    nivells = 4

    turtle.speed(10)
    turtle.pensize(3)
    r = random.random()
    g = random.random()
    b = random.random()
    turtle.pencolor(r, g, b)
    koch(llargada, nivells)

    easyinput.read(chr)
main()
