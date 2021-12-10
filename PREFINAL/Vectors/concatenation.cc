#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenation(const vector<int> & V1, const vector<int> & V2){
    int s1 = V1.size(), s2 = V2.size();
    vector<int> conc(s1);
    conc = V1;
    for(int i = s1; i < s1 + s2; ++i){
        conc.push_back(V2[i - s1]);
    }
    return conc;
}
