#include <iostream>
using namespace std;
int main() {
  int n, r;
  cin >> n;
  for (int i = n; i >= 16; i = i / 16) {
    r = i % 16;
    if (r >= 10) {
      if (r == 10) {
        cout << 'A';
      }
      if (r == 11) {
        cout << 'B';
      }
      if (r == 12) {
        cout << 'C';
      }
      if (r == 13) {
        cout << 'D';
      }
      if (r == 14) {
        cout << 'E';
      }
      if (r == 15) {
        cout << 'F';
      }
    } else {
      cout << r;
    }
  }
  cout << (i / 16) << endl;
}
