#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu producte(const Matriu& a, const Matriu& b)
{
    Matriu C(a.size(), vector<int>(b[0].size()));
    //aixi sabem el nombre de files que te la matriu
    for (int i = 0; i < a.size(); ++i)
        //utilitzem aquesta forma per determinar el numero de columnes
        for (int k = 0; k < b[0].size(); ++k) {
            int suma = 0;
            for (int j = 0; j < a[0].size(); ++j)
                suma += (a[i][j] * b[j][k]);
            C[i][k] = suma;
        }
    return C;
}
int main()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matriu A(p, vector<int>(q));
        Matriu B(q, vector<int>(r));
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < q; ++i) {
            for (int j = 0; j < r; ++j) {
                cin >> B[i][j];
            }
        }
        Matriu C = producte(A, B);
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
