#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s)
{
    int size = s.size();

    for (int i = 0; i < size / 2; ++i) {
        if (s[i] != s[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    string paraula;
    cin >> paraula;

    if (es_palindrom(paraula)) {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;
}
