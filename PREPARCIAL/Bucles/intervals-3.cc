#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if ((a < c and b < c) or (a > d and b > d)) {
    cout << "? , []" << endl;
  } else if (a == c and b == d) {
    cout << "= , ";
  } else if (a == d or b == c) {
    cout << "? , ";
  } else if (a >= c and b <= d) {
    if (a != c or b != d) {
      cout << "1 , ";
    }
    cout << "[" << a << "," << b << "]" << endl;
  } else if (a <= c and b >= d) {
    if (a != c or b != d) {
      cout << "2 , ";
    }
    cout << "[" << c << "," << d << "]" << endl;
  } else if (a <= c and b <= d) {
    cout << "[" << c << "," << b << "]" << endl;
  } else if (a >= c and b >= d) {
    cout << "[" << a << "," << d << "]" << endl;
  }
}
