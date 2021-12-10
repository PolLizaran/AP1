#include <iostream>
using namespace std;

void farey(int n)
{
    cout << 0 << '/' << 1 << ' ' << 1 << '/' << n;
    int a = 0, b = 1, c = 1, d = n;
    while (d > 1) {
        int x = (n + b) / d;
        int futura_a = c, futura_b = d;
        c = ((x * c) - a);
        d = ((x * d) - b);
        cout << ' ' << c << '/' << d;
        a = futura_a;
        b = futura_b;
    }
    cout << endl;
}

int main()
{
    int n;
    while (cin >> n) {
        farey(n);
    }
}
