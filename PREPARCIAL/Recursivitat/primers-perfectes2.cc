#include <iostream>
using namespace std;

bool no_divisor(int n, int i)
{
    return (i * i > n) or (n % i != 0 and no_divisor(n, i + 1));
}

bool es_primer(int n)
{
    return n >= 2 and no_divisor(n, 2);
}

int suma_digits(int x)
{
    if (x < 10) {
        return x;
    }
    return suma_digits(x / 10) + x % 10;
}

bool es_primer_perfecte(int n)
{
    if (n < 10)
        return es_primer(n);
    return es_primer(n) and es_primer_perfecte(suma_digits(n));
}

int main()
{
    int n;
    cin >> n;
    cout << es_primer_perfecte(n) << endl;
}
