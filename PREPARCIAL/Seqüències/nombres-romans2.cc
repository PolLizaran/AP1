#include <iostream>
using namespace std;
int valor_nombres(char n)
{

    if (n == 'I')
        return 1;
    if (n == 'V')
        return 5;
    if (n == 'X')
        return 10;
    if (n == 'L')
        return 50;
    if (n == 'C')
        return 100;
    if (n == 'D')
        return 500;
    if (n == 'M')
        return 1000;
    return 0;
}

int main()
{
    char c1, c2;
    if (cin >> c1) {
        int nombre_decimal = 0;
        cout << c1;
        while (cin >> c2) {
            if (c2 != '.') {
                cout << c2;
                if (valor_nombres(c1) >= valor_nombres(c2)) {
                    nombre_decimal += valor_nombres(c1);
                } else
                    nombre_decimal -= valor_nombres(c1);
            } else {
                nombre_decimal += valor_nombres(c1);
                cout << " = " << nombre_decimal << endl;
                nombre_decimal = 0;
            }
            c1 = c2;
        }
    }
}
