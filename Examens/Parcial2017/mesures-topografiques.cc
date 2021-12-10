#include <iostream>
using namespace std;
int main()
{
    int r, n;
    int altura = 0, neu = 0;
    while (cin >> r >> n) {
        altura += r;
        neu += n;
        if (altura < 0 or neu < 0) {
            cout << "ERROR" << endl;
            break;
        }

        int copia_altura = altura, copia_neu = neu;
        while (copia_altura > 0) {
            cout << 'X';
            --copia_altura;
        }
        while (copia_neu > 0) {
            cout << '.';
            --copia_neu;
        }
        cout << endl;
    }
}
