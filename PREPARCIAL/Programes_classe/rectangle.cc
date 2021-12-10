#include <iostream>
using namespace std;
int main() {
  int files, columnes;
  cin >> files >> columnes;

  for (int i = 0; i < files; ++i) {
    for (int j = 0; j < columnes; ++j) {
      cout << "#";
    }
    cout << endl;
  }
}
