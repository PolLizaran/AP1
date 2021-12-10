#include <iostream>
using namespace std;
int mcd(int a, int b)
{
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int mcd4(int a, int b, int c, int d)
{
    return mcd(mcd(a, b), mcd(c, d));
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << mcd4(a, b, c, d) << endl;
}
