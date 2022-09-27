#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int a[100], n, i=0, temp, tot;
  /*
  a[]: vettore principale
  n: numero da convertire
  div, temp, tot: variabili di supporto
  d: dimensione
  i: contatore
  */

  //Intestazione
  cout<<"*================================*"<<endl;
  cout<<"|  Conversione decimale-binario  |"<<endl;
  cout<<"*================================*"<<endl<<endl;


  cout<<"Inserisci il numero da convertire: ";
  cin>>n;

  while(n>0){ // conversione binario
  	if(n%2==0){
      a[i]=0;
    }
    else{
      a[i]=1;
    }
    n=n/2;
    i++;
  }

  tot=i;
  i--;

  for(int k=0; k<i; k++){ // reverse vettore
    temp=a[k];
    a[k]=a[i];
    a[i]=temp;
    i--;
  }

  cout<<"\nNumero convertito: "; // stampa vettore
  for(int k=0; k<tot; k++){
    cout<<a[k];
  }

  return 0;
}
