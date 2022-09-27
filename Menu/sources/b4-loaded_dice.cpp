#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int m, n, x, e, i=0, k=0;
  srand(time(NULL));

  cout<<"Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\nInserisci il numero dei lanci da effettuare: ";
  cin>>n  ;

  do{
    cout<<"\nInserisci la faccia truccata: ";
    cin>>x;
  }while(x>m);

  cout<<endl;
  for(i=0; i<n; i++){
    e=rand()%m+1;
    cout<<e<<"  ";
    while(k<1){
      if(e==x){
        n++;
      }
      k++;
    }

  }

  cout<<"\n\nEstrazioni effettuate: "<<i;
  if(k==1){
    cout<<"\nLa faccia truccata '"<<x<<"' \212 stata estratta. \n";
  }
  else{
    cout<<"\nLa faccia truccata '"<<x<<"' non \212 stata estratta. \n";
  }

  return 0;
}
