import turtle
import easyinput
import random

def koch(llargada, nivells):
    if nivells == 1:
        turtle.fd(llargada)
    else:
        koch(llargada / 4, nivells -1)
        turtle.left(60)
        koch(llargada / 4, nivells -1)
        turtle.right(120)
        koch(llargada / 4, nivells -1)
        turtle.left(60)
        koch(llargada / 4, nivells -1)

def angle(llargada, nivells):
    for i in range(1,4):
        koch(llargada, nivells)
        turtle.right(120)

def main():
    llargada = 300
    nivells = 4
    graus = 60
    turtle.hideturtle()
    turtle.speed(50)
    turtle.pensize(3)
    for k in range(1, 4):
        for j in range(1, 4):
            r = random.random()
            g = random.random()
            b = random.random()
            turtle.pencolor(r, g, b)
            angle(llargada, nivells)
            turtle.penup()
            turtle.left(120)
            turtle.bk(200)
            turtle.pendown()
        turtle.penup()
        turtle.right(120)
        turtle.bk(200)
        turtle.pendown()

    easyinput.read(chr)
main()
