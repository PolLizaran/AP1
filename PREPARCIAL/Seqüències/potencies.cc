#include <cmath>
#include <iostream>
using namespace std;
int power(int a, int b)
{
    int r = 1;
    for (int i = 1; i <= b; ++i) {
        r = r * a;
    }
    return r;
}

int main()
{
    int a, b;
    while (cin >> a >> b) {
        cout << power(a, b) << endl;
    }
}
