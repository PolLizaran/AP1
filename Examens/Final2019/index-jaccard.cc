#include <iostream>
#include <vector>
using namespace std;

int trobar_interseccio(vector<int>& V1, vector<int>& V2, int suma_inter = 0)
{
    int mida1 = V1.size();
    int mida2 = V2.size();
    int i = 0, j = 0;
    if (V1.empty() or V2.empty() or (mida2 > 1 and V1[i] > V2[mida2 - 1]) or (mida1 > 1 and V1[mida1 - 1] < V2[j]))
        return suma_inter;
    while ((i < mida1) and (j < mida2)) {
        if (V1[i] < V2[j]) {
            ++i;
        } else if (V1[i] > V2[j]) {
            ++j;
        } else if (V1[i] == V2[j]) {
            if (mida1 == 1) {
                ++suma_inter;
                ++i;
            } else if (mida2 == 1) {
                ++suma_inter;
                ++i;
            } else if (V1[i] != V1[i - 1])

            {
                ++suma_inter;
            }
            ++j;
        }
    }

    return suma_inter;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(3);
    int m, n;
    while (cin >> m) {

        vector<int> V1(m); //idea: a mesura que anem llegint ells numeros els sumem
        for (int i = 0; i < m; ++i) {
            cin >> V1[i];
        }
        cin >> n;
        vector<int> V2(n);
        for (int j = 0; j < n; ++j) {
            cin >> V2[j];
        }
        int suma_unio = n + m;
        double suma_inter = trobar_interseccio(V1, V2, 0);
        suma_unio -= suma_inter;
        cout << suma_inter / suma_unio << endl;
    }
}
