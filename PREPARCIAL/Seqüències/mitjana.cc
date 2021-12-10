#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    int d = 0;
    double a;
    double r = 0;
    while (cin >> a) {
        r = r + a;
        ++d;
    }
    cout << r / d << endl;
}
