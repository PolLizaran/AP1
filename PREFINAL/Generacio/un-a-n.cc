#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<int>& v)
{
    int i = v.size();
    cout << '(';
    for (int j = 0; j < i; ++j) {
        cout << v[j];
        if (j != i - 1)
            cout << ',';
    }
    cout << ')' << endl;
}

void generar(vector<int>& v, vector<bool>& u, int i, int n)
{

    if (i == n) {
        escriure(v);
    } else {
        for (int k = 1; k <= n; ++k) {
            if (not u[k]) {
                v[i] = k;
                u[k] = true;
                generar(v, u, i + 1, n);
                u[k] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> u(n, false);
    generar(v, u, 0, n);
}
