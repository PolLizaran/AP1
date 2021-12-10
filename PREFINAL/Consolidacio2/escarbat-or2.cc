#include <iostream>
#include <vector>
using namespace std;

void transcriure_codi(int linies, const vector<char>& xifrat)
{
    string codi;
    for (int k = 0; k < linies; ++k) {
        cin >> codi;
        int size = codi.size();
        for (int l = 0; l < size; ++l) {
            int place = 0;
            if (codi[l] == '_')
                cout << ' ';
            else {
                while (codi[l] != xifrat[place]) {
                    ++place;
                }
                cout << char('a' + char(place));
                place = 0;
            }
        }
        cout << endl;
    }
}

int main()
{

    char primer_simbol;
    while (cin >> primer_simbol) {
        vector<char> xifrat(27); //vector que assigna a cada posicio un signe;
        xifrat[0] = primer_simbol;
        for (int j = 1; j < 26; ++j) {
            cin >> xifrat[j];
        }
        int linies;
        cin >> linies;
        transcriure_codi(linies, xifrat);
        cout << endl;
    }
}
