// programa que calcula el mínim entre dues variables
#include <iostream>
using namespace std;

// aquesta funció retorna el valor entre x i y
// escribim x i y per definir una funció independentment dels paràmetres reals
// de la funció, són paràmetres formals
int minim2(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}
// no obstant, després de definir la funció amb paràmetres formals, després hem
// de definir els paràmetres reals
int main() {
  int a, b;
  cin >> a >> b;
  cout << minim2(a, b) << endl;
}

// SEGON PROGRAMA PER CALCULAR EL MÍNIM DE 3

int minim2(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << minim2(minim2(a, b), c) << endl;
}

// TAMBÉ ES PODRIA FER DE LA SEGÜENT MANERA, JA QUE LES FUNCIONS SÓN
// INTERPOLABLES ENTRE ELLS

int minim2(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}
int minim3(int x, int y, int z) { return minim2(minim2(x, y), z); }
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << minim3(a, b, c) << endl;
}
