from easyinput import read

def normalitzar_hora(hores):
    if hores > 12:
        hores -= 12
    elif hores == 0:
        hores += 12
    return hores

def dia(temps):
    return temps // 1440

def main():
    hores, min, temps = read(int, int, int)
    while hores is not None:
        campanades = 0
        numero_dies = dia(temps)
        temps %= 1440
        while temps > 0:
            if min == 60:
                min = 0
                hores += 1
            if hores == 24:
                hores = 0
            if min == 15:
                campanades += 1
            elif min == 30:
                 campanades += 2
            elif min == 45:
                campanades += 3
            elif min == 0:
                campanades += 4
                if hores == 12:
                    campanades += 100
                else:
                    campanades += normalitzar_hora(hores)

            min += 1
            temps -= 1
        print (campanades + 484 * numero_dies)
        hores, min, temps = read(int, int, int)

main()
