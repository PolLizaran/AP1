#include <iostream>
using namespace std;

//creem una accio que llegeixi la seguencia
//aquesta ens determina si esta buida o no i a mes ens modifica els valors de la suma
//per fer-ho, necessitem passar-los per referencia, pq son paramentres d'entrada sortida
void llegir_sequencia(bool& buida, int& suma, int& darrer)
{
    suma = 0;
    int element;
    cin >> element;
    buida = element == 0;
    while (element != 0) {
        suma += element;
        darrer = element;
        cin >> element;
    }
}

int main()
{
    bool buida;
    int primera_suma, ultim;

    llegir_sequencia(buida, primera_suma, ultim);

    int similars = 1;
    int sumatori, darrer;
    llegir_sequencia(buida, sumatori, darrer);
    while (!buida) {
        if (sumatori == primera_suma and darrer == ultim) {
            ++similars;
        }
        llegir_sequencia(buida, sumatori, darrer);
    }
    cout << similars << endl;
}
