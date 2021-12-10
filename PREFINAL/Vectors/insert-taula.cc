#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void insereix(vector<double>& v)
{
    int mida = v.size(), i = 2, j = 1;
    while (i <= mida and v[mida - j] < v[mida - i]) {
        swap(v[mida - j], v[mida - i]);
        ++i;
        ++j;
    }
}
int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        insereix(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
