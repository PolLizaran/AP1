#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int x1 = x;
    int y1 = y;
    while (y1 != 0) {
        int r = x1 % y1;
        x1 = y1;
        y1 = r;
    }
    cout << "El mcd de " << x << " i " << y << " es " << x1 << "." << endl;
}
