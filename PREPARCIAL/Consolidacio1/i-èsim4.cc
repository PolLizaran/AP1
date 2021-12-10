#include <iostream>
using namespace std;

int main()
{
    int nombre, sequencia, nombre_sortida;
    while (cin >> nombre) {

        int comptador = 1;
        while (cin >> sequencia and sequencia != -1) {

            if (comptador == nombre) {
                nombre_sortida = sequencia;
            }
            ++comptador;
        }

        if (comptador > nombre and nombre > 0)
            cout << "A la posicio " << nombre << " hi ha un " << nombre_sortida << "." << endl;
        else
            cout << "Posicio incorrecta." << endl;
    }
}
