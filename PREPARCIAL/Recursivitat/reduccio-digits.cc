#include <iostream>
using namespace std;

int suma_digits(int x)
{
    if (x < 10)
        return x;
    else {
        return suma_digits(x / 10) + x % 10;
    }
}
int reduccio_digits(int x)
{
    int n = suma_digits(x);
    if (n < 10)
        return n;
    else
        return reduccio_digits(suma_digits(x));
}

int main()
{
    int x;
    cin >> x;
    suma_digits(x);
    cout << reduccio_digits(x) << endl;
}
