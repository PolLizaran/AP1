#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool trobat = false;
    int j_bona, i_bona;
    int arrel = 0;
    int i = a;
    while (trobat == false and i <= b) {
        int j = c;
        while (trobat == false and j <= d) {
            int resultat = i * i + j * j;
            arrel = sqrt(resultat);
            if (arrel * arrel == resultat) {
                trobat = true;
                j_bona = j;
                i_bona = i;
            }
            ++j;
        }
        ++i;
    }
    if (trobat == true) {
        cout << i_bona << "^2 + " << j_bona << "^2 = " << arrel << "^2" << endl;
    } else {
        cout << "Sense solucio!" << endl;
    }
}
