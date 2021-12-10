#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int copia_n = n;
    int copia2_n = n;
    int copia3_n = 1;
    while (copia2_n > 1) {
        for (int espais2 = copia2_n - 1; espais2 > 0; --espais2) {
            cout << " ";
        }
        for (int asteriscos = 1; 2 * asteriscos - 1 < 2 * copia3_n; ++asteriscos) {
            cout << '*';
        }
        copia2_n -= 1;
        copia3_n += 2;
        cout << endl;
    }

    while (copia_n > 0) {
        for (int j = 1; j <= 2 * (2 * copia_n - 1); j += 2) {
            cout << '*';
        }
        cout << endl;
        copia_n -= 1;
        if (copia_n > 0) {

            for (int espais = n - copia_n - 1; espais >= 0; --espais) {
                cout << " ";
            }
        }
    }
}
