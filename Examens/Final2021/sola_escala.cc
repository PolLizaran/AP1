#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

//llegir matriu
void llegir_mat(Matrix& A)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }
}

int main()
{
    Matrix A;
    llegir_mat(A);
}
