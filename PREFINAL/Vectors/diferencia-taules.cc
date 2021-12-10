#include <iostream>
#include <vector>
using namespace std;

vector<double> diferencia(const vector<double>& V1, const vector<double>& V2)
{
    vector<double> res;
    int i = 0, j = 0;
    int mida_1 = V1.size(), mida_2 = V2.size();
    while ((i < mida_1) and (j < mida_2)) {
        if (V1[i] < V2[j]) {
            if ((res.empty()) or (V1[i] != res.back())) {
                res.push_back(V1[i]);
            }
            ++i;
            //volem incrementar el valor de j del segon vector per veure si
            //mes endavant seran iguals els valors o no
        } else if (V1[i] > V2[j]) {
            ++j;
            //cas on els valors son iguals
        } else {
            ++i;
        }
    }
    while (i < mida_1) {
        if ((res.empty()) or (V1[i] != res.back())) {
            res.push_back(V1[i]);
        }
        ++i;
    }
    return res;
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);

    int n1;
    while (cin >> n1) {
        vector<double> V1(n1);
        for (int i = 0; i < n1; ++i)
            cin >> V1[i];
        int n2;
        cin >> n2;
        vector<double> V2(n2);
        for (int i = 0; i < n2; ++i)
            cin >> V2[i];

        vector<double> res = diferencia(V1, V2);

        int n3 = res.size();
        cout << n3 << endl;
        for (int i = 0; i < n3; ++i)
            cout << " " << res[i];
        cout << endl
             << endl;

        for (int r = 0; r < 200; ++r) {
            vector<double> res2 = diferencia(V1, V2);
            if (res2 != res)
                cout << "Resultats diferents amb la mateixa entrada!" << endl;
        }
    }
}
