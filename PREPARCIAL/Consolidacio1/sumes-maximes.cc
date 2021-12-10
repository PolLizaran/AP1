#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n) {
        int nombres;
        int suma_tot = 0, left = 0, min = 0;
        for (int i = 0; i < n; ++i) {
            cin >> nombres;
            suma_tot += nombres;
            if (suma_tot > left)
                left = suma_tot;
            if (suma_tot < min)
                min = suma_tot;
        }
        cout << left << ' ' << suma_tot - min << endl;
    }
}
