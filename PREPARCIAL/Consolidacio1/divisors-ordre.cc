#include <cmath>
#include <iostream>
using namespace std;
void divisors(int n)
{
    for (int i = 1; i * i < n; ++i) {
        if (n % i == 0)
            cout << ' ' << i;
    }
    for (int i = sqrt(n); i > 0; --i) {
        if (n % i == 0)
            cout << ' ' << n / i;
    }
}

int main()
{
    int n;
    while (cin >> n) {
        cout << "divisors de " << n << ':';
        divisors(n);
        cout << endl;
    }
}
