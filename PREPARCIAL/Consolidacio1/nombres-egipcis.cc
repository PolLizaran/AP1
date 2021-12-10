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
        cout << '|';
        int espai = 0;
        while (copia_x > 0) {
            cout << lletra;
            ++espai;
            --copia_x;
        }
        if (x > 10)
            for (int i = 9 - save; i > 0; --i) {
                cout << ' ';
            }
        else
            while (9 - espai > 0) {
                cout << ' ';
                ++espai;
            }
        cout << '|';
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
    string identificador, simbol = "+---------+";
    while (cin >> identificador) {

        cout << identificador << endl
             << simbol << endl;
        int nombre, suma = 0;
        while (cin >> nombre and nombre != -1) {
            suma += nombre;
        }
        pinta_lletra(suma);
        cout << simbol << endl
             << endl;
    }
}
