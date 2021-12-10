#include <iostream>
using namespace std;
int main() {
  int n_as = 0;
  char c;
  // aquesta manera de llegir caràcters salta els espais en blanc sense
  // comptar-los
  while (cin >> c) {
    if (c == 'a' or c == 'A') {
      ++n_as;
    }
  }
  cout << n_as << endl;
}
