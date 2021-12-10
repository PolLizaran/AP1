#include <iostream>
using namespace std;
bool es_fibonacci(int a, int b, int resultat)
{
    a = 1;
    b = 1;
    resultat = 0;
    int cert = 1;
    int nombres;
    while (cin >> nombres) {
        while (resultat < nombres) {

            resultat = a + b;
            a = b;
            b = resultat;
        }
        if (resultat != nombres && nombres != 1) {
            cert = 0;
        }
    }
    return cert == 1;
}

int main()
{
    int nombres;
    int a, b, resultat;

    if (es_fibonacci(a, b, resultat)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
