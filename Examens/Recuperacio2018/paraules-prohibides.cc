#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<int>& permutacions)
{
    int n = permutacions.size();
    for (int k = 0; k < n; ++k) {
        cout << char('a' + permutacions[k]);
    }
    cout << endl;
}

void generar(int i, vector<int>& permutacions, vector<bool>& u)
{
    int n = permutacions.size();
    if (i == n) {
        escriure(permutacions);
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                permutacions[i] = j;
                //important aquesta restriccio, sino podríem arribar a accedia a posicions no existents
                if ((i == 0) or (permutacions[i] - 1 != permutacions[i - 1])) {
                    u[j] = true;
                    generar(i + 1, permutacions, u);
                    u[j] = false;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> permutacions(n);
    //farem tot el programa amb permutacions sobre enters i ja despres farem
    //la conversio a les lletres per facilitar el programa i fer-lo mes eficient
    vector<bool> u(n, false); //ens permet saber si una lletra ja ha estat emprada
    generar(0, permutacions, u);
}
