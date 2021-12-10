#include <iostream>
#include <string>
#include <vector>
using namespace std;

void escriure(const vector<int>& v, const vector<string>& paraules, int n)
{
    cout << '(';
    for (int k = 0; k < n; ++k) {
        cout << paraules[v[k]];
        if (k != n - 1)
            cout << ',';
    }
    cout << ')' << endl;
}

void generar(vector<int>& v, vector<bool>& u, const vector<string>& paraules, int i, int n)
{
    if (i == n) {
        escriure(v, paraules, n);
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                v[i] = j;
                u[j] = true;
                generar(v, u, paraules, i + 1, n);
                u[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    string s;
    cin >> n;
    vector<string> paraules(n);
    for (int i = 0; i < n; ++i) {
        cin >> paraules[i];
    }
    vector<int> v(n);
    vector<bool> u(n, false);
    generar(v, u, paraules, 0, n);
}
