#include <iostream>
#include <vector>
using namespace std;

vector<int> ex_union(const vector<int>& V1, const vector<int>& V2)
{
    int mida1 = V1.size();
    int mida2 = V2.size();
    vector<int> vector_unio;
    int i = 0;
    int j = 0;
    while ((i < mida1) and (j < mida2)) {
        if (V1[i] > V2[j]) //Cas 1
        {
            if ((vector_unio.empty()) or (V2[j] != vector_unio.back())) {
                if (j == 0) {
                    vector_unio.push_back(V2[j]);
                } else if (V2[j] != V2[j - 1]) {
                    vector_unio.push_back(V2[j]);
                }
            }
            ++j;
        } else if (V1[i] < V2[j]) //Cas 2
        {
            if ((vector_unio.empty()) or (V1[i] != vector_unio.back())) {
                if (i == 0) {
                    vector_unio.push_back(V1[i]);
                } else if (V1[i] != V1[i - 1]) {
                    vector_unio.push_back(V1[i]);
                }
            }
            ++i;
        } else //son iguals
        {
            ++i;
            ++j;
        }
    }
    //A partir d'aqui aquesta part del programa només s'executara si i o j son 0
    while (i < mida1) {
        if ((vector_unio.empty()) or (V1[i] != vector_unio.back())) {
            if (i == 0) {
                vector_unio.push_back(V1[i]);
            } else if (V1[i] != V1[i - 1]) {
                vector_unio.push_back(V1[i]);
            }
        }
        ++i;
    }
    while (j < mida2) {
        if ((vector_unio.empty()) or (V2[j] != vector_unio.back())) {
            if (j == 0) {
                vector_unio.push_back(V2[j]);
            } else if (V2[j] != V2[j - 1]) {
                vector_unio.push_back(V2[j]);
            }
        }
        ++j;
    }

    return vector_unio;
}
int main()
{
    int n1;
    while (cin >> n1) {
        vector<int> V1(n1);
        for (int i = 0; i < n1; ++i)
            cin >> V1[i];
        int n2;
        cin >> n2;
        vector<int> V2(n2);
        for (int i = 0; i < n2; ++i)
            cin >> V2[i];

        vector<int> res = ex_union(V1, V2);
        int n3 = res.size();
        cout << n3 << endl;
        for (int i = 0; i < n3; ++i)
            cout << " " << res[i];
        cout << endl
             << endl;

        for (int r = 0; r < 200; ++r) {
            vector<int> res2 = ex_union(V1, V2);
            if (res2 != res)
                cout << "Resultats diferents amb la mateixa entrada!" << endl;
        }
    }
}
