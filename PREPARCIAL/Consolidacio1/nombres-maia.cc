

#include <iostream>
using namespace std;

int canvi_base(int x)
{
}

void normalitzacio(int x)
{
    string linia = "_____";
    for (int i = 1; i <= x % 5; ++i) {
        cout << '.';
        if (i == x % 5)
            cout << endl;
    }
    while (x >= 5) {
        cout << linia << endl;
        x -= 5;
    }
}

int main()
{
    int enter;
    while (cin >> enter) {
        while (enter > 0) {
            normalitzacio(enter % 20);
            enter /= 20;
        }
    }
}
