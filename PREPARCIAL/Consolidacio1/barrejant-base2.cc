#include <cmath>
#include <iostream>
using namespace std;
void guardador(int x, int y)
{
    if (x <= 1)
        cout << 1 << 1;
    else {
        guardador(x / 2, y / 2);
        cout << x % 2 << y % 2;
    }
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        guardador(x, y);
        cout << endl;
    }
}
