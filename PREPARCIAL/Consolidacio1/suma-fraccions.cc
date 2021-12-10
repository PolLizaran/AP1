#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    int a, b, k;
    while (cin >> a >> b >> k) {
        int denominador = a;
        double resultat = 0;
        int multiplicador = 0;
        while (denominador <= b) {
            resultat += 1.0 / denominador;
            ++multiplicador;
            denominador = a + k * multiplicador;
        }
        cout << resultat << endl;
    }
}
