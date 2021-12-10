from easyinput import read
import turtle

# pinta un cercle de mida d
# x i y son les coordenades de la part inferior del cercle
# des d'on es comença a pintar
def pinta_cercle(x, y, d):
    turtle.up()
    turtle.goto(x, y)
    turtle.down()
    turtle.circle(d)
    turtle.up()

# pinta un fractal de koch de cercles, de n nivells i mida d
# x i y son les coordenades de la part inferior del cercle central
# des d'on es comença a pintar
def pinta_cercle_de_koch(n, d, x, y):
    r = d / 2
    if n > 0:
        pinta_cercle(x, y, d)  # cercle central
        pinta_cercle_de_koch(n - 1, r, x, y - d)  # part inferior
        pinta_cercle_de_koch(n - 1, r, x + d + r, y + d - r)  # part dreta
        pinta_cercle_de_koch(n - 1, r, x, y + 2 * d)  # part superior
        pinta_cercle_de_koch(n - 1, r, x - d - r, y + d - r)  # part esquerra


def main():
    # descomentar la seguent linea per pintar mes rapid
    # turtle.speed("fastest")

    n, d = read(int, float)
    pinta_cercle_de_koch(n, d, 0, -d / 2)


main()

# descomentar la seguent linea perque no es tanqui quan ha acabat de dibuixar
# input()
