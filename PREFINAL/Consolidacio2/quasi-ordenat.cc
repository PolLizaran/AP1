#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//deixi dins de e i de d les dues posicions que caldria intercanviar per ordenar V
void posicions(const vector<int>& V, int& e, int& d)
{
    int n = V.size();
    bool primer_trobat = false;
    bool trobats_dos = false;
    for (int i = 0; (i < n) and not trobats_dos; ++i) {
        if (V[i] > V[i + 1]) {
            primer_trobat = true;
            e = i;
        }
        if (primer_trobat and V[i] < V[i - 1]) {
            trobats_dos = true;
            d = i;
        }
    }
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        int q;
        cin >> q;
        while (q--) {
            int i, j;
            cin >> i >> j;
            swap(V[i], V[j]);
            int e = -2;
            int d = -1;
            posicions(V, e, d);
            cout << e << ' ' << d << endl;
            swap(V[i], V[j]);
        }
    }
}
