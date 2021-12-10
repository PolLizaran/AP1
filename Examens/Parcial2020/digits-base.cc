#include <iostream>
using namespace std;

//avalua si els nombres tenen el mateix nombre de digits ens la mateixa base
bool mateixos_digits(int x, int y, int b, int& n)
{
    n = 1;
    while (x >= b and y >= b) {
        x /= b;
        y /= b;
        ++n;
    }
    return x < b and y < b; //aixi ens assegurem que els dos nombres son més petits que la base
}

void base_amb_mateix_nombre_de_digits(int x, int y, int& b, int& n)
{
    //inicialitzem la b a 2, pq es la primera base
    for (b = 2; true; ++b) { //aquest for funcionara mentre l'accio sigui falsa
        if (mateixos_digits(x, y, b, n)) {
            return;
        }
    }
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        int b, n;
        base_amb_mateix_nombre_de_digits(x, y, b, n);
        cout << b << ' ' << n << endl;
    }
}
