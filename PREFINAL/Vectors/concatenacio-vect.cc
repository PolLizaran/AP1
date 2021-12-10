#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& V1, const vector<int>& V2)
{
    vector<int> res(V1.size() + V2.size());
    int posicio = 0;
    for (int i = 0; i < V1.size(); ++i) {
        res[posicio] = V1[i];
        ++posicio;
    }
    for (int j = 0; j < V2.size(); ++j) {
        res[posicio] = V2[j];
        ++posicio;
    }
    return res;
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
        vector<int> res = concatenacio(V1, V2);
        cout << res.size() << endl;
        for (int i = 0; i < (int)res.size(); ++i)
            cout << " " << res[i];
        cout << endl;
    }
}
