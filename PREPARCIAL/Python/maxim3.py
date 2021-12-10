import easyinput
def max2(a,b):
    if a>b:
        return a
    else:
        return b

def max3(a,b,c):
    return max2(max2(a,b),c)

a=easyinput.read(int)
b=easyinput.read(int)
c=easyinput.read(int)

print (max3(a,b,c))
