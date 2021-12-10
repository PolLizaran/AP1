#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int copia_a, copia_c;
    int fermat = 0;
    while (cin >> a >> b >> c >> d) {
        if (fermat == 0 and (a == 0 or c == 0)) {
            if (a == 0) {
                fermat = 1;
                copia_a = a;
                copia_c = c;
            } else if (c == 0) {
                fermat = 2;
                copia_a = a;
                copia_c = c;
            }
        }
    }
    if (fermat == 2)
        cout << copia_a << "^3 + " << copia_c << "^3 = " << copia_a << "^3" << endl;
    else if (fermat == 1)
        cout << copia_a << "^3 + " << copia_c << "^3 = " << copia_c << "^3" << endl;
    else
        cout << "Sense solucio!" << endl;
}
