#include <iostream>

using namespace std;
//x i y son complementaris en base b si x i y tenen el mateix nombre
//de digits en base b, i tots els dígits de x + y en base b valen b−1.

bool son_complementaris(int x, int y, int b)
{
    if (x < b or y < b) {
        int j = (x % b + y % b);
        if (j % b != b - 1)
            return false;
        return ((x < b) and (y < b));
    } else {
        int suma = (x % b + y % b);
        if (suma % b != b - 1)
            return false;
        else
            return son_complementaris(x / b, y / b, b);
    }
}

int main()
{
    int x, y, b;
    while (cin >> x >> y >> b)
        cout << son_complementaris(x, y, b) << endl;
}
