#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b;
    cin >> a;
    double r = 0;
    int i = 0;
    while (cin >> b) {
        r = b * pow(a, i) + r;
        ++i;
    }
    cout << r << endl;
}
