#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//Primer, els que apareixen mes vegades.
//En cas d’empat, abans els nombres primers.
//En cas d’un altre empat, abans els nombres més grans.

struct Sequencia {
    int nombre;
    int frequencia;
    bool primer;
};

bool es_primer(int x)
{
    if (x == 0 or x == 1)
        return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

bool comparador(const Sequencia& a, const Sequencia b)
{
    if (a.frequencia != b.frequencia) //retorna el maxim frequent
    {
        return a.frequencia > b.frequencia;
    } else {
        if (a.primer != b.primer) {
            return a.primer;
        } else //cas en que els dos nombres siguin o no primers
        {
            return a.nombre > b.nombre;
        }
    }
}

vector<Sequencia> llegir_vectors(int n)
{
    vector<int> valors(n);
    for (int i = 0; i < n; ++i) {
        cin >> valors[i];
    }
    sort(valors.begin(), valors.end());
    vector<Sequencia> v;

    v.push_back({ valors[0], 1, false });
    for (int j = 1; j < n; ++j) {
        while ((j < n) and (valors[j] == v[v.size() - 1].nombre)) {
            ++j;
            ++v[v.size() - 1].frequencia;
        }
        if (j < n)
            v.push_back({ valors[j], 1, false });
    }
    for (int k = 0; k < v.size(); ++k) {
        if (es_primer(v[k].nombre))
            v[k].primer = true;
    }

    return v;
}

void ordena_vectors(vector<Sequencia>& v)
{
    sort(v.begin(), v.end(), comparador);
}

void escriure_resultat(int n)
{
    vector<Sequencia> v = llegir_vectors(n);
    ordena_vectors(v);
    int mida = v.size();
    for (int i = 0; i < mida; ++i) {
        cout << v[i].nombre << endl;
    }
    cout << "----------" << endl;
}

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0)
            cout << "----------" << endl;
        else
            escriure_resultat(n);
    }
}
