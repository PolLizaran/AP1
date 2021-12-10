#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//Estructura que ens guarda les paraules i les vegades que apareix
struct Paraules {
    string paraula;
    int freq;
};

bool comparador(const Paraules& a, const Paraules& b)
{
    if (a.freq == b.freq)
        return a.paraula < b.paraula;
    return a.freq > b.freq;
}

vector<Paraules> llegeix_paraules(int n)
{
    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }
    sort(words.begin(), words.end());
    vector<Paraules> v;
    //recorrem tot el vector de strings on tenim ja ordenades les paraules per veure si es repeteixen
    v.push_back({ words[0], 1 });
    for (int j = 1; j < n; ++j) {
        //si no fessi la restriccio que la j sigui mes petita que n, accediriem a posicions no existents del vector
        while ((j < n) and (words[j] == v[v.size() - 1].paraula)) {
            ++j;
            ++v[v.size() - 1].freq;
        }
        if (j < n) {
            //variable que anira incrementant cada vegada que afegim una estructura al vector v
            v.push_back({ words[j], 1 });
        }
    }
    return v;
}

void ordena_paraules(vector<Paraules>& v)
{
    sort(v.begin(), v.end(), comparador);
}

void escriure_seq(int n, int k)
{
    vector<Paraules> v = llegeix_paraules(n);
    ordena_paraules(v);
    for (int i = 0; i < k; ++i) {
        cout << v[i].paraula << endl;
    }
    cout << "----------" << endl;
}

int main()
{
    int n, k;
    while (cin >> n >> k)
        escriure_seq(n, k);
}
