#include <iostream>
using namespace std;
int main()
{
    char c;
    int a = 0;
    int b = 0;
    while (cin >> c) {
        if (c == 'e') {
            ++a;
        } else if (c == 'o') {
            --a;
        } else if (c == 's') {
            ++b;
        } else if (c == 'n') {
            --b;
        }
    }
    cout << "(" << a << ", " << b << ")" << endl;
}
