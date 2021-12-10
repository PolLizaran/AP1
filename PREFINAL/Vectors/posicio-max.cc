#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m)
{
    int posicio = 0;
    double nombre_gran = v[0];
    for (int i = 0; i <= m; ++i) {
        if (v[i] >= nombre_gran) {
            if (v[i] != nombre_gran)
                posicio = i;
            nombre_gran = v[i];
        }
    }
    return posicio;
}

//funció millorada:
int posicio_maxim(const vector<double>& v, int m)
{
    int posicio = 0;
    for (int i = 0; i <= m; ++i)
        if (v[i] > v[posicio])
            posicio = i;
    return posicio;
}
//acaba funció millorada

int main()
{
    int m, n;
    while (cin >> m >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        cout << posicio_maxim(V, m) << endl;
    }
}
