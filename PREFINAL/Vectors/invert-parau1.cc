#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string paraula;
    while (cin >> paraula) {
        int llarg = paraula.size();
        for (int j = llarg - 1; j >= 0; --j) {
            cout << paraula[j];
        }
        cout << endl;
    }
}
