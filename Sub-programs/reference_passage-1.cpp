#include <iostream>
#include <stdlib.h>

using namespace std;

void robinHood(string p1, float s1, string p2, float s2, float &rH, string &r){
  if(s1>s2){
    r=p1;
  }
  else{
    r=p2;
  }
  rH=(s1+s2)/2;
}

int main(){
  string p1, p2, r;
  float s1, s2, rH;

  /*
  p1: prima persona
  p2: seconda persona
  s1: saldo della prima persona
  s2: saldo della seconda persona
  rH: 'Robin Hood' = media dei 2 saldi
  r: persona inizialmente ricca
  */

  cout<<"Inserisci il nome della prima persona: ";
  cin>>p1;
  cout<<"Inserisci il suo saldo: ";
  cin>>s1;

  cout<<"\nInserisci il nome della seconda persona: ";
  cin>>p2;
  cout<<"Inserisci il suo saldo: ";
  cin>>s2;

  robinHood(p1, s1, p2, s2, rH, r);

  cout<<"\n\nPrima del passaggio di Robin Hood, "<<r<<" era il piu' ricco.";
  cout<<"\n\nOra possiedono tutte e due un patrimonio pari a "<<rH<<" denari.\n\n";

  system("pause");
  return 0;
}
