from easyinput import read

def zeros_o_uns(n):
    contador0 = 0
    contador1 = 0
    while n >= 1:
        if n % 2 == 0:
            contador0 += 1
        else:
            contador1 += 1
        n //= 2
    if contador1 > contador0:
        return 1
    elif contador0 > contador1:
        return 0
    else:
        return 2

def main():
    n = read(int)
    print(zeros_o_uns(n))

main()
