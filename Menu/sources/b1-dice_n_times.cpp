#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int m, n, x, e, k=0;
  srand(time(NULL));

  cout<<"Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\nInserisci il numero dei lanci da effettuare: ";
  cin>>n;

  do{
    cout<<"\nInserisci la faccia da contare: ";
    cin>>x;
  }while(x>m);

  for(int i=0; i<n; i++){
    e=rand()%m+1;
    cout<<e<<"  ";
    if(e==x){
      k++;
    }
  }

  cout<<"\n\nLa faccia inserita \212 stata estratta "<<k<<" volte.";

  return 0;
}
