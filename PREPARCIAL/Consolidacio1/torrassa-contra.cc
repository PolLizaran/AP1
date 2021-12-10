#include <iostream>
using namespace std;

void normalitza(int& h, int& m)
{
    if (m == 60) {
        m = 0;
        ++h;
    }
    if (h == 24)
        h = 0;
}
int campanes(int h, int m)
{
    int campanes = 0;
    if (h == 12 and m == 1)
        ++campanes;
    if (h == 13 and m == 6)
        ++campanes;
    return campanes;
}
int dia(int l)
{
    return l / 1440;
}

int main()
{
    int h, m, l;
    while (cin >> h >> m >> l) {
        int bells = 0;
        int dies = dia(l);
        l = l % 1440;
        while (l > 0) {
            ++m;
            --l;
            normalitza(h, m);
            bells = bells + campanes(h, m);
        }
        cout << dies * 2 + bells << endl;
    }
}
