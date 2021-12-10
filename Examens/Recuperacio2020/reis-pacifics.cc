#include <iostream>
#include <vector>

using namespace std;
using Board = vector<vector<char>>;
using Cheker = vector<vector<bool>>;

void print_board(const Board& b)
{
    int n = b.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << b[i][j];
        }
        cout << endl;
    }
    cout << "----------" << endl;
}

void posicions_en_perill(Cheker& used, int x, int y)
{
    int n = used.size();
    for (int i = x - 1; i < x + 1; ++x) {
        if (i >= 0 and i <= n - 1) {
            for (int j = y - 1; j < y + 1; ++j) {
                if (j >= 0 and j <= n - 1)
                    used[i][j] = true;
            }
        }
    }
}
void treure_perill(Cheker& used, int x, int y)
{
    int n = used.size();
    for (int i = x - 1; i < x + 1; ++x) {
        if (i >= 0 and i <= n - 1) {
            for (int j = y - 1; j < y + 1; ++j) {
                if (j >= 0 and j <= n - 1)
                    used[i][j] = false;
            }
        }
    }
}

void generar(Board& b, Cheker& used, int k, int i, int j)
{
    int n = b.size();
    if (k == 0) {
        print_board(b);
    } else if (i == n) {
        return;
    } else {
        while (j <= n - 1) {
            if (not used[i][j]) {
                b[i][j] = 'K';
                posicions_en_perill(used, i, j);
                generar(b, used, k - 1, i, j + 1);
                treure_perill(used, i, j);
                b[i][j] = '.';
            }
            ++j;
        }
        generar(b, used, k, i + 1, 0);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    Board b(n, vector<char>(n, '.'));
    Cheker used(n, vector<bool>(n, false));
    generar(b, used, k, 0, 0);
}
