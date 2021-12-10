#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Paraules {
    string word;
    int frequencia;
};

bool cribatge(Paraules& x, Paraules& y)
{
    if (x.frequencia == y.frequencia)
        return x.word < y.word; //volem que ens ho ordeni en ordre alfabetic
    return x.frequencia > y.frequencia;
}

vector<Paraules> llegir_sequencia(int n)
{
    vector<string> entrada(n);
    for (int i = 0; i < n; ++i) {
        cin >> entrada[i];
    }
    sort(entrada.begin(), entrada.end());
    vector<Paraules> v;
    v.push_back({ entrada[0], 1 });
    //fem un push_back amb la primera paraula que tenim i passesm com a vakor inicial de la frequencia 1
    for (int j = 1; j < n; ++j) {
        while ((j < n) and (entrada[j] == v[v.size() - 1].word)) {
            //incrementem la frequencia 1 de la ultima paraula que hem afegit al vector
            ++j;
            ++v[v.size() - 1].frequencia;
        }
        if (j < n) {
            v.push_back({ entrada[j], 1 });
        }
    }
    return v;
}

void ordena_segons_frequencia(vector<Paraules>& v)
{
    sort(v.begin(), v.end(), cribatge);
}

void escriure_paraules_ordenades(int n)
{
    vector<Paraules> v = llegir_sequencia(n);
    ordena_segons_frequencia(v);
    int mida = v.size();
    for (int k = 0; k < mida; ++k) {
        cout << v[k].frequencia << ' ' << v[k].word << endl;
    }
    cout << "----------" << endl;
}

int main()
{
    int n;
    while (cin >> n) {
        escriure_paraules_ordenades(n);
    }
}
