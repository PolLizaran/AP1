#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nombre, petit = 1000000000;
    vector<int> v(1001);
    for (int i = 0; i < n; ++i) {
        cin >> nombre;
        nombre -= petit;
        ++v[nombre];
    }
    for (int j = 0; j < 1001; ++j) {
        if (v[j] != 0) {
            cout << j + petit << " : " << v[j] << endl;
        }
    }
}
