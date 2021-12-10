#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);
    int n, m;
    while (cin >> n >> m) {
        int resta = n - m;
        int resultat = n - resta + 1;
        double harmonic = 0;

        for (int i = resultat; i <= n; ++i) {
            harmonic += 1.0 / i;
        }
        cout << harmonic << endl;
    }
}
