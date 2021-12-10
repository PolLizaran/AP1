#include <iostream>
using namespace std;

bool es_parell(int a, int b, int c) //determina si el comptador pot incrementar-se
{
    return (b + c) < (a + b);
}

int main()
{
    //La condicio pq el comptador pugi es que a + b > b + c
    int a, b, c, n;
    cin >> n;
    while (n > 0) {
        int comptador = 0;
        cin >> a;
        if (a != -1) {
            cin >> b;
            if (b != -1)
                while (cin >> c and c != -1) {
                    if (es_parell(a, b, c))
                        ++comptador;
                    a = b;
                    b = c;
                }
        }
        cout << comptador << endl;
        --n;
    }
}
