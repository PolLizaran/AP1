#include <iostream>
#include <vector>

using namespace std;

int n, d, total_harm = 0;

bool is_harmonious(const vector<int>& v, int zeros, int ones){
    return abs(zeros - ones) <= d;
}


void harmoniosos(int k, vector<int>& v, int zeros, int ones){
    if(k == n){
        ++total_harm;
        return;
    }else{
        if(is_harmonious(v, zeros + 1, ones)){
            v[k] = 0;
            harmoniosos(k + 1, v, zeros + 1, ones);
        }
        if(is_harmonious(v, zeros, ones + 1)){
            v[k] = 1;
            harmoniosos(k + 1, v, zeros, ones + 1);
        }
    }
}


int main(){
    while(cin >> n >> d){
        vector<int> v(n);
        harmoniosos(0, v, 0, 0);
        cout << total_harm << endl;
        total_harm = 0;
    }
}
