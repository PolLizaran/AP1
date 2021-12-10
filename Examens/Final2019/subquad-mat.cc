#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

bool es_subquadrat(Matrix& A, int i, int j) //bolea que avalua si es repeteixen numeros en el subquadrat
{
    vector<bool> nombres(9, false);
    for (int k = i; k < i + 3; ++k)
        for (int l = j; l < j + 3; ++l) {
            nombres[A[k][l] - 1] = true;
        }
    for (int a = 0; a < 9; ++a) {
        if (!nombres[a])
            return false;
    }
    return true;
}

int main()
{
    int files, colum;
    while (cin >> files >> colum) {
        Matrix A((files), vector<int>(colum));
        for (int i = 0; i < files; ++i) {
            for (int j = 0; j < colum; ++j) {
                cin >> A[i][j];
            }
        }
        int suma_subq = 0;
        for (int i = 0; i + 3 <= files; ++i)
            for (int j = 0; j + 3 <= colum; ++j)
                if (es_subquadrat(A, i, j))
                    ++suma_subq;

        cout << suma_subq << endl;
    }
}
