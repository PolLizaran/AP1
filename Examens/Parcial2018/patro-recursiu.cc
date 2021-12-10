#include <iostream>
using namespace std;

void patro(char lletra)
{
    if (lletra == 'a') {
        cout << lletra;
    } else {
        cout << lletra;
        for (int i = lletra; i > 'a'; --i) {
            patro(lletra - 1);
            cout << lletra;
        }
    }
}

int main()
{
    char lletra;
    cin >> lletra;
    patro(lletra);
    cout << endl;
}
