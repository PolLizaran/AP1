//L'objectiu principal d'aquest programa es saber dir si un nombre
//es llegeix igual vist des de dalt que des de baix.
#include <iostream>
using namespace std;

//funcio que inverteix els nombres i alhora comprova que els nombres siguin candidats
int nombre_invertit(int n)
{
    int reves = 0;
    while (n > 0) {
        int x = n % 10;
        reves *= 10;
        if (x == 6) {
            reves += 9;
        } else if (x == 9) {
            reves += 6;
        } else if (x == 0 or x == 1 or x == 8) {
            reves += x;
        } else
            return -1;
        n /= 10;
    }
    return reves;
}

//comprova que els dos nombres siguin iguals.
bool es_estrobogramatic(int n)
{
    return n == nombre_invertit(n);
}

//funcio que determina si un nombre es senar o no i fa la suma
int suma_senars(int n)
{
    if (n % 2 != 0) {
        return 1;
    }
    return 0;
}

int main()
{
    int n, nombres_senars = 0;
    while (cin >> n) {
        cout << n;
        if (es_estrobogramatic(n)) {
            nombres_senars += suma_senars(n);
            cout << " si ";
        } else {
            cout << " no ";
        }
        cout << "es estrobogramatic" << endl;
    }
    cout << endl
         << "estrobogramatics senars: " << nombres_senars << endl;
}
