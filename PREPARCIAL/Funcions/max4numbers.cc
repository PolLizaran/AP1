#include <iostream>
using namespace std;
int max2(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}
int max3(int x, int y, int z) { return max2(max2(x, y), z); }
int max4(int x, int y, int z, int j) { return max2(max2(max2(x, y), z), j); }
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << max4(a, b, c, d) << endl;
}
