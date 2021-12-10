#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int i = 10;
  while (n >= i) {
    cout << (n % i);
    n = (n / i);
  }
  if (n < i) {
    cout << n;
  }
  cout << endl;
}
