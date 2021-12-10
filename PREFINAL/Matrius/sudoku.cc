#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;
//idea: fer una funcio creant un vector de booleans que ens permeti determinar
//si tots els nombres de l'1 al 9 estan continguts en les files, columnes i subquadrats corresponents
bool es_sudoku(const Matrix& A)
{
    //Pre: tots els elements donats estan entre 1-9
    //important tenir en compte que la primera posicio no la tenim en compte
    for (int i = 0; i < 9; ++i) {
        //Avaluem les files;
        vector<bool> files(9);
        for (int j = 0; j < 9; ++j) {
            if (files[A[i][j] - 1])
                return false;

            files[A[i][j] - 1] = true;
        }
    }

    for (int i = 0; i < 9; ++i) {
        //Avaluem les columnes;
        vector<bool> columnes(9);
        for (int j = 0; j < 9; ++j) {
            if (columnes[A[j][i] - 1])
                return false;
            columnes[A[j][i] - 1] = true;
        }
    }

    //Avaluem els subquadrats
    for (int l = 0; l < 9; l += 3) {
        for (int k = 0; k < 9; k += 3) {
            vector<bool> subquadrats(9);
            for (int i = l; i < l + 3; ++i) {
                for (int j = k; j < k + 3; ++j) {
                    if (subquadrats[A[i][j] - 1]) {
                        return false;
                    }
                    subquadrats[A[i][j] - 1] = true;
                }
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n > 0) {
        Matrix A(9, vector<int>(9));
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cin >> A[i][j];
            }
        }
        if (es_sudoku(A))
            cout << "si" << endl;
        else
            cout << "no" << endl;
        --n;
    }
}
