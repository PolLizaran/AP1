#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    int a;
    cin >> a;
    string s;
    for (int i = 1; a >= i; ++i) {
        cin >> s;
        if (s == "rectangle") {
            double a, b;
            cin >> a >> b;
            cout << a * b << endl;
        } else if (s == "cercle") {
            double r;
            cin >> r;
            cout << M_PI * r * r << endl;
        }
    }
}
