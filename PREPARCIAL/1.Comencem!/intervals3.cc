#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c and b == d) {
        cout << "= , [" << a << "," << b << "]" << endl;
    } else if ((a < c and b < c) or (a > d and b > d)) {
        cout << "? , []" << endl;
    } else if ((a >= c and b <= d) or (c < a and a == d and b == d) or (c = a and c == b and d > b)) {
        cout << "1 , [" << a << "," << b << "]" << endl;
    } else if ((a <= c and b >= d) or (a < c and c == b and d == b) or (a = c and a == d and b > d)) {
        cout << "2 , [" << c << "," << d << "]" << endl;
    }

    else if (a < c and b <= c) {
        cout << "? , [" << b << ',' << b << ']' << endl;
    } else if (a >= d and b > d) {
        cout << "? , [" << a << ',' << a << ']' << endl;
    } else if (a < c and b < d and b > c) {
        cout << "? , [" << c << "," << b << "]" << endl;
    } else if (a > c and d > a and b > d) {
        cout << "? , [" << a << "," << d << "]" << endl;
    }
}
