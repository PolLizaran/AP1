#include <iostream>
using namespace std;

void pinta_rusc(int f, int c)
{
    int primera_fila = c - 1;
    for (int j = f; j > 0; --j) {
        for (int i = c; i > 0; --i) {
            //primera filera del rusc
            while (primera_fila < c) {
                if (primera_fila == c - 1) {
                    cout << ' ' << '_';
                } else if (primera_fila < c) {
                    cout << "   " << '_';
                }
                --primera_fila;
                if (primera_fila == -1) {
                    cout << endl;
                    primera_fila = c;
                }
            }
            //segona filera del rusc
            cout << '/' << ' ' << '\\';
            if (i != 1) {
                cout << "_";
            } else
                cout << endl;
        }
        for (int k = c; k > 0; --k) {
            //ultima filera rusc
            cout << '\\' << '_' << '/';
            if (k != 1) {
                cout << " ";
            } else
                cout << endl;
        }
    }
}
int main()
{
    int f, c;
    int contador = 0;
    while (cin >> f >> c) {
        if (contador == 0) {
            pinta_rusc(f, c);
            ++contador;
        } else {
            cout << endl;
            pinta_rusc(f, c);
        }
    }
}
