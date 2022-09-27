#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

bool vittoriaPartita(int n, int c){
  bool a=false, b=false;

  if(c%2==0){
    a=true;
  }

  if(n%2==0){
    b=true;
  }

  if(a==b){
    return true;
  }
  else{
    return false;
  }
}

void infoPartita(int i, float v, float s){
  int pv, ps;
  cout<<"\nPartite giocate: "<<i;
  cout<<"\n\nVittorie: "<<v;
  cout<<"\nSconfitte: "<<s;

  pv=(v/i)*100;
  ps=(s/i)*100;

  cout<<"\n\nPercentuale di vittoria: "<<pv<<"%";
  cout<<"\nPercentuale di sconfitta: "<<ps<<"%";
}

int main(){
  // signature o firma
  int n, c, i=0, v=0, s=0;
  char e='s', in;
  /*
  n: pari o dispari (utente)
  c: numero casuale
  i: contatore partite
  v: vittorie
  s: sconfitte
  e: uscita (s/n)
  in: inserimento pari o dispari (utente)
  */

  srand(time(NULL));

  while(e=='s' || e=='S'){
    system("cls");
    //Intestazione
    cout<<"*==============================*"<<endl;
    cout<<"|      Verifica 13/12/2021     |"<<endl;
    cout<<"|                              |"<<endl;
    cout<<"|  Indovina se pari o dispari  |"<<endl;
    cout<<"*==============================*"<<endl<<endl;

    cout<<"\nEstrazione del numero casuale";
    for(int i=0; i<3; i++){
      Sleep(100);
      cout<<".";
    }

    c=rand()%2;

    do{
      cout<<"\n\nIndovina se pari(p) o dispari(d): ";
      cin>>in;
    }while(in!='p' && in!='d');

    if(in=='p'){
      n=0;
    }
    else{
      n=1;
    }

    if(vittoriaPartita(n, c)==true){
      cout<<"\nHai indovinato!";
      v++;
    }
    else{
      cout<<"\nMi dispiace, non hai indovinato!";
      s++;
    }
    i++;

    do{
      cout<<"\n\n\nVuoi riprovare? (s/n)";
      cin>>e;
    }while(e!='s' && e!='S' && e!='n' && e!='N');
  }

  system("cls");

  infoPartita(i, v, s);

  cout<<"\n\n\nGrazie per aver giocato!\n\n";

  system("pause");
  return 0;
}
