#include <iostream>
using namespace std;

bool no_divisors(int n, int i)
{
    return ((i * i > n) or (n % i != 0 and no_divisors(n, i + 1)));
}

bool primer(int n)
{
    return (n >= 2) and (no_divisors(n, 2));
}

void semiprimer(int n, bool& b, int& p, int& q)
{
    for (p = 2; p * p <= n; ++p) {
        // ens estalviem comprovar que p sigui primer, ja que si la divisió d'un nombre entre un primer és = 0, el nombre p ha de ser primer per forçca.
        if (n % p == 0) {
            q = n / p;
            b = primer(q);
            return;
        }
    }
    b = false;
}
int main()
{
    int n, p, q;
    bool b;
    while (cin >> n) {
        cout << n << ": ";
        semiprimer(n, b, p, q);
        if (b) {
            cout << "yes (" << p << ',' << q << ')' << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
