import easyinput
def main():

    if any % 100 == 0:
        if any / 100 % 4 == 0:
            print ("YES")
        else:
            print ("NO")
    elif any % 4 == 0:
        print ("YES")
    else:
        print ("NO")

any = easyinput.read(int)
main()
