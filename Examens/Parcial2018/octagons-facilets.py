from easyinput import read


def pinta_oct(n):
    k = 0
    for i in range(1, n):
        print(' ' * (n - i), end='')
        print ('X' * (n + 2 * (i - 1)))
        k = i
    for j in range(0, n):
        print('X' * (n + 2 * k))
    for r in range(n - 1, 0, - 1):
        print(' ' * (n - r), end='')
        print('X' * (n + 2 * (r - 1)))


def main():

    n = read(int)
    while n is not None:
        pinta_oct(n)
        print()

        n = read(int)


main()
