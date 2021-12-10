#include <iostream>
#include <vector>
using namespace std;

vector<bool> eratostenes(int n)
{
    vector<bool> v(n, true);
    v[0] = false;
    v[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (v[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                v[j] = false;
            }
        }
    }
    return v;
}

int main()
{
    int n;
    //important crear el vector amb n + 1 posicions, sino el programa intenta accedir a una posicio que no existeix
    vector<bool> v = eratostenes(1000001);
    while (cin >> n) {
        if (v[n])
            cout << n << " es primer" << endl;
        else
            cout << n << " no es primer" << endl;
    }
}
