#include <iostream>
using namespace std;

int main()
{
    char lletra;
    int comptador = 0;
    while (cin >> lletra && lletra != '.') {
        if (lletra == 'a') {
            ++comptador;
        }
    }
    cout << comptador << endl;
}
