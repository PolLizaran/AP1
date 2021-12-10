#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n) {
        int x = n;
        if (x == 1)
            cout << 0 << endl;
        for (int i = 0; x > 1; ++i) {
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = x * 3 + 1;
            }
            if (x == 1)
                cout << i + 1 << endl;
        }
    }
}
