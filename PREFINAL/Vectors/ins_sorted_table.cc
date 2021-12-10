#include <utility>
#include <iostream>
#include <vector>
using namespace std;


void insert(vector<double>& v){
    int s = v.size();
    bool not_sorted = true;
    for(int i = s - 1; i > 0 and not_sorted; i--){
        if(v[i] > v[i - 1]) not_sorted = false;
        else swap(v[i], v[i - 1]);
    }
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insert(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
