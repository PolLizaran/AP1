#include <iostream>
#include <vector>
using namespace std;

using Matrix = vector<vector<char>>;

Matrix espiral(Matrix& A, int n)
{
    int i = n - 1;
    int j = 0;
    int comptador = 1;
    while (n > 0) {
        int copia = n;
        //idea: fer un comptador que depenent del numero escriugui cap a una direccio
        while (copia > 0) {
            if (comptador == 1) {
                A[i][j] = 'X';
                ++j;
                --copia;
            } else if (comptador == 2) {
                A[i][j] = 'X';
                --i;
                --copia;
            } else if (comptador == 3) {
                A[i][j] = 'X';
                --j;
                --copia;
            } else if (comptador == 4) {
                A[i][j] = 'X';
                ++i;
                --copia;
            }
        }
        ++comptador;
        if (comptador == 2) {
            --i;
            --j;
        } else if (comptador == 3) {
            --j;
            ++i;
        } else if (comptador == 4) {
            ++i;
            ++j;
        } else if (comptador == 5) {
            ++j;
            --i;
            comptador = 1;
        }
        --n;
    }
    return A;
}

int main()
{
    int n;
    while (cin >> n) {
        Matrix A(n, vector<char>(n, '.'));
        espiral(A, n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << A[i][j];
            }
            cout << endl;
        }
        if (n != 0)
            cout << endl;
    }
}
