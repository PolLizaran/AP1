#include <iostream>
#include <vector>
using namespace std;
using matrix = vector<vector<int>>;

int main()
{
    int n, m;
    cin >> n >> m;
    matrix A(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];

    string s;
    int l, k;
    while (cin >> s) {
        if (s == "fila") {
            cin >> l;
            cout << s << ' ' << l << ": ";
            --l;
            for (int i = 0; i < m; ++i) {
                cout << A[l][i];
                if (i != m - 1)
                    cout << ' ';
            }
            cout << endl;
        } else if (s == "columna") {
            cin >> l;
            cout << s << ' ' << l << ": ";
            --l;
            for (int j = 0; j < n; ++j) {
                cout << A[j][l];
                if (j != n - 1)
                    cout << ' ';
            }
            cout << endl;
        } else {
            cin >> l >> k;
            cout << s << ' ' << l << ' ' << k << ": " << A[l - 1][k - 1] << endl;
        }
    }
}
