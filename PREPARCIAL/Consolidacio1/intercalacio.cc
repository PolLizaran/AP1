#include <iostream>
using namespace std;

//farem dues funcio que giraran els nombres

int intercalacio(int x, int y)
{
    if (x == 0) {
        return y;
    } else {
        int n = 0;
        int x_girada = 0, y_girada = 0;
        while (x > 0) {
            if (x % 10 == 0) {
                zeros *= 10;
            }
            x_girada = ((x_girada * 10) + (x % 10));
            y_girada = ((y_girada * 10) + (y % 10));

            x /= 10;
            y /= 10;
        }
        while (x_girada > 0) {
            n = (n * 10) + (x_girada % 10);
            n = (n * 10) + (y_girada % 10);
            x_girada /= 10;
            y_girada /= 10;
        }
        return n;
    }
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        cout << intercalacio(x, y) << endl;
    }
}
