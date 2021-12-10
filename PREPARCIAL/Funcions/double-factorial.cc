#include <iostream>
using namespace std;
int double_factorial(int x) {
  int j = 1;
  for (int i = x; i >= 1; i = i - 2) {
    j = i * j;
  }
  return j;
}

int main() {
  int n;
  cin >> n;
  cout << double_factorial(n) << endl;
}
