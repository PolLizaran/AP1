#include <cmath>
#include <iostream>
using namespace std;

//funcio que calcula el digit del mig d'un nombres i a sobre comprova que sigui parell.

int digit_mig(int n)
{
    if (n == 0) {
        return 0;
    }
    int n2 = n, nombre_digits = 0;
    while (n2 > 0) {
        n2 /= 10;
        ++nombre_digits;
    }
    if (nombre_digits % 2 == 0) {
        return -1; //retorna -1 en el cas que el nombre sigui parell
    } else {
        n = n / pow(10, nombre_digits / 2);
        return n % 10;
    }
}
//bolea que controla que el nombre entrat tingui el mateix nombre central i que no sigui parell

bool bona_entrada(int n, int central)
{
    return (digit_mig(n) == central) and (digit_mig(n) != -1);
}

//funcio per determinar si guanya el Bernat o Anna
char ber_anna(int compt)
{
    if (compt % 2 == 0) {
        return 'A';
    } else
        return 'B';
}

int main()
{
    int n, seq;
    cin >> n >> seq;
    int dos_n = 2 * n - 1, central = digit_mig(seq);
    int compt = 1;
    bool guanyen_dos = true;
    if (!bona_entrada(seq, central)) {
        cout << 'B' << endl;
        guanyen_dos = false;
    }

    while (dos_n > 0 and guanyen_dos) {
        cin >> seq;
        ++compt;
        if (!bona_entrada(seq, central)) {
            cout << ber_anna(compt) << endl;
            guanyen_dos = false;
        }
        --dos_n;
    }
    if (guanyen_dos) {
        cout << '=' << endl;
    }
}
