#include <cmath>
#include <iostream>
using namespace std;

//funció que passa els * i $, que estan en binari, a hores en decimal
int conversio(int decimal)
{
    char simbols;
    int contador = 0;
    int binari = 0;
    //llegir nombre en binari
    while (cin >> simbols and simbols != '|') {

        if (simbols == '*') {
            binari = binari * 10 + 1;
        } else if (simbols == '$') {
            binari *= 10;
        }
        //passar el binari a decimal
    }
    decimal = 0;
    while (binari != 0) {
        if (binari % 10 == 0) {
            ++contador;
        } else {
            decimal += pow(2, contador);
            ++contador;
        }
        binari /= 10;
    }
    return decimal;
}
//funció que llegeix el temps donat per la funció aterior i escriu el resultat
void llegeix_hora(int& h, int& m, int& s)
{
    char barra;
    cin >> barra;
    h = conversio(h);
    m = conversio(m);
    s = conversio(s);
}
void escriu_hora(int h, int m, int s)
{

    cout << h << ":" << m << ":" << s << endl;
}
//programa principal que executa les dues funcions anteriors
int main()
{
    int h, m, s, numero;
    cin >> numero;
    for (int i = 1; i <= numero; ++i) {
        llegeix_hora(h, m, s);
        escriu_hora(h, m, s);
    }
}
