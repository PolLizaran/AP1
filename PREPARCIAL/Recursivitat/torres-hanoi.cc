#include <iostream>
using namespace std;

//busquem una solucio recursiva pel problema
void hanoi(int n, char(ori), char(dest), char(aux))
{
    //El pal B es l'auxiliar, l'A l'origen i el C el destí
    //Per poder moure totes les peces d'un pal a un altre lloc es necessiten n! - 1 moviments
    if (n > 0) {
        hanoi(n - 1, ori, aux, dest);

        cout << ori << " => " << dest << endl;
        //aqui hem d'intercanviar l'ordre ja que l'aux, passa a ser l'origen
        hanoi(n - 1, aux, dest, ori);
    }
}

int main()
{
    int n; //Pre: 1 <= n <= 18
    while (cin >> n) {
        hanoi(n, 'A', 'C', 'B');
    }
}
