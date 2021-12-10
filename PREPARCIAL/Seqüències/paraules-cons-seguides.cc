#include <iostream>
using namespace std;
int main()
{
    string s, t, u;
    int paraules_cons = 1;
    cin >> s;
    while (cin >> t) {
        if (t == s) {
            cin >> u;
            if (t == u) {
                ++paraules_cons;
            }
        }
    }
    cout << paraules_cons << endl;
}
