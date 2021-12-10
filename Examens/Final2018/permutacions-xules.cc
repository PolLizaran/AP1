#include <iostream>
#include <vector>
using namespace std;

void escriure_permutacions(const vector<int>& v, int n)
{

    cout << v[0];
    for (int i = 1; i < n; ++i) {
        cout << ' ' << v[i];
    }
    cout << endl;
}

void generar(vector<int>& v, vector<bool>& u, int n, int i)
{
    if (i == n) {
        escriure_permutacions(v, n);
    } else {
        for (int k = 0; k < n; ++k) {
            if (not u[k]) {
                if (i == 0 or (v[i - 1] != k - 1 and v[i - 1] != k + 1)) {
                    v[i] = k;
                    u[k] = true;
                    generar(v, u, n, i + 1);
                    u[k] = false;
                }
            }
        }
    }
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> v(n);
        vector<bool> u(n, false);
        generar(v, u, n, 0);
        cout << "********************" << endl;
    }
}
