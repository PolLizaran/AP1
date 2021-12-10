#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<char>>;
using Matriu = vector<vector<int>>;

bool es_sopa1(int i, int j, Matrix A, string paraula) //diu si la paraula esta a la sopa
{
    for (int k = 0; k < paraula.size(); ++k) {
        if (A[i][j] != paraula[k]) {
            return false;
        }
        ++j;
    }
    return true;
}
bool es_sopa2(int i, int j, Matrix A, string paraula) //diu si la paraula esta a la sopa
{
    for (int k = 0; k < paraula.size(); ++k) {
        if (A[i][j] != paraula[k]) {
            return false;
        }
        ++i;
    }
    return true;
}

int suma_posicions1(int i, int j, int n, const Matriu& A)
{ //funcio que s'executa un cop hem comprovat que hi ha una paraula en la sopa
    int suma = 0;
    for (int k = 0; k < n; ++k) {
        suma += A[i][j];
        ++j;
    }
    return suma;
}
int suma_posicions2(int i, int j, int n, const Matriu& A)
{ //funcio que s'executa un cop hem comprovat que hi ha una paraula en la sopa
    int suma = 0;
    for (int k = 0; k < n; ++k) {
        suma += A[i][j];
        ++i;
    }
    return suma;
}

int posicio(int f, int c, const Matrix& A, Matriu B, string paraula)
{
    int n = paraula.size();
    int valor = -1, copia_valor_hor = 0;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < (c - n + 1); ++j) {
            if (es_sopa1(i, j, A, paraula)) {
                copia_valor_hor = suma_posicions1(i, j, n, B);
                if (valor < copia_valor_hor) { //comprovacio que el valor sigui el mes gran
                    valor = copia_valor_hor;
                }
            }
        }
    }
    int copia_valor_ver = 0;

    for (int i = 0; i < (f - n + 1); ++i) {
        for (int j = 0; j < c; ++j) {
            if (es_sopa2(i, j, A, paraula)) {
                copia_valor_ver = suma_posicions2(i, j, n, B);
                if ((valor < copia_valor_ver) and (valor < copia_valor_hor)) { //comprevacio que el valor sigui el mes gran
                    valor = copia_valor_ver;
                }
            }
        }
    }

    return valor;
}

int main()
{
    int f, c; //declaració i lectura de files i columnes
    cin >> f >> c;
    Matrix lletres(f, vector<char>(c)); //lectura de les lletres en una matriu de chars
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> lletres[i][j];
        }
    }
    Matriu nombres(f, vector<int>(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> nombres[i][j];
        }
    }
    int nombre_par;
    cin >> nombre_par;
    string paraules;

    while (nombre_par > 0) {
        cin >> paraules;

        int valor = posicio(f, c, lletres, nombres, paraules);
        if (valor > 0) {
            cout << valor << endl;
        } else {
            cout << "no" << endl;
        }
        --nombre_par;
    }
}
