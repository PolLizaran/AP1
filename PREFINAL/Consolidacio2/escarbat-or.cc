#include <iostream>
#include <vector>
using namespace std;

void transcriure_codi(int linies, const vector<char>& xifrat, const vector<char>& alfabet)
{
    string codi;
    for (int k = 0; k < linies; ++k) {
        cin >> codi;
        int size = codi.size();
        for (int l = 0; l < size; ++l) {
            int place = 0;
            while (codi[l] != xifrat[place]) {
                ++place;
            }
            cout << alfabet[place];
            place = 0;
        }
        cout << endl;
    }
}

int main()
{
    vector<char> alfabet(27);
    alfabet[0] = ' ';
    for (int i = 1; i < 27; ++i) {
        alfabet[i] = ('a' + char(i) - char(1));
    }
    char primer_simbol;
    while (cin >> primer_simbol) {
        vector<char> xifrat(27); //vector que assigna a cada posicio un signe;
        xifrat[0] = '_';
        xifrat[1] = primer_simbol;
        for (int j = 2; j < 27; ++j) {
            cin >> xifrat[j];
        }

        int linies;
        cin >> linies;
        transcriure_codi(linies, xifrat, alfabet);
        cout << endl;
    }
}
