import easyinput
def main():
    i=1
    while i<=10:
        print (nombre,"*", i, " = ", nombre*i, sep='')
        i = i + 1
nombre = easyinput.read(int)
main()
