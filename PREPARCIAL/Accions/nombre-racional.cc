#include <iostream>
using namespace std;
int mcd(int num, int den)
{
    while (den != 0) {
        int r = num % den;
        num = den;
        den = r;
    }
    return num;
}
void read_rational(int& num, int& den)
{
    char s;
    cin >> num >> s >> den;
    int d = mcd(num, den);
    num /= d;
    den /= d;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int num, den;
        read_rational(num, den);
        cout << num << ' ' << den << endl;
    }
}
