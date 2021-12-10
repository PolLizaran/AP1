#include <iostream>
#include <vector>
using namespace std;

void llegir_permutacio(vector<int>& v)
{
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        cin >> v[i];
    }
}

int troba_seguent_permutacio(vector<int>& v, vector<bool>& u, int final_cicle, int& valor_actual, int& longitud)
{
    while (valor_actual != final_cicle) {
        valor_actual = v[valor_actual];
        u[valor_actual] = true;
        ++longitud;
    }
    return longitud;
}

int permutacio(vector<int>& v, vector<bool>& u)
{
    llegir_permutacio(v);
    int n = v.size();
    int cicle_llarg = 1;
    for (int j = 1; j < n; ++j) {
        if (not u[j]) {
            u[j] = true;
            int longitud = 1;
            int final_cicle = j;
            int valor_actual = v[j];
            troba_seguent_permutacio(v, u, final_cicle, valor_actual, longitud);
            if (cicle_llarg < longitud) {
                cicle_llarg = longitud;
            }
        }
    }
    return cicle_llarg;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> v(n + 1);
        vector<bool> u(n + 1, false);
        cout << permutacio(v, u) << endl;
    }
}
