#include <iostream>
using namespace std;

int main()
{
    char parentesis;
    int contador = 0;
    int impossible = 0;
    while (cin >> parentesis) {
        if (parentesis == '(') {
            ++contador;
        } else {
            --contador;
            if (contador < 0) {
                impossible = 1;
            }
        }
    }
    if (contador != 0 or impossible == 1) {
        cout << "no" << endl;
    } else
        cout << "si" << endl;
}
