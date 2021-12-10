#include <iostream>
#include <vector>
using namespace std;

void escriu_invertit(const string& v)
{
    for (int i = v.size() - 1; i >= 0; --i)
        cout << v[i];
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    string paraula;
    vector<string> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    for (int j = n - 1; j >= 0; --j)
        escriu_invertit(v[j]);
}
