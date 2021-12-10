#include <iostream>
using namespace std;

int main()
{
    string p1, p2, aux;
    cin >> p1 >> p2;
    if (p1 < p2) {
        string x = p1;
        p1 = p2;
        p2 = x;
    }
    while (cin >> aux) {
        if (p1 == p2 and p1 > aux) {
            p2 = aux;
        } else if (aux > p1) {
            p2 = p1;
            p1 = aux;
        } else if (aux > p2 and aux < p1) {
            p2 = aux;
        }
    }
    cout << p2 << endl;
}
