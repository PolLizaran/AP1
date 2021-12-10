#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

struct Provincia {
    string nom;
    string capital;
    int habitants;
    int area;
    double pib;
};

struct Pais {
    string nom;
    string capital;
    vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

double calcular_densitat(const Provincia& pr)
{
    //podem accedir directament als habitants i a l'area pq estem passant per referencia constant
    //a l'estructura de Provincia i no la de Pais
    return double(pr.habitants) / double(pr.area);
}

double pib(const Paisos& p, char c, double d)
{
    double pibb = 0;
    int mida = p.size();
    for (int i = 0; i < mida; ++i) {
        if (p[i].nom[0] == c) {
            int n = p[i].provs.size();
            for (int j = 0; j < n; ++j) {
                if (calcular_densitat(p[i].provs[j]) > d)
                    //hem d'escriure-ho aixi si volem que accedeixi a una provincia que esta dins del vector provincies del pais
                    pibb += p[i].provs[j].pib;
            }
        }
    }
    return pibb;
}

//que retorni la suma dels productes interiors bruts de totes les províncies amb densitat
//estrictament superior a d de tots els paisos en p que comencin per la lletra c.

int main()
{
    int n;
    cin >> n;
    Paisos p(n);
    for (int i = 0; i < n; ++i) {
        int np;
        cin >> p[i].nom >> p[i].capital >> np;
        p[i].provs = vector<Provincia>(np);
        for (int j = 0; j < np; ++j) {
            cin >> p[i].provs[j].nom >> p[i].provs[j].capital
                >> p[i].provs[j].habitants >> p[i].provs[j].area
                >> p[i].provs[j].pib;
        }
    }
    cout << pib(p, 'A', 10) << endl;
    cout << pib(p, 'A', 20) << endl;
    cout << pib(p, 'A', 30) << endl;
    cout << pib(p, 'A', 40) << endl;
    cout << pib(p, 'E', 10) << endl;
    cout << pib(p, 'E', 20) << endl;
    cout << pib(p, 'E', 30) << endl;
    cout << pib(p, 'E', 40) << endl;
    cout << pib(p, 'C', 40) << endl;
}
