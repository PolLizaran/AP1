#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nombre;
    cin >> nombre;
    vector<int> v(nombre);

    for (int i = 0; i < nombre; ++i) {
        cin >> v[i];
    }

    int compt = 0;
    for (int j = v.size() - 2; j >= 0; --j) {
        if (v[v.size() - 1] == v[j]) {
            ++compt;
        }
    }
    cout << compt << endl;
}
