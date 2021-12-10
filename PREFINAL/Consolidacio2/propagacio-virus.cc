#include <iostream>
#include <vector>

using namespace std;
using matriu = vector<vector<bool>>;

void llegir_matriu(matriu& posicio_amb_virus, int n, int m, int& caselles_contagiades)
{
    char simbol;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> simbol;
            if (simbol == 'X') {
                posicio_amb_virus[i][j] = true;
                ++caselles_contagiades;
            }
        }
    }
}
void escriure_matriu(const matriu& posicio_amb_virus)
{
    int n = posicio_amb_virus.size();
    int m = posicio_amb_virus[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (posicio_amb_virus[i][j])
                cout << 'X';
            else
                cout << '.';
        }
        cout << endl;
    }
    cout << endl;
}
void escriure_matriu_contagiada(int n, int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << 'X';
        }
        cout << endl;
    }
    cout << endl;
}

matriu propagador(matriu& posicio_amb_virus, const matriu& copia_posicions, int& caselles_contagiades, int n, int m)
{
    int mes = 1, menys = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (copia_posicions[i][j]) {
                if ((i != 0) and (not copia_posicions[i + menys][j]) and (not posicio_amb_virus[i + menys][j])) {
                    posicio_amb_virus[i + menys][j] = true;
                    ++caselles_contagiades;
                }
                if ((i != n - 1) and (not copia_posicions[i + mes][j]) and (not posicio_amb_virus[i + mes][j])) {
                    posicio_amb_virus[i + mes][j] = true;
                    ++caselles_contagiades;
                }
                if ((j != 0) and (not copia_posicions[i][j + menys]) and (not posicio_amb_virus[i][j + menys])) {
                    posicio_amb_virus[i][j + menys] = true;
                    ++caselles_contagiades;
                }
                if ((j != m - 1) and (not copia_posicions[i][j + mes]) and (not posicio_amb_virus[i][j + mes])) {
                    posicio_amb_virus[i][j + mes] = true;
                    ++caselles_contagiades;
                }
            }
        }
    }
    return posicio_amb_virus;
}

void escriu_contagi_matriu(matriu& posicio_amb_virus)
{
    int n = posicio_amb_virus.size();
    int m = posicio_amb_virus[0].size();
    int caselles_contagiades = 0, caselles_totals = n * m;
    llegir_matriu(posicio_amb_virus, n, m, caselles_contagiades);
    escriure_matriu(posicio_amb_virus);
    while (caselles_contagiades < caselles_totals) {
        matriu copia_posicions = posicio_amb_virus;
        propagador(posicio_amb_virus, copia_posicions, caselles_contagiades, n, m);
        escriure_matriu(posicio_amb_virus);
    }
    cout << "----------" << endl;
}

int main()
{
    int n, m;
    while (
        cin >> n >> m) {
        matriu posicio_amb_virus(n, vector<bool>(m, false));
        escriu_contagi_matriu(posicio_amb_virus);
    }
}
