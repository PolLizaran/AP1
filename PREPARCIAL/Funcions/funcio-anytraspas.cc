#include <iostream>
using namespace std;
bool es_any_de_traspas(int any) {
  if (any % 100 == 0) {
    if (any / 100 % 4 == 0) {
      return true;
    } else
      return false;
  } else if (any % 4 == 0) {
    return true;
  } else
    return false;
}
int main() {
  int any;
  cin >> any;
  cout << es_any_de_traspas(any) << endl;
}
