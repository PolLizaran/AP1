#include <iostream>
using namespace std;
void factor(int n, int& f, int& q)
{
    q = 0;
    for (int i = 2; i * i <= n; ++i) {
        int vegades_factor = 0;
        while (n % i == 0) {
            ++vegades_factor;
            n /= i;
        }
        if (vegades_factor > q) {
            q = vegades_factor;
            f = i;
        }
    }
    if (q == 0) {
        f = n;
        q = 1;
    }
}
