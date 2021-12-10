#include <cmath>
#include <iostream>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) //retorna distancia euclidiana
{

    return sqrt(((x1 - y1) * (x1 - y1)) + ((x2 - y2) * (x2 - y2)));
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    string lloc;
    while (cin >> lloc) {
        double x_inicial, y_inicial, x1, y1, x2, y2;
        cin >> x_inicial >> y_inicial;
        x1 = x_inicial;
        y1 = y_inicial;
        double suma = 0.0;

        while ((cin >> x2 and cin >> y2) and (not(x2 == x_inicial and y2 == y_inicial))) {
            suma += distancia(x1, x2, y1, y2);
            x1 = x2;
            y1 = y2;
        }
        suma += distancia(x1, x2, y1, y2);
        cout << "Trajecte " << lloc << ": " << suma << endl;
    }
}
