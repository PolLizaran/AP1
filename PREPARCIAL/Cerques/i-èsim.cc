#include <iostream>
using namespace std;
int main()
{
    int nombre, entrada;
    cin >> nombre;
    int contador = 0;
    while (contador < nombre) {
        cin >> entrada;
        ++contador;
    }
    cout << "A la posicio " << nombre << " hi ha un " << entrada << "." << endl;
}
