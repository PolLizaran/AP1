#include <cmath>
#include <iostream>
using namespace std;

bool es_primer(int n)
{
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int concatenador(int& a, int b)
{
    int copia_b = b;
    int nombre_zeros = 0;
    while (copia_b > 0) {
        copia_b /= 10;
        ++nombre_zeros;
    }
    return (a * pow(10, nombre_zeros)) + b;
}

int main()
{
    int i, i2;
    cin >> i;
    bool trobat = false;
    while (not trobat and cin >> i2) {
        int x = concatenador(i, i2);
        if (not es_primer(x)) {
            cout << x << endl;
            trobat = true;
        }
        i = i2;
    }
    if (not trobat)
        cout << "no" << endl;
}
