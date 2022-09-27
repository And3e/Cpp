#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
  //Intestazione
  cout<<"*====================================*"<<endl;
  cout<<"|  Conversione binario-decimale M&S  |"<<endl;
  cout<<"*====================================*"<<endl<<endl;

  int nb, c=0, p, i, s;
  //char b;
  /*
  nb: numero di bit
  b: bit (variabile di passaggio)
  c: somma dei bit
  p: variabile di supporto per elevazione
  a: (solo nel caso crescente) variabile per contatore a utente
  s: segno
  */

  cout<<"Inserisci il numero di bit (M&S): ";
  cin>>nb;
  cout<<endl<<endl;

  //! Inserimento del numero in un solo passaggio --> vettori

  char b[nb];
  cout<<"ATTENZIONE: il programma prende in considerazione solo i numeri '1' e '0'."<<endl<<endl;
  cout<<"Inserisci il numero: ";

  for (int i=0; i<nb; i++) {
    do{
      cin>>b[i];
    }while(b[i]!='0' && b[i]!='1');
}

  cout<<endl<<"--------------------------------------------------------------------------"<<endl;

  cout<<endl<<"Interpretazione acquisita: ";
for (i=0; i<nb; i++) {
	cout<<b[i];
}
cout<<endl;

i=0;
while(i<nb){
  if(i==0){
    if(b[0]=='0'){
      s=1;
    }
    else{
      s=-1;
    }
  i++;
  //cout<<"il segno e': "<<s<<endl<<endl; --> debug
  }

  p=pow(2, nb-i-1);
  //cout<<" bit: "<<b[i];  --> debug
  //cout<<endl<<" potenza: "<<p<<endl;  --> debug
  c+=p*(b[i]-48);
  //cout<<endl<<" somma: "<<c<<endl<<endl;  --> debug

  i++;
}

  //! Inserimento del numero in un solo passaggio --> metodo non convenzionale, non � da usare
  /*
  cout<<"Inserisci il numero: ";

  i=nb;
  while(i>0){
    cin>>b;

    p=pow(2,i-1);
    c+=(b-=48)*p;

    i--;
  }
  cout<<endl;
  */

  //! Ordine crescente (si digita il numero partendo dal bit pi� significativo)
  //! --> Metodo principale dopo i vettori
  /*
  i=nb;
  while(i>0){
    a+=1;
    do{
      cout<<"Inserisci il numero: ("<<a<<"/"<<nb<<")";
      cin>>b;
    }
    while(b!='0' && b!='1');

    if(i==nb){
      if(b==0){
        s=1;
      }
      else{
        s=-1;
      }
    }

    p=pow(2,i-1);
    c+=(b-=48)*p;

    i--;
  }
  */

  //! Ordine decrescente (si inizia a digitare partendo dal bit meno significativo)
  /*
  for(int i=0; i<nb; i++){
    cout<<"Inserisci il numero: ("<<i+1<<"/"<<nb<<")";
    cin>>b;

    p=pow(2,i);
    c+=(b-=48)*p;

    // cout<<c<<" ";     --> debug
  }
  */

  cout<<endl<<endl<<"Conversione in corso";
  Sleep(750);
  cout<<".";
  Sleep(750);
  cout<<".";
  Sleep(750);
  cout<<"."<<endl<<endl;
  Sleep(750);

  cout<<"Numero decimale calcolato: "<<c*s<<endl<<endl<<endl<<endl;

  system("pause");
  return 0;
}
