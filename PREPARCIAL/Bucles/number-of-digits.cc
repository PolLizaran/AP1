#include <iostream>
using namespace std;
int main() {
  int n;
  int k = 1;
  cin >> n;
  for (int i = 10; n >= i; i = i * 10) {
    ++k;
  }
  cout << "The number of digits of " << n << " is " << k << "." << endl;
}
