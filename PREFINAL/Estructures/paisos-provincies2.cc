#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

struct Province {
    string name;
    string capital;
    int population;
    int area;
    double gdp;
};

struct Country {
     string name;
     string capital;
     vector<Province> provs;
 };

typedef vector<Country> Countries;


//retorni la suma de tots els habitants d’aquelles paisos en p que tinguin almenys
//2 províncies amb producte interior brut inferior o igual a x

int population(const Countries& p, double x){
  int n = p.size();
  long long sum_hab = 0;
  for(int i = 0; i < n; ++i){
    int m = p[i].provs.size();
    int n_bigger_gdp = 0;
    int sum_parcial = 0;
    for(int j = 0; j < m; ++j){
      if(p[i].provs[j].gdp <= x){
        ++n_bigger_gdp;
        sum_parcial += p[i].provs[j].population;
      }
    }
    if(n_bigger_gdp >= 2) sum_hab += sum_parcial;
  }
  return sum_hab;
}

int main () {
    int n;    cin >> n;
    Countries p(n);
    for (int i=0; i<n; ++i) {
        int np;
        cin >> p[i].name >> p[i].capital >> np;
        p[i].provs = vector<Province>(np);
        for (int j=0; j<np; ++j) {
            cin >> p[i].provs[j].name >> p[i].provs[j].capital >>
                p[i].provs[j].population >> p[i].provs[j].area >>
                p[i].provs[j].gdp
            ;
        }
    }
    for (double x = 0; x<5000; x+=100) {
        cout << population(p,x) << endl;
    }
}
