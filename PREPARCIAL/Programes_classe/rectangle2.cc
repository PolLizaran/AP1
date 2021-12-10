#include <iostream>
using namespace std;

void pinta_files(int columnes, string simbol) {
  if (columnes > 0) {
    cout << simbol;
    pinta_files(columnes - 1, simbol);
  } else {
    cout << endl;
  }
}
void pinta_rectangle(int files, int columnes, string simbol) {
  if (files > 0) {
    pinta_rectangle(files - 1, columnes, simbol);
    pinta_files(columnes, simbol);
  }
}

int main() {
  int files, columnes;
  cin >> files >> columnes;

  pinta_rectangle(files, columnes, "*");
}
