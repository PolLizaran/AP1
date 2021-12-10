#include <iostream>
using namespace std;

int main()
{
    int n_entrada;
    int posicio = 1;
    while (cin >> n_entrada) {
        if (n_entrada % 2 == 0 and n_entrada != 1) {
            cout << posicio << endl;
            break;
        } else
            ++posicio;
    }
}
