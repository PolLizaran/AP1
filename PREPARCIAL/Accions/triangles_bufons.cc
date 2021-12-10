#include <iostream>
using namespace std;

void escriu_triangle(int t)
{
    int copia_t = 2 * t;
    int copia_2t = 1;
    //escriure espais
    while (copia_t > 0) {
        for (int i = copia_t; i - 1 > 0; --i) {
            cout << ' ';
        }
        --copia_t;
        //escriure trangles
        for (int j = 1; j <= copia_2t; ++j) {
            cout << "/\\";
            if (j < copia_2t) {
                cout << "  ";
            }
        }
        cout << endl;
        for (int i = copia_t; i - 1 > 0; --i) {
            cout << ' ';
        }
        --copia_t;
        for (int j = 1; j <= copia_2t; ++j) {
            cout << "/__\\";
        }
        cout << endl;
        ++copia_2t;
    }
}

int main()
{
    int t;
    int contador = 0;
    while (cin >> t)
        if (contador == 0) {
            escriu_triangle(t);
            ++contador;
        } else {
            cout << endl;
            escriu_triangle(t);
        }
}
