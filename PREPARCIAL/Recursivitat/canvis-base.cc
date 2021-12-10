#include <iostream>
using namespace std;

void binari(int n)
{
    if (n <= 1)
        cout << n;
    else {
        binari(n / 2);
        cout << n % 2;
    }
}

void octal(int n)
{
    if (n <= 7)
        cout << n;
    else {
        octal(n / 8);
        cout << n % 8;
    }
}

void hexadecimal_lletres(int n)
{
    if (n > 9)
        cout << char(n - 10 + 'A');

    else
        cout << n;
}
void hexadecimal(int n)
{
    if (n <= 15)
        hexadecimal_lletres(n);
    else {
        hexadecimal(n / 16);
        hexadecimal_lletres(n % 16);
    }
}

int main()
{
    int n;
    while (cin >> n) {
        cout << n << " = ";
        binari(n);
        cout << ", ";
        octal(n);
        cout << ", ";
        hexadecimal(n);
        cout << endl;
    }
}
