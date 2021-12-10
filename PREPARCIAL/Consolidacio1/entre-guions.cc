#include <iostream>
using namespace std;

int main()
{
    char c;
    int curtes = 0, mitjanes = 0, llargues = 0, comptador = 0;
    while (cin >> c and c != '.') {
        if (c >= 'a' and c <= 'z') {
            ++comptador;
        } else if (c == '-' and comptador != 0) {
            if (comptador < 5)
                ++curtes;
            else if (comptador <= 9)
                ++mitjanes;
            else
                ++llargues;
            comptador = 0;
        }
    }
    if (comptador != 0) {
        if (comptador < 5)
            ++curtes;
        else if (comptador <= 9)
            ++mitjanes;
        else
            ++llargues;
    }
    cout << curtes << ',' << mitjanes << ',' << llargues << endl;
}
