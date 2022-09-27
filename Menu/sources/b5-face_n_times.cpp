#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int m, n=0, x, e, i=0, k=0;
  srand(time(NULL));

  cout<<"Inserisci il numero di facce del dado: ";
  cin>>m;

  do{
    cout<<"\nInserisci la faccia da controllare: ";
    cin>>x;
  }while(x>m);

  cout<<"\nInserisci il numero dei lanci da effettuare (n volte la faccia scelta): ";
  cin>>n;

  for(i; k<n; i++){ // how to brake a for ;-)
    e=rand()%m+1;
    cout<<e<<"  ";
    if(e==x){
      k++;
    }
  }

  cout<<"\n\nLanci effettuati: "<<i;
  cout<<"\nLa faccia inserita \212 stata estratta "<<k<<" volte.";

  return 0;
}
