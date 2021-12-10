#include <iostream>
using namespace std;

void escriure_asteriscs(int n)
{
    for (int i = 0; i < n; ++i)
        cout << '*';
    cout << endl;
}

void barres(int n)
{

    if (n == 1)
        cout << '*' << endl;
    else {
        barres(n - 1);
        barres(n - 1);
        escriure_asteriscs(n);
    }
}

int main()
{
    int n;
    while (cin >> n) {
        barres(n);
    }
}
