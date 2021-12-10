#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//abans, les paraules amb lletres minuscules;
//en cas d’empat, les paraules mes curtes;
//en cas d’un altre empat, en ordre alfabetic.

// procediment que cal implementar
bool criteris(string& a, string& b)
{
    bool minusc_a = a[0] >= 'Z';
    bool minusc_b = b[0] >= 'Z';
    //important tenir en compte que els chars majuscules corresponen a nombres mes petits
    if (minusc_a == minusc_b) {
        if (a.size() == b.size())
            return a < b;
        else
            return a.size() < b.size();
    } else {
        return char(a[0]) >= 'Z';
    }
}

void ordenar(vector<string>& paraules)
{
    sort(paraules.begin(), paraules.end(), criteris);
}

int main()
{
    // llegir paraules en un vector
    vector<string> paraules;
    {
        string paraula;
        while (cin >> paraula) {
            paraules.push_back(paraula);
        }
    }

    // ordenar el vector amb la funció que cal implementar
    ordenar(paraules);

    // escriure el vector
    for (const string& paraula : paraules) {
        cout << paraula << endl;
    }
}
