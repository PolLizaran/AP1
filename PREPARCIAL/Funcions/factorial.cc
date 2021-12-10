#include <iostream>
using namespace std;
int factorial(int n) {
  int j = 1;
  int i = 1;
  for (int i = 1; n >= i; i++) {
    j = j * i;
  }
  return j;
}

int main() {
  int n;
  cin >> n;
  cout << factorial(n) << endl;
}
