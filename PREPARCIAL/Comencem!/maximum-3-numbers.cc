#include <iostream>
using namespace std;
int main(){
int a, b, c;
cin >>a>>b>>c;
int m;
if (a>=b and a>=c){
  m=a;
} else {
  if(b>=a and b>=c)
    m=b;
    else{
      m=c;
    }  
  }
  cout<< m <<endl;
  }
