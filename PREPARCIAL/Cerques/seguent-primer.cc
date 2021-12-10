#include <iostream>
using namespace std;

bool es_primer(int n)
{
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    while (cin >> n and es_primer(n)) {
        if (es_primer(n)) {
            n = n + 1;
            while (es_primer(n) != true) {
                n = n + 1;
            }
            cout << n << endl;
        }
    }
}
