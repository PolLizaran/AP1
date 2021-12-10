#include <iostream>
using namespace std;

int factorial_doble(int n)
{
    if (n == 0 or n == 1)
        return 1;
    return factorial_doble(n - 2) * n;
}
int main()
{
    int n;
    cin >> n;
    cout << factorial_doble(n) << endl;
}
