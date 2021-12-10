#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
//es narcicista si el sumatori de cada digit elevat al nombre total de dígits es igual al nombre

bool es_narcicista(int n)
{
    int copia_n = n;
    int potencia = 0;
    while (n > 0) {
        ++potencia;
        n /= 10;
    }
    n = copia_n;
    int nombre = 0;
    while (copia_n > 0) {
        nombre += pow(copia_n % 10, potencia);
        copia_n /= 10;
    }
    return n == nombre;
}

int main()
{

    int n;
    bool ins_narcisista = true;
    while (cin >> n and ins_narcisista) {
        if (not es_narcicista(n)) {
            ins_narcisista = false;
        }
    }

    if (ins_narcisista)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;
}
