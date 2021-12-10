#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    int a;
    while (cin >> a) {
        cout << a * a << " " << sqrt(a) << endl;
    }
}
