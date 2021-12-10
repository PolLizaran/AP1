#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    double angle;
    while (cin >> angle) {
        double anglerad = angle * (M_PI / 180);
        cout << sin(anglerad) << " "
             << cos(anglerad) << endl;
    }
}
