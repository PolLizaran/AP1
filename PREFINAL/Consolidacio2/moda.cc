#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string trobar_maxima(const vector<string>& seq, int n)
{
    int comptador = 1;
    int mes_repeticions = 1;
    string maxima = "0";
    if (n != 1) {
        for (int i = 1; i <= n; ++i) {
            if (seq[i] == seq[i - 1]) {
                ++comptador;
                if (comptador >= mes_repeticions) {
                    mes_repeticions = comptador;
                    maxima = seq[i];
                }
            } else
                comptador = 1;
        }
        if (maxima == "0")
            maxima = seq[n - 1];

    } else
        maxima = seq[0];

    return maxima;
}

int main()
{
    int n;
    while (cin >> n and n != 0) {
        string word;
        vector<string> seq(n);
        for (int i = 0; i < n; ++i) {
            cin >> seq[i];
        }
        sort(seq.begin(), seq.end());
        cout << trobar_maxima(seq, n) << endl;
    }
}
