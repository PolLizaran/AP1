#include <iostream>
#include <vector>

using namespace std;

struct Data {
    int dia;
    int mes;
    int any;
};

void llegir_data(Data& data)
{
    cin >> data.dia >> data.mes >> data.any;
}

struct Persona {
    string nom;
    int dni;
    Data naixament;
    string municipi;
};

void llegir_persona(Persona& persona)
{
    cin >> persona.nom >> persona.dni;
    llegir_data(persona.naixament);
    cin >> persona.municipi;
}

struct Soci {
    int dni;
    bool junta;
    Data inscripcio;
};

void llegir_soci(Soci& soci)
{
    cin >> soci.dni;
    char si_no;
    cin >> si_no;
    if (si_no == 'S')
        soci.junta = true;
    else
        soci.junta = false;
    llegir_data(soci.inscripcio);
}

using Persones = vector<Persona>;

using Socis = vector<Soci>;

// Retorna el nombre de socis que siguin a la junta i
// visquin en un municipi donat i hagin nascut a
// l'any donat o més tard.
//
// Precondició: persones i socis ordenats per dni

void buscar_poble_i_any(const Persones& persones, int dni, int& k, string& poble, int& any_nascut)
{
    int m = persones.size();
    while ((k < m) and (dni != persones[k].dni)) {
        ++k;
    }
    poble = persones[k].municipi;
    any_nascut = persones[k].naixament.any;
}

int nombre_de_socis_joves_a_la_junta_en_un_municipi(const Persones& persones, const Socis& socis, int any, const string& municipi)
{
    int n = socis.size();
    int socis_compleixen_requisits = 0, k = 0;
    for (int i = 0; i < n; ++i) {
        string poble;
        int any_nascut;
        if (socis[i].junta) {
            buscar_poble_i_any(persones, socis[i].dni, k, poble, any_nascut);
            if ((poble == municipi) and (any_nascut >= any)) {
                ++socis_compleixen_requisits;
            }
        }
    }
    return socis_compleixen_requisits;
}

int main()
{
    // llegir persones
    int np;
    cin >> np;
    Persones persones(np);
    for (Persona& persona : persones) {
        llegir_persona(persona);
    }

    // llegir socis
    int ns;
    cin >> ns;
    Socis socis(ns);
    for (Soci& soci : socis) {
        llegir_soci(soci);
    }

    // llegir paràmetres
    int any;
    cin >> any;
    string municipi;
    cin >> municipi;

    // escriure el resultat
    cout << nombre_de_socis_joves_a_la_junta_en_un_municipi(persones, socis, any, municipi);
}
