#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int casual(int min, int max){ // estrazione di un numero casuale
  return rand()%(max-min+1)+min;
}

int main(){
  int max, min, x, i=0, a, b;

  cout<<"Inserisci l'area da trovare: ";
  cin>>x;

  do{
    cout<<endl;
    cout<<"Inserisci il valore minimo: ";
    cin>>min;
    cout<<"Inserisci il valore massimo: ";
    cin>>max;
  }while(max*max<x);

  do{
    a=casual(min, max);
    b=casual(min, max);
    i++;
  }while(a*b!=x);

  cout<<"\nTentativi effettuati: "<<i<<endl;
  cout<<"\nLato a: "<<a;
  cout<<"\nLato b: "<<b;

  cout<<endl;
  return 0;
}
