#include <iostream>
using namespace std;
void convergeix(int n, int& k, int& lluny)
{
    int m, p;
    cin >> m >> p;
    lluny = m;
    for (n = 1; n <= m; ++n) {
        int copia_n = n;
        k = 0;
        while (copia_n != 1) {
            if (copia_n % 2 == 0) {
                copia_n /= 2;
                ++k;
            } else {
                copia_n = copia_n * 3 + 1;
                ++k;

                if (copia_n > lluny) {
                    lluny = copia_n;
                }
            }
        }
        if (k >= p)
            cout << n << endl;
    }
    cout << "S'arriba a " << lluny << '.' << endl;
}
int main()
{

    int n, k, lluny;
    convergeix(n, k, lluny);
}
