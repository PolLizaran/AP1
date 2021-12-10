from easyinput import read

def main():

    n, b = read(int, int)
    print("----------")
    while n // b != 0:
        print('X' * (n % b))
        n //= b
    print('X' * (n % b))
    print("----------")
main()
