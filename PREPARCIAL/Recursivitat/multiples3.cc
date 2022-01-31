#include <iostream>
using namespace std;

int suma_digits(int n)
{
    if (n < 10)
        return n;
    else
        return suma_digits(n / 10) + n % 10;
}
bool es_multiple_3(int n)
{
    return suma_digits(n % 3) == 0;
}

int main()
{

    int n;
    cin >> n;
    cout << es_multiple_3(n) << endl;
}