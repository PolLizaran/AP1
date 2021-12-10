#include <iostream>
using namespace std;
int max2(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << max2(a, b) << endl;
}
