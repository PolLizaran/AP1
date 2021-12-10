#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<int>& v)
{
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i];
        if (i != n - 1)
            cout << ' ';
    }
    cout << endl;
}

void generar(vector<int>& v, int i)
{
    int n = v.size();
    if (i == n) {
        escriure(v);
    } else {
        v[i] = 0;
        generar(v, i + 1);
        v[i] = 1;
        generar(v, i + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    generar(v, 0);
}
