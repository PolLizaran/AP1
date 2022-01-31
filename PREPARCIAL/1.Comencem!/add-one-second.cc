#include <iostream>
using namespace std;
int main(){
int hores, minuts, segons;
cin>> hores>> minuts>> segons;
segons= segons + 1;
if (segons == 60){
  segons = 0;
  minuts= minuts +1;
   if (segons<10)
     segons =0;

      if (minuts == 60){
       minuts = 0;
       hores = hores + 1;
        if (hores==24){
         hores = 0;
     }
   }
 }
 if (hores < 10){
   cout<< 0;}
   cout<< hores;
   cout<< ":";
   if (minuts < 10){
     cout<< 0;}
     cout<< minuts;
     cout<< ":";
     if (segons < 10){
       cout<< 0;}
       cout<< segons<<endl;
}
