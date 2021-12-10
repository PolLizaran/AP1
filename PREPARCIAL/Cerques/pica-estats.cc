#include <iostream>
using namespace std;

bool es_pic(int a, int b, int c)
{
    return a < b && c < b && b > 3143;
}

int main()
{
    int a, b, c;
    bool existeix = false;
    cin >> a >> b;
    while (cin >> c and c != 0 and not existeix) {
        if (es_pic(a, b, c)) {
            existeix = true;
        }
        a = b;
        b = c;
    }
    cout << (existeix ? "SI" : "NO") << endl;
}
