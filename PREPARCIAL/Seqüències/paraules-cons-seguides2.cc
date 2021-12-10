#include <iostream>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    int contador = 1;
    int max = 1;
    while (cin >> t) {
        if (t == s) {
            ++contador;
        } else if (contador != 0) {
            contador = 0;
        }
        if (contador > max)
            max = contador;
    }
    cout << max << endl;
}
