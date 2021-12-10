#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        int s = v.size();

        for (int j = s - 1; j >= 0; --j) {
            cout << v[j];
            if (j != 0) {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
