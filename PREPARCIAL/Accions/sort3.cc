#include <iostream>
using namespace std;

void swap2(int& x, int& y){
    int z = y;
    if(y < x){
        y = x;
        x = z;
    }
}


void sort3(int& a, int& b, int& c){

    swap2(a, c);
    swap2(a, b);
    swap2(b, c);

}


int main() {
  int x, y, z;
  while (cin >> x >> y >> z) {
    sort3(x, y, z);
    cout << x << ' ' << y << ' ' << z << endl;
  }
}
