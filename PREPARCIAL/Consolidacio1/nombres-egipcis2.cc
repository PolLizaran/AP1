#include <cmath>
#include <iostream>
using namespace std;

void pinta_lletra(int x)
{
    while (x > 0) {
        int copia_x = x, comptador = 1, save;
        while (copia_x >= 10) {
            copia_x /= 10;
            ++comptador;
            save = copia_x;
        }
        char lletra = 'A' + char(comptador - 1);

        while (copia_x > 0) {
            cout << lletra;
            --copia_x;
        }
        int potencia = pow(10, comptador - 1);
        if (potencia != 1) {
            x = x - (save * potencia);
        } else {
            x = 0;
        }
        cout << endl;
    }
}
int main()
{
    int nombre, suma = 0;
    while (cin >> nombre and nombre != -1) {
        suma += nombre;
    }
    pinta_lletra(suma);
}
