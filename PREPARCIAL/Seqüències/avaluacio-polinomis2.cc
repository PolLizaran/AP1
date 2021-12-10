#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    double valor_x, coeficients;
    cin >> valor_x >> coeficients;
    double resultat = coeficients;
    while (cin >> coeficients) {
        resultat = resultat * valor_x + coeficients;
    }
    cout << resultat << endl;
}
