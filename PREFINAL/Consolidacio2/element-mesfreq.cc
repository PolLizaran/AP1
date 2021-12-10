#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Nombres {
    int valor;
    int frequencia;
};

bool criteris(const Nombres& a, const Nombres& b)
{
    if (a.frequencia != b.frequencia)
        return a.frequencia > b.frequencia;
    return a.valor > b.valor;
}

void llegir_vectors1(vector<int>& primera_seq, int n)
{
    for (int i = 0; i < n; ++i) {
        cin >> primera_seq[i];
    }
}
void llegir_vectors2(vector<int>& segona_seq, int m)
{
    for (int j = 0; j < m; ++j) {
        cin >> segona_seq[j];
    }
}

vector<Nombres> buscar_repetits(const vector<int>& primera_seq, const vector<int>& segona_seq)
{
    int n = primera_seq.size();
    int m = segona_seq.size();
    int i = 0, j = 0;
    vector<Nombres> elements;
    while ((i < n) and (j < m)) {
        if (primera_seq[i] < segona_seq[j]) {
            if (elements.empty() or primera_seq[i] != elements[elements.size() - 1].valor) {

                elements.push_back({ primera_seq[i], 1 });

            } else {
                ++elements[elements.size() - 1].frequencia;
            }
            ++i;
        } else if (primera_seq[i] > segona_seq[j]) {
            if (elements.empty() or segona_seq[j] != elements[elements.size() - 1].valor) {
                elements.push_back({ segona_seq[j], 1 });
            } else {
                ++elements[elements.size() - 1].frequencia;
            }
            ++j;
        } else {
            if (elements.empty() or primera_seq[i] != elements[elements.size() - 1].valor) {
                elements.push_back({ primera_seq[i], 2 });
            } else {
                elements[elements.size() - 1].frequencia += 2;
            }
            ++i;
            ++j;
        }
    }
    while (i < n) {
        if (elements.empty() or primera_seq[i] != elements[elements.size() - 1].valor) {
            elements.push_back({ primera_seq[i], 1 });
        } else {
            ++elements[elements.size() - 1].frequencia;
        }
        ++i;
    }
    while (j < m) {
        if (elements.empty() or segona_seq[j] != elements[elements.size() - 1].valor) {
            elements.push_back({ segona_seq[j], 1 });
        } else {
            ++elements[elements.size() - 1].frequencia;
        }
        ++j;
    }
    return elements;
}

void ordena_vector(vector<Nombres>& elements)
{
    sort(elements.begin(), elements.end(), criteris);
}

void elements_mes_repetits(vector<int>& primera_seq, vector<int>& segona_seq)
{
    vector<Nombres> elements = buscar_repetits(primera_seq, segona_seq);
    ordena_vector(elements);
    cout << elements[0].valor << ' ' << elements[0].frequencia << endl;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> primera_seq(n);
        llegir_vectors1(primera_seq, n);
        int m;
        cin >> m;
        vector<int> segona_seq(m);
        llegir_vectors2(segona_seq, m);
        elements_mes_repetits(primera_seq, segona_seq);
    }
}
