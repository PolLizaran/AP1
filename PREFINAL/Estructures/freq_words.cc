#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Words{
    string info;
    int repetitions;
};

bool requirements(const Words& a, const Words& b){
    if(a.repetitions == b.repetitions) return a.info < b.info;
    return a.repetitions > b.repetitions;
}

//given a vector of strings it returns a vector of Words sorted by its frequency and in case
//of tie by alphabetical order
vector<Words> sorting_vector(vector<string>& v){
    int s = v.size();
    sort(v.begin(), v.end());
    vector<Words> v_freq;
    //loop to create a new vector with no words repeated in it, each one with its frequency
    for(int i  = 0; i < s; ++i){
        if(v_freq.empty() or v[i] != v_freq.back().info) v_freq.push_back({v[i], 1});
        else ++v_freq.back().repetitions;
    }
    sort(v_freq.begin(), v_freq.end(), requirements);
    return v_freq;
}

void print_most_freq_word(vector<string>& v, const int& k){

    vector<Words> v_freq = sorting_vector(v);

    for(int j = 0; j < k; ++j){
        cout << v_freq[j].info << endl;
    }
    cout << "----------" << endl;
}

int main(){
    int n, k;
    while(cin >> n >> k){
        vector<string> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        print_most_freq_word(v, k);
    }
}
