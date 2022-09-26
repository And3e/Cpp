#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  srand(time(NULL));

  int l=0, a, b, c, ct=0, cc=0, i=1, g=0;
  /*
  l: lanci
  a: dado numero 1
  b: dado numero 2
  c: dado numero 3
  ct: conta terzine
  cc: conta coppie
  i: contatore di supporto
  */

  for(g=1; g<=100; g++){
    system("cls");
    //Intestazione
    cout<<"*============================================*"<<endl;
    cout<<"|  Verifica coppie e triplette tra 100 dadi  |"<<endl;
    cout<<"*============================================*"<<endl<<endl;
    cout<<"Estrazione dei dadi"<<"("<<g<<"/100)";
    _sleep(7);
  }

  cout<<endl<<endl;
  _sleep(900);

  while (l<100){
    a=rand()%7;
    b=rand()%7;
    c=rand()%7;

    cout<<i<<") "<<a<<"  "<<b<<"  "<<c<<endl;
    i++;

    if(a==b && a==c){
      ct++;
    }

    else if(a==b || a==c || b==c){
      cc++;
    }
    l++;
  }

  _sleep(900);
  cout<<endl<<".";
  _sleep(900);
  cout<<".";
  _sleep(900);
  cout<<"."<<endl;
  _sleep(1000);

  cout<<endl<<"Triplette estratte: "<<ct<<endl;
  cout<<"Coppie estratte: "<<cc<<endl<<endl;
  
  system("pause");
  return 0;
}
