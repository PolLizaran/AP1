#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

//bolea que determina si apareixen nombres repetits en la matriu;
bool no_repetits(const Matrix& A)
{
    int m = A.size();
    vector<bool> v((m * m), false);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            int k = A[i][j];
            if (v[k - 1])
                return false;
            v[k - 1] = true;
        }
    }
    return true;
}
//funcio per trobar els valors de la suma, ho fem amb els valors de la diagonal 1
int suma_total(const Matrix& A)
{
    int suma_total = 0;
    for (int i = 0; i < A.size(); ++i) {
        suma_total += A[i][i];
    }
    return suma_total;
}
//diagonal 2
bool diagonal2(const Matrix& A)
{
    int suma_diag2 = 0;
    int mida = A.size();
    int i = 0;
    for (int j = mida - 1; j >= 0; --j) {
        suma_diag2 += A[i][j];
        ++i;
    }
    if (suma_diag2 != suma_total(A))
        return false;
    return true;
}
//funcio per saber si les columnes i files sumen el mateix
bool files_columnes(const Matrix& A)
{
    int m = A.size();

    for (int i = 0; i < m; ++i) {
        int suma_files = 0;
        int suma_colum = 0;
        for (int j = 0; j < m; ++j) {
            suma_files += A[i][j];
            suma_colum += A[j][i];
        }
        if (suma_files != suma_total(A) or suma_colum != suma_total(A))
            return false;
    }
    return true;
}

int main()
{
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        if (no_repetits(A) and files_columnes(A) and diagonal2(A)) {
            cout << "yes" << endl;
        } else
            cout << "no" << endl;
    }
}
