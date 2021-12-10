#include <cassert>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int contador = 1;
    while (cin >> a >> b) {
        if (a > b) {
            int residu = a % b;
            if (residu == 0) {
                cout << '#' << contador << " : " << a << endl;
            } else
                cout << '#' << contador << " : " << b * ((a / b) + 1) << endl;
        } else if (a == 0)
            cout << '#' << contador << " : " << a << endl;
        else
            cout << '#' << contador << " : " << b << endl;
        ++contador;
    }
}
