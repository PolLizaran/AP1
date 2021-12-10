#include <iostream>
using namespace std;
void pintar_files(int files, string simbol) {
  if (files > 0) {
    cout << simbol;
    pintar_files(files - 1, simbol);
  } else {
    cout << endl;
  }
}
int main() {
  int files;
  cin >> files;
  for (int i = 1; files >= i; ++i) {
    pintar_files(files, "#");
  }
}
