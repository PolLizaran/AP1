//per fer aquest programa haurem d'anar llegint els dígits en paquets de 2 en 2
#include <iostream>
using namespace std;

int valor_romans(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    return 0; //l'escrivim per si no ens envien cap cin
}

int main()
{
    char c1, c2;
    if (cin >> c1) {
        cout << c1;
        int n = 0;
        while (cin >> c2) {
            if (c2 == '.' or valor_romans(c1) >= valor_romans(c2)) {
                n += valor_romans(c1);
            } else {
                n -= valor_romans(c1);
            }
            if (c2 == '.') {
                cout << " = " << n << endl;
                n = 0; //serveix pel nombre següent que es llegeix
            } else {
                cout << c2 << endl;
            }
            c1 = c2
        }
    }
}
