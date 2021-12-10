#include <iostream>
using namespace std;

void convertir_base(int n, int b)
{
    if (n < b)
        return n;
    else {
        n / 2;
        return (convertir_base(n % b, b));
    }
}

bool es_capicua(int n, int b)
{
}

int main()
{
    int x, b;
    while (cin >> x >> b)
        cout << x << ' ' << b << ' ' << es_capicua(x, b) << endl;
}
