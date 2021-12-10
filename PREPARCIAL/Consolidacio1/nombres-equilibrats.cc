#include <iostream>
using namespace std;

bool es_equilibrat(int n)
{
    int suma1 = 0;
    int suma2 = 0;
    while (n != 0) {
        suma1 = suma1 + n % 10;
        n /= 10;
        suma2 = suma2 + n % 10;
        n /= 10;
    }
    return suma1 == suma2;
}

int main()
{
    int n;
    while (cin >> n) {
        cout << es_equilibrat(n) << endl;
    }
}
