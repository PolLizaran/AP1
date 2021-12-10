from easyinput import read

def es_digit(c):
    return c >= '0' and c <= '9'

def avaluar():
    c = read(char)
    if es_digit(c):
        #ord  serveix per a que el caràcter es converteixi a enter
        return ord(c) - ord('0')
    else:
        op1 = avaluar()
        op2 = avaluar()
        if c == '+':
            return op1 + op2
        elif c == '+':
            return op1 + op2
        elif c == '+':
            return op1 + op2
        else:
            #serverix per indicar un boolear, en aquest cas concret indica que el programa no funciona
            #si ho volem fer per C++ hem d'incloure una llibreria que es diu <cassert> i s'executa com a assert(...);
            assert False


def main():
    print(avaluar())

main()
