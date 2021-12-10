#include <iostream>
#include <vector>
using namespace std;

void write_combinations(const vector<int>& v){
    int s = v.size();
    for(int i = 0; i < s - 1; ++i){
        cout << v[i] << ' ';
    }
    cout << v[s - 1] << endl;
}

void generate(int k, vector<int>& v, int max_o, int max_z, int curr_o, int curr_z){
    int n = v.size();
    if(k == n) write_combinations(v);
    else{
        if(curr_z < max_z){
            v[k] = 0;
            generate(k + 1, v, max_o, max_z, curr_o, curr_z + 1);
        }
        if(curr_o < max_o){
            v[k] = 1;
            generate(k + 1, v, max_o, max_z, curr_o + 1, curr_z);
        }
    }
}


int main(){
    int n, o;
    cin >> n >> o;
    vector<int> v(n);
    generate(0, v, o, n - o, 0, 0);
}
