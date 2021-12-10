#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool ordenar_reves(int a, int b)
{
    if (a < b)
        return false;
    return true;
}

vector<char> llegir_vectors(vector<char>& carrer, string nombre_carrer)
{
    int n nombre_carrer.size();
    for (int i = 0; i < n; ++i) {
        carrer[i] = nombre_carrer[i];
    }
}
void nombre_petit(vector<char>& carrer)
{
    //ordenacio de petit a gran
    carrer = sort(carrer.begin(), carrer.end());
}

void nombre_gran(vector<char>& carrer)
{
    //ordenacio de gran a petit
    gran = sort(carrer.begin(), carrer.end(), ordenar_reves);
}
vector mes_distancia(vector<char>& carrer, vector<char>& diferencia_amb_gran, vector<char>& diferencia_amb_gran)
{
    diferencia_amb_gran = nombre_gran(carrer);
    diferencia_amb_petit = nombre_petit(carrer);
    if (diferencia_amb_gran >= diferencia_amb_petit) {
        return diferencia_amb_gran;
    }
    return diferencia_amb_petit;
}

int restar_vectors(vector<char>& carrer)
{
    vector<char> petit = nombre_petit(carrer);
    vector<char> gran = nombre_gran(carrer);
    vector<char> diferencia_amb_gran;
    int n = carrer.size();
    for (int i = 0; i < n; ++i) {
        diferencia_amb_gran[i] = gran[i] - carrer[i];
    }
    vector<char> diferencia_amb_petit;
    for (int j = 0; j < n; ++j) {
        diferencia_amb_petit[j] = carrer[j] - petit[j];
    }
    return mes_distancia(diferencia_amb_gran, diferencia_amb_petit);
}

void escriure_vector(vector<char>& carrer)
{
    vector<char> sortida = restar_vectors(carrer);
    int n = sortida.size();
    for (int i = 0; i < n; ++i) {
        cout << sortida[i];
    }
    cout << endl;
}

int main()
{
    string nombre_carrer;
    cin >> nombre_carrer;
    vector<char> carrer = llegir_vectors(carrer, nombre_carrer);
    escriure_vector(carrer, nombre_carrer);
}
