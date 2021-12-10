#include <iostream>
using namespace std;
bool es_perfecte(int n)
{
    if (n > 0) {
        int r = 0;
        int i = 2;

        while (n > i * i) {
            if (n % i == 0) {
                r = r + i + (n / i);
            }
            ++i;
        }
        if (n / 2 == 0) {
            r = r + (n / 2);
        }
        if (n > 1) {
            r = r + 1;
        }
        return r == n;
    } else
        return false;
}
int main()
{
    int n;
    cin >> n;
    cout << es_perfecte(n) << endl;
}
