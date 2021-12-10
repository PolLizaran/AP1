#include <iostream>
using namespace std;
bool es_minuscula(char(c)) { return c >= 'a' and c <= 'z' }
// aquesta acció la fem per saber quants caràcters per sota de la a estem i
// després poder sumar-li la mateixa quantitat de caràcters per arribar a la
// mateixa lletra però en majúscula, ja que els caràcters són un número sobre un
// conveni.
char a_majuscula(char(c)) { return chart(int(c) - int('a') + int('A')); }
// Aquesta mateixa acció és pot executar amb char(c-'a'+'A')
int main() {
  cin >> c;
  if (es_majuscula(c)) {
    cout << a_majuscula(c) << endl;
  }
}
