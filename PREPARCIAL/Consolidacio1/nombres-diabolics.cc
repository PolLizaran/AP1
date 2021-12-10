#include <iostream>
using namespace std;

int escriure_base_sumada(int n)
{
    int resultat = 0;
    if (n < 4)
        return n;
    resultat += n % 4 + escriure_base_sumada(n / 4);
    return resultat;
}
bool es_diabolic(int n)
{
    return n % (2 * escriure_base_sumada(n)) == 0;
}

int main()
{
    int n;
    int comptador = 0, compt2;
    while (cin >> n and n != -1) {
        if (es_diabolic(n)) {
            ++comptador;
            compt2 = comptador;
        }
    }
    int i = 1;
    while (compt2 >= 10) {
        ++i;
        compt2 /= 10;
    }
    for (int x = 0; x < 6 - i; ++x) {
        cout << 0;
    }
    cout << comptador << endl;
}
