#include <iostream>
using namespace std;
void pintar_fila(int n, string simbol) {
  if (n > 0) {
    int j = 1;
    while (j <= n) {
      cout << simbol;
      ++j;
    }
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    pintar_fila(i, "*");
  }
}
