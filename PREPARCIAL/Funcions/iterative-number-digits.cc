#include <iostream>
using namespace std;
int number_of_digits(int n) {
  int i = 1;
  int d = 10;
  while (n / d > 0) {
    ++i;
    d = d * 10;
  }
  return i;
}

int main() {
  int n;
  cin >> n;
  cout << number_of_digits(n) << endl;
}
