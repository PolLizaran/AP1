#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a) {
        int x = a;
        int i = 0;
        while (x > 0) {
            b = x % 10;
            if (b != 0) {
                i = i + b;
            }
            x = x / 10;
        }
        cout << "La suma dels digits de " << a << " es " << i << "." << endl;
    }
}
