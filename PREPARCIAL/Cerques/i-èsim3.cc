#include <iostream>
using namespace std;

int main()
{
    int posicio, n, nombre, k;
    cin >> posicio;
    k = posicio;
    while (cin >> n) {
        --k;
        if (k == 0) {
            nombre = n;
        }
    }
    if (posicio <= 0 or k > 0) {
        cout << "Posicio incorrecta." << endl;
    } else
        cout << "A la posicio " << posicio << " hi ha un " << nombre << "." << endl;
}
