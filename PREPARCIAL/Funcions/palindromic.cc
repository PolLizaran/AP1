#include <iostream>
using namespace std;
bool is_palindromic(int n) {
  int r = 0;
  int x = n;
  while (x > 0) {
    r = r * 10;
    r = (x % 10) + r;
    x = x / 10;
  }
  return r == n;
}
int main() {
  int n;
  cin >> n;
  cout << is_palindromic(n) << endl;
}
