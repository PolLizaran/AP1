#include <iostream>
using namespace std;

int pasar_base(int n, int b)
{
    int resultat = 0;
    //Per molt que s'hagi d'escriure al reves, no ens fa falta canviar-ho d'ordre per comprovar si te digits consecutius
    int compta_zeros = 1;
    while (n >= b) {
        int x = n % b;
        if (resultat == 0 and x == 0) {
            compta_zeros *= 10;
        } else {
            resultat += x * compta_zeros;
            compta_zeros *= 10;
        }
        n /= b;
    }
    resultat += n * compta_zeros;
    return resultat;
}

bool tres_digits_seguits_iguals(int n, int b)
{
    n = pasar_base(n, b);
    int repetits = 0;
    int darrer = n % 10;
    while (n > 0) {
        int y = n % 10;
        if (y == darrer) {
            ++repetits;
        }
        darrer = y;
        if (repetits == 3) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    int n, b;
    while (cin >> n >> b)
        cout << n << ' ' << b << ' ' << tres_digits_seguits_iguals(n, b) << endl;
}
