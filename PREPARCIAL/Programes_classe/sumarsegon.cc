#include <iostream>
using namespace std;
// paràmetres de sortida
void escriure_hora(int h, int m, int s) {
  cout << h << ":" << m << ":" << s << endl;
}
// paràmetres d'entrada
void llegir_hola(int &h, int &m, int &s) { cin >> h >> m >> s; }
// paràmetres d'entrada i sortida
void sumar_un_segon(int &h, int &m, int &s) {
  ++s;
  if (s == 60) {
    s = 0;
    m = m + 1;
    if (m == 60) {
      m = 0;
      h = h + 1;
      if (h == 24) {
        h = 0;
      }
    }
  }
}
int main() {
  int h, m, s;
  llegir_hola(h, m, s);
  escriure_hora(h, m, s);
  sumar_un_segon(h, m, s);
  escriure_hora(h, m, s);
  sumar_un_segon(h, m, s);
  escriure_hora(h, m, s);
}
// també és podria fer una acció de descomposició de segons en hores minuts i
// segons,
// la n seria un paràmetre d'entrada(per tant s'hauria de fer per còpia), mentre
// que
// les hores els minuts i segons serien de sortida (s'utilitzaria per
// referència)
