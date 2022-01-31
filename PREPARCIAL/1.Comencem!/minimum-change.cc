#include <iostream>
using namespace std;
int main(){
int euros, cents;
cin>>euros >> cents;
cout<< "Banknotes of 500 euros: "<< euros/500 << endl;
cout<< "Banknotes of 200 euros: "<< euros%500/200 << endl;
cout<< "Banknotes of 100 euros: "<< euros%500%200/100 << endl;
cout<< "Banknotes of 50 euros: "<< euros%500%200%100/50<< endl;
cout<< "Banknotes of 20 euros: "<< euros%500%200%100%50/20 << endl;
cout<< "Banknotes of 10 euros: "<< euros%500%200%100%50%20/10 << endl;
cout<< "Banknotes of 5 euros: "<< euros%500%200%100%50%20%10/5 << endl;
cout<< "Coins of 2 euros: "<< euros%500%200%100%50%20%10%5/2 << endl;
cout<< "Coins of 1 euro: "<< euros%500%200%100%50%20%10%5%2/1 << endl;
cout<< "Coins of 50 cents: "<< cents/50 << endl;
cout<< "Coins of 20 cents: "<< cents%50/20 << endl;
cout<< "Coins of 10 cents: "<< cents%50%20/10 << endl;
cout<< "Coins of 5 cents: "<< cents%50%20%10/5 << endl;
cout<< "Coins of 2 cents: "<< cents%50%20%10%5/2 << endl;
cout<< "Coins of 1 cent: "<< cents%50%20%10%5%2/1 << endl;
}
