#include <cassert>
#include <iostream>
using namespace std;

//comprova que els valors introduits estiguin entre 0 i 9
bool digit(char c)
{
    return c >= '0' and c <= '9';
}

//com ho estem llegint com a un char, hem de fer la conversió de char a numero enter i aixo es fa restant '0'
int converteix_digit(char c)
{
    return c - '0';
}

int avaluar()
{
    char c;
    cin >> c;
    if (digit(c)) {
        return converteix_digit(c);
    } else {
        assert(c == '+' or c == '-' or c == '*'); //assegurar-nos que ens donen operadors valids
        int op1 = avaluar();
        int op2 = avaluar();
        if (c == '+')
            return op1 + op2;
        if (c == '-')
            return op1 - op2;
        if (c == '*')
            return op1 * op2;
    }
}

int main()
{
    cout << avaluar() << endl;
}
