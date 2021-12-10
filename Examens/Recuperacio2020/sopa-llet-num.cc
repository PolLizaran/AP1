#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<char>>;
using Matriu = vector<vector<int>>;

bool es_sopa(int i, int j, Matrix A, string paraula, string word) //diu si la paraula esta a la sopa
{
    for (int k = 0; k < paraula.size(); ++k) {
        if (A[i][j] != paraula[k]) {
            return false;
        }
        if (word == "h") {
            ++j;
        } else
            ++i;
    }
    return true;
}

int suma_posicions(int i, int j, int n, const Matriu& A, string word)
{ //funcio que s'executa un cop hem comprovat que hi ha una paraula en la sopa
    int suma = 0;
    for (int k = 0; k < n; ++k) {
        suma += A[i][j];
        if (word == "h") {
            ++j;
        } else
            ++i;
    }
    return suma;
}

int posicio(int f, int c, const Matrix& A, Matriu B, string paraula)
{
    int n = paraula.size();
    int valor = -1, copia_valor_hor = 0, copia_valor_ver = 0;
    string word;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < (c - n + 1); ++j) {

            word = "h"; //horitzontal
            if (es_sopa(i, j, A, paraula, word)) {
                copia_valor_hor = suma_posicions(i, j, n, B, word);
                if (valor < copia_valor_hor) { //comprevacio que el valor sigui el mes gran
                    valor = copia_valor_hor;
                }
            }
        }
    }
    for (int i = 0; i < (f - n + 1); ++i) {
        for (int j = 0; j < c; ++j) {
            word = "v"; //vertical
            if (es_sopa(i, j, A, paraula, word)) {
                copia_valor_ver = suma_posicions(i, j, n, B, word);
                if ((valor < copia_valor_hor) or (valor < copia_valor_ver)) { //comprevacio que el valor sigui el mes gran
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
    while (cin >> f >> c) {
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
}
