#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string word;
    vector<string> v;
    for(int i = 0; i < n; ++i){
        cin >> word;
        v.push_back(word);
    }

    for(int j = n - 1; j > -1; --j){
        string toreverse = v[j];
        for(int k = toreverse.size() - 1; k > -1; --k) cout << toreverse[k];
        cout << endl;
    }
}
