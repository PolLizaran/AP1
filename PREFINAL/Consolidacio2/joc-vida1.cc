#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<char>>;

void llegir_matriu(Matrix& entrada, int n, int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> entrada[i][j];
        }
    }
}
void suma_caselles(char simbol, int& caselles_contagiades)
{
    if (simbol == 'B')
        ++caselles_contagiades;
}

int caselles_costat_amb_virus(const Matrix& entrada, int i, int j, int n, int m)
{

    int caselles_contagiades = 0;
    if (i != 0) {
        suma_caselles(entrada[i - 1][j], caselles_contagiades);
        if (j != m - 1) //diagonal superior dreta
            suma_caselles(entrada[i - 1][j + 1], caselles_contagiades);
    }
    if (j != 0) {
        suma_caselles(entrada[i][j - 1], caselles_contagiades);
        if (i != 0) //diagonal superior esquerra
            suma_caselles(entrada[i - 1][j - 1], caselles_contagiades);
    }
    if (i != n - 1) {
        suma_caselles(entrada[i + 1][j], caselles_contagiades);
        if (j != 0) //diagonal inferior esquerra
            suma_caselles(entrada[i + 1][j - 1], caselles_contagiades);
    }
    if (j != m - 1) {
        suma_caselles(entrada[i][j + 1], caselles_contagiades);
        if (i != n - 1) //diagonal inferior dreta
            suma_caselles(entrada[i + 1][j + 1], caselles_contagiades);
    }
    return caselles_contagiades;
}

void escriu_matriu_t1(Matrix& entrada, int n, int m)
{
    n = entrada.size();
    m = entrada[0].size();
    Matrix sortida(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (entrada[i][j] == '.') {
                if (caselles_costat_amb_virus(entrada, i, j, n, m) == 3) {
                    sortida[i][j] = 'B';
                } else {
                    sortida[i][j] = '.';
                }
            } else {
                int k = caselles_costat_amb_virus(entrada, i, j, n, m);
                if (k == 2 or k == 3) {
                    sortida[i][j] = 'B';
                } else {
                    sortida[i][j] = '.';
                }
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < m; ++l) {
            cout << sortida[k][l];
        }
        cout << endl;
    }
}

int main()
{
    int n_files, m_colum;
    bool primera = true;
    while ((cin >> n_files >> m_colum) and (n_files != 0)) {
        Matrix entrada(n_files, vector<char>(m_colum));
        llegir_matriu(entrada, n_files, m_colum);
        if (primera == false)
            cout << endl;
        escriu_matriu_t1(entrada, n_files, m_colum);
        primera = false;
    }
}
