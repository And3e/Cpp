#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int m, n=0, x, e, i=0;
  srand(time(NULL));

  cout<<"Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\nInserisci il valore da superare: ";
  cin>>x;

  while(n<x){
    e=rand()%m+1;
    cout<<e<<"  ";
    n+=e;
    i++;
  }

  cout<<"\n\nTentativi effettuati: "<<i;
  cout<<"\nSomma raggiunta: "<<n;

  return 0;
}
