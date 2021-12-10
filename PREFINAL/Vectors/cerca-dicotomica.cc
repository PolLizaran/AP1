#include <iostream>
#include <vector>
using namespace std;

void cerca(double x, const vector<double>& v, int esq, int dre)
{
    int mig = (esq + dre) / 2;
    if (v[mig] < x) {
        esq = mig;
    } else if (v[mig] > x) {
        dre = mig;
    }
}
int posicio(double x, const vector<double>& v, int esq, int dre)
{
    int mig = (esq + dre) / 2;

    if ((esq > dre) or (x < esq) or (x > dre))
        return -1;
    if (v[mig] == x)
        return mig;

    cerca(x, v, esq, dre);
    return posicio(x, v, esq, dre);
}
int main()
{
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int esq, dre;
            cin >> x >> esq >> dre;
            cout << posicio(x, V, esq, dre) << endl;
        }
    }
}
