#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu producte(const Matriu& A, const Matriu& B)
{
    Matriu C(A.size(), vector<int>(A.size()));
    for (int i = 0; i < A.size(); ++i)
        for (int k = 0; k < A.size(); ++k) {
            int suma = 0;
            for (int j = 0; j < A.size(); ++j)
                suma += (A[i][j] * B[j][k]);
            C[i][k] = suma;
        }
    return C;
}

int main()
{
    int n;
    while (cin >> n) {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> B[i][j];
            }
        }
        Matriu C = producte(A, B);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
