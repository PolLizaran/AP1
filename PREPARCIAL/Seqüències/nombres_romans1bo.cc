#include <iostream>

using namespace std;

void romans(int n, char I, char V, char X){
    if(n == 1) cout << I;
    else if(n == 2) cout << I << I;
    else if(n == 3) cout << I << I << I;
    else if(n == 4) cout << I << V;
    else if(n == 5) cout << V;
    else if(n == 6) cout << V << I;
    else if(n == 7) cout << V << I << I;
    else if(n == 8) cout << V << I << I << I;
    else if(n == 9) cout << I << X;
}


int main(){
    int n;
    while(cin >> n){
        cout << n << " = ";
        romans(n / 1000, 'M', '0', '0');//we assign the value correspondant to thousands. '' is because numbers can't arrive at 4000
        romans(n / 100 - (n/1000)*10, 'C', 'D', 'M');//ens quedem només amb el nombre de centenes. Ex: (3651 / 100) - (3651 / 1000)*10 = 36 - 3*10 = 6 
        romans(n / 10 - (n/100)*10, 'X', 'L', 'C');
        romans(n % 10, 'I', 'V', 'X');
        cout << endl;
    }
}
