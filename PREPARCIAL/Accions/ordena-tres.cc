#include <iostream>
using namespace std;

void sort3(int& a, int& b, int& c)
{
    int d = a;
    if (a >= b and a >= c and b >= c) {
        a = c;
        c = d;
    } else if (a >= b and a >= c and b <= c) {
        a = b;
        b = c;
        c = d;
    } else if (b >= a and b >= c and a >= c) {
        a = c;
        c = b;
        b = d;
    } else if (c >= a and c >= b and a >= b) {
        a = b;
        b = d;
    } else if (b >= a and b >= c and c >= a) {
        d = b;
        b = c;
        c = d;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    sort3(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
}
