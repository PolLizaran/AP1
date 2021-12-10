#include <iostream>
using namespace std;
void intercanviar(int x, int y) {
  cout << x << endl;
  cout << y << endl;
  int z = x;
  x = y;
  y = z;
  cout << x << endl;
  cout << y << endl;
}
int main() {
  int a = 3;
  int b = 5;
  intercanviar(a, b);
  cout << a << endl;
  << b << endl;
}
