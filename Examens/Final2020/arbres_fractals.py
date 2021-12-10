from easyinput import read
import turtle


def arbres(n, d, a):

    if n > 0:
        turtle.forward(d)
        turtle.right(a)
        arbres(n - 1, 0.75 * d, a)
        turtle.left(2 * a)
        arbres(n - 1, 0.75 * d, a)
        turtle.right(a)
        turtle.backward(d)


def main():
    n, d, a = read(int, int, int)
    turtle.left(90)
    arbres(n, d, a)
    c = read(int)


main()
