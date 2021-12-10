#include <iostream>
using namespace std;
long long int factorial(int n)
{
    if (n == 1 or n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);
    int n;
    while (cin >> n) {
        double resultat = 0.0;
        for (int i = 0; i < n; ++i) {
            resultat += 1.0 / factorial(i);
        }

        cout << "Amb " << n << " terme(s) s'obte " << resultat << "." << endl;
    }
}
