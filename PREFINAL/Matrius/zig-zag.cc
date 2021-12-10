#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

bool zig_zag(const Matrix& A)
{
    int c = A[0].size();
    int f = A.size();
    int compt = 1, darrer;
    for (int i = 0; i < c; ++i) {
        if (compt % 2 != 0) {
            //columnes senars, es llegeix de dalt a baix
            for (int j = 0; j < f; ++j) {
                //Guarda el valor de la ultima posicio per comparar-lo despres

                if (j == f - 1) {
                    if (i != 0 and darrer >= A[j][i]) {
                        return false;
                    } else
                        darrer = A[j][i];

                    //Primera posicio
                } else if (j == 0) {
                    if (i != 0 and darrer >= A[j][i])
                        return false;
                    if (f != 1 and A[j][i] >= A[j + 1][i])
                        return false;

                } else if (A[j][i] >= A[j + 1][i])
                    return false;
            }
        } else {
            //columnes parelles, es llegeix de baix a dalt
            for (int j = f - 1; j >= 0; --j) {
                if (j == 0) {
                    if (darrer >= A[j][i]) {
                        return false;
                    } else
                        darrer = A[0][i];

                } else if (j == f - 1) {
                    if (darrer >= A[j][i])
                        return false;
                    if (f != 1 and A[j][i] >= A[j - 1][i])
                        return false;

                } else if (A[j][i] >= A[j - 1][i])
                    return false;
            }
        }
        ++compt;
    }
    return true;
}

int main()
{
    int f, c, compt = 1;
    while (cin >> f >> c) {
        Matrix A(f, vector<int>(c));
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> A[i][j];
            }
        }

        if (zig_zag(A)) {
            cout << "matriu " << compt << ": si" << endl;
        } else
            cout << "matriu " << compt << ": no" << endl;

        ++compt;
    }
}
