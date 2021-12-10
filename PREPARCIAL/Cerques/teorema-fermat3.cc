#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        bool trobat = false;
        int arrel = 0;
        int comptador = 0;
        for (int i = a; i <= b; ++i) {
            for (int j = c; j <= d; ++j) {
                int resultat = i * i + j * j;
                arrel = sqrt(resultat);
                if (arrel * arrel == resultat) {
                    ++comptador;
                    trobat = true;
                }
            }
        }
        if (trobat == true) {
            cout << comptador << endl;
        } else {
            cout << "0" << endl;
        }
    }
}
