#include <cassert>
#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
        if (n < 165)
            assert(false);
        else
            cout << (((((n / 5) - 9) / 4) - 6) / 5) << endl;
}
