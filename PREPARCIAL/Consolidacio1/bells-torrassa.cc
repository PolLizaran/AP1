#include <iostream>
using namespace std;

void hores(int h)
{
    if (h > 12)
        h -= 12;
    else if (h == 0)
        h = 12;
    for (int i = h; i > 0; --i)
        cout << " dong";
}

void quarts(int h, int m)
{
    if (m == 15)
        cout << "ding";
    else if (m == 30)
        cout << "ding ding";
    else if (m == 45)
        cout << "ding ding ding";
    else if (m == 0) {
        cout << "ding ding ding ding";
        if (h > 12)
            h -= 12;
        hores(h);
    }
}

void silenci(int& h, int& m)
{
    if (m > 45) {
        h = (h + 1) % 24;
        m = 0;
    } else
        m = 15 + 15 * (m / 15);
    cout << "silence until ";
    if (h < 10)
        cout << "0" << h;
    else
        cout << h;
    if (m < 10)
        cout << ":0" << m;
    else
        cout << ':' << m;
}

int main()
{
    int h, m;
    while (cin >> h >> m) {
        if (m % 15 == 0) {
            quarts(h, m);
        } else
            silenci(h, m);
        cout << endl;
    }
}
