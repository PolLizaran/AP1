from easyinput import read
import turtle


def tree(n, d, a):

    turtle.left(90)
    turtle.forward(d)
    for j in range(1, n + 1):
        tree(n, 3 * d / 4, a)





def main():
    n, d, a = read(int, int, int)
    tree(n, d, a)


    char = read(chr)

main()
