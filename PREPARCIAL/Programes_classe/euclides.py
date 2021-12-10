def mcd(a, b):
    """ retorna el màxim comú divisor de dos naturals"""
    if a== b :
        return a
    elif a> b :
        return mcd(a - b, b)
    else : return mcd(a, b - a)



def mcd(a, b):
    if b== 0:
        return a
    elif a>= b:
        return mcd(a % b, b)
    else : return mcd(a, b % a)




def mcd(a, b):
    if a== 0:
        return b
    else:
        return mcd(b, a % b)
