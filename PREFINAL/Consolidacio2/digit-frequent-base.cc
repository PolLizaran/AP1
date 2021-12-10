#include <iostream>
#include <vector>
using namespace std;

void trobar_digits(vector<int>& v, int& n, int b)
{
    while (n >= b) {
        ++v[n % b];
        n /= b;
    }
    ++v[n];
}

void digit_mes_repetit(vector<int>& v, int& posicio, int& mes_repetit)
{
    for (int i = 1; i < 10; ++i) {
        if (v[i] > mes_repetit) {
            mes_repetit = v[i];
            posicio = i;
        }
    }
}

int main()
{
    vector<int> v(10, 0);
    int b;
    cin >> b;
    int n;
    while (cin >> n) {
        trobar_digits(v, n, b);
    }
    int posicio = 0, mes_repetit = v[0];
    digit_mes_repetit(v, posicio, mes_repetit);
    cout
        << posicio << ' ' << mes_repetit << endl;
}
