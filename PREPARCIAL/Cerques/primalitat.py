from easyinput import read
from math import sqrt

def es_primer(n):
    if n <=1 or int(sqrt(n)) * int(sqrt(n)) == n:
        return True
    for i in range(2, int(sqrt(n)) + 1):
        c = n % i
        return bool(c == 0)

def main():
    interval = read(int)

    for k in range(1, interval + 1):
        n = read(int)
        if es_primer(n):
            print(n, " no es primer", sep ='')
        else:
            print(n, " es primer", sep = '')

main()
