#include <iostream>
using namespace std;
int main()
{
    int b, n;
    while (cin >> b >> n) {
        int x = b;
        int r = 0;
        while (x <= n) {
            x = x * b;
            ++r;
        }
        cout << r << endl;
    }
}
