#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void ordena_per_seleccio(vector<double>& V, int m)
{
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int m, n;
    while (cin >> m >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        ordena_per_seleccio(V, m);
        for (int i = 0; i < n; ++i)
            cout << " " << V[i];
        cout << endl;
    }
}
