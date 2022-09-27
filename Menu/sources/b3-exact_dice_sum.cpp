#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int m, n=0, x, e, i=0, k=0;
  srand(time(NULL));

  cout<<"Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\nInserisci il valore da raggiungere: ";
  cin>>x;

  while(n!=x){
    e=rand()%m+1;
    cout<<e<<"  ";
    if(n<x){
      n+=e;
      i++;
    }
    else{
      n-=e;
      k++;
    }
  }

  cout<<"\n\nTentativi effettuati: "<<i;
  cout<<"\n\nSomme effettuate: "<<i;
  cout<<"\nSottrazioni effettuate: "<<k;

  return 0;
}
