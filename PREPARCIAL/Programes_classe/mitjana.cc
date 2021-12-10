#include <iostream>
using namespace std;
int main() {
  cout.setf(ios::fixed);
  cout.precision(4);
  int c = 0;
  double s = 0;
  double x;
  // aquest while significa que la funció s'executi mentre llegeixi valors de x
  // com a cin
  while (cin >> x) {
    s = s + x; // això és el mateix que escriure s += x
    ++c;
  }
  cout << s / c << endl;
}
