#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  do {
    int r = n % 16;
    if (r < 10) {
      cout << r;
    } else
      cout << char('A' + (r - 10));
    n = n / 16;
  } while (n != 0);
  cout << endl;
}
