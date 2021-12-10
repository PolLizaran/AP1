#include <iostream>
#include <vector>
using namespace std;

bool suma(const vector<int>& v)
{
    int suma = 0;
    for (int i = 0; i < v.size(); ++i) {
        suma += v[i];
    }
    for (int j = 0; j < v.size(); ++j) {
        if (suma - v[j] == v[j])
            return true;
    }
    return false;
}
int main()
{
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        if (suma(v))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
