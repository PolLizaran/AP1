#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//criteris d'ordenacio:
//1.petit a gran en funcio area
//2.gran a petit segons perimetre
//3. menys amplada

struct Rectangle {
    int amplada;
    int altura;
    int area;
    int perimetre;
};

//Importantissim que alhora de fer la funicio bool no passem l'estructura Rectangle com un vector
bool criteris(const Rectangle& a, const Rectangle& b)
{
    if (a.area != b.area)
        return a.area < b.area;
    if (a.perimetre != b.perimetre)
        return a.perimetre > b.perimetre;
    return a.amplada < b.amplada;
}

vector<Rectangle> llegir_Rectangles(int n)
{

    vector<Rectangle> figures(n);
    for (int i = 0; i < n; ++i) {
        cin >> figures[i].amplada >> figures[i].altura;
        figures[i].area = figures[i].amplada * figures[i].altura;
        figures[i].perimetre = (2 * figures[i].amplada) + (2 * figures[i].altura);
    }
    return figures;
}

void ordenacio_criteris(vector<Rectangle>& figures)
{
    sort(figures.begin(), figures.end(), criteris);
}

void escriure_Rectangles_ordenats(int n)
{
    vector<Rectangle> figures = llegir_Rectangles(n);
    ordenacio_criteris(figures);
    for (int i = 0; i < n; ++i) {
        cout << figures[i].amplada << ' ' << figures[i].altura << endl;
    }
    cout << "----------" << endl;
}

int main()
{
    int n;
    while (cin >> n) {
        escriure_Rectangles_ordenats(n);
    }
}
