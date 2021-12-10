#include <iostream>
#include <vector>
using namespace std;
//Creem una accio que sera la que ens escriura les permutacions que volem

void escriure(const vector<int>& v, int n)
{
    for (int i = 0; i < n; ++i) {
        cout << v[i];
        if (i != n - 1)
            cout << ' ';
    }
    cout << endl;
}

//Funcio que genra de manera recursiva tot el conjunt de permutacions amb z zeros
void generar(int i, vector<int>& v, int n, int u, int z, int zeros_escr, int uns_escr)
{
    if (i == n) {
        escriure(v, n);
    } else {
        //posem la condicio que el nombre de zeros escrits sigui mes petit que el nombre de zeros que volem escriure
        if (zeros_escr < z) {
            v[i] = 0;
            generar(i + 1, v, n, u, z, zeros_escr + 1, uns_escr);
        }
        //posem la condicio que el nombre de uns escrits sigui mes petit que el nombre de uns que volem escriure
        if (uns_escr < u) {
            v[i] = 1;
            generar(i + 1, v, n, u, z, zeros_escr, uns_escr + 1);
        }
    }
}

int main()
{
    //La variable n indica la llargada de la permutacio i u, el nombre d'uns
    int n, u;
    cin >> n >> u;
    //Declarem una variable z que seran el nombre de zeros que ha de contenir la permutacio
    int z = n - u;
    vector<int> v(n);

    generar(0, v, n, u, z, 0, 0);
}
