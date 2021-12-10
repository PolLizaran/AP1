#include <iostream>
using namespace std;

void producte_digits(int n)
{
    if (n < 10) {
        cout << "El producte dels digits de " << n << " es " << n << '.' << endl;
    } else {
        while (n >= 10) {
            int copia = n;
            int producte = 1;
            while (copia > 0) {
                producte *= copia % 10;
                copia /= 10;
            }
            cout << "El producte dels digits de " << n << " es " << producte << '.' << endl;
            n = producte;
        }
    }
}

int main()
{
    int n;
    while (cin >> n) {
        producte_digits(n);
        cout << "----------" << endl;
    }
}
