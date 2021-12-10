#include <iostream>
#include <vector>
using namespace std;

void eratostenes(vector<int>& primer_factor)
{
    int milio = 1000001;
    for (int i = 2; i * i <= milio; ++i) {
        if (primer_factor[i] == 1) {
            for (int j = 2 * i; j <= milio; j += i) {
                if (primer_factor[j] == 1)
                    primer_factor[j] = i;
            }
        }
    }
}

int nombre_divisiors(vector<int>& primer_factor, int& n)
{
    int divisors = 2;
    if (n == 1) {
        return 1;
    } else if (primer_factor[n] == 1) {
        return 2;
    } else {
        int x = primer_factor[n];
        while (x * x < n) {
            if (n % x == 0)
                divisors += 2;
            ++x;
        }
        if (x * x == n) {
            ++divisors;
        }
    }
    return divisors;
}

int main()
{
    vector<int> primer_factor(1000001, 1);
    eratostenes(primer_factor);
    int n;
    while (cin >> n) {
        cout << nombre_divisiors(primer_factor, n) << endl;
    }
}
