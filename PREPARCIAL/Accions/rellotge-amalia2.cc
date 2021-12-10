#include <cmath>
#include <iostream>
using namespace std;
void numero_digits(int numero_total_digits)
{
    char simbols;
    numero_total_digits = 0;
    while (cin >> simbols) {
        if (simbols != '|')
            ++numero_total_digits;
    }
    return numero_total_digits;
}
//funció que passa els * i $, que estan en binari, a hores en decimal
int main()
{
    char simbols;
    int decimal = 0;
    int numero_total_digits = 0;
    cin >> simbols;

    //declaro una variable string que contarà el nombre de dígits que conté el número en binari;
    while (cin >> simbols) {

        if (simbols == '*') {
            decimal = decimal + pow(2, numero_digits(numero_total_digits) -= 1;);
            numero_digits(numero_total_digits) -= 1;
        } else if (simbols == '$') {
            numero_digits(numero_total_digits) -= 1;
        } else if (simbols == '|')
            numero_digits(numero_total_digits) -= 1;
    }
    cout << decimal << endl;
}
