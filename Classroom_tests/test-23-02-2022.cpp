#include <iostream>
#include <stdlib.h>

using namespace std;

const char o=167;

void menu(int m){
  switch(m){
    case 0:{
      cout<<"*==========================*\n";
      cout<<"|         BILIARDO         |\n";
      cout<<"*==========================*\n";
      cout<<"|                          |\n";
      cout<<"|  1) Classifica TOT       |\n";
      cout<<"|  2) Ricerca giocatore    |\n";
      cout<<"|  3) Cancellazione logica |\n";
      cout<<"|                          |\n";
      cout<<"|  0) Esci                 |\n";
      cout<<"|                          |\n";
      cout<<"*==========================*\n\n\n";
      cout<<" *Inserisci un numero: ";
    break;
    }
    case 1:{
      cout<<"*======================*\n";
      cout<<"|   INSERIMENTO DATI   |\n";
      cout<<"*======================*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*=======================*\n";
      cout<<"|   Classifica Totale   |\n";
      cout<<"*=======================*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*=======================*\n";
      cout<<"|   Ricerca giocatore   |\n";
      cout<<"*=======================*\n\n\n";
    break;
    }
    case 4:{
      cout<<"*==========================*\n";
      cout<<"|   Cancellazione logica   |\n";
      cout<<"*==========================*\n\n\n";
    break;
    }
    case 5:{
      cout<<"*=========================*\n";
      cout<<"|        Verifica         |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        23/02/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
    }
  }
}

void ins(int nf, int p[], string n[]){
  for(int i=0; i<nf; i++){
    cout<<"\n    *Inserisci il nome del "<<i+1<<o<<" partecipante: ";
    cin>>n[i];
    cout<<"    *Inserisci i punti del "<<i+1<<o<<" partecipante: ";
    cin>>p[i];
  }
}

void cl(int p1[], string n1[], int pu1, int p2[], string n2[], int pu2, int p[], string n[]){
  int x=0, temp, q=pu1+pu2, k=0;
  string tem;

  // fusione
  for(k=0; k<pu1; k++){
    p[k]=p1[k];
    n[k]=n1[k];
  }
  for(k=pu1; k<q; k++){
    p[k]=p2[x];
    n[k]=n2[x];
    x++;
  }
  x=0;

  // ordinamento
  for(int i=0; i<q-1; i++){
    x=i;
    for(int k=i+1; k<q; k++){
      if(p[k]>p[x]){
        x=k;
      }
    }
    temp=p[i];
    tem=n[i];
    p[i]=p[x];
    n[i]=n[x];
    p[x]=temp;
    n[x]=tem;
  }
}

void scl(int p[], string n[], int pu){
  for(int i=0; i<pu; i++){
    if(n[i]!="*"){
      cout<<i+1<<") "<<n[i]<<" - "<<p[i]<<"\n";
    }
  }
}

void rc(int p[], string n[], int pu){
  bool e=false;
  int num, s;

  cout<<" *Inserisci il punteggio da cercare: ";
  cin>>num;

  for(int i=0; i<pu; i++){
    if(p[i]==num){
      e=true;
      s=i;
    }
  }

  if(e==true){
    cout<<"\n\nPartecipante con "<<num<<" goal: "<<n[s];
  }
  else{
    cout<<"\n\nNessun partecipante trovato!";
  }
}

void canc(int p[], string n[], int tot){
  string c;
  bool e=false;
  int in;

  cout<<" *Inserisci il nome del giocatore da cancellare: ";
  cin>>c;

  for(int i=0; i<tot; i++){
    if(n[i]==c){
      e=true;
      in=i;
      break;
    }
  }

  if(e==true){
    n[in]="*";
    p[in]=0;
    cout<<"\n\nGiocatore '"<<c<<"' cancellato!";
  }
  else{
    cout<<"\n\nGiocatore '"<<c<<"' non trovato!";
  }
}

int main(){
  int m, p1, p2;

  menu(1);
  cout<<"Turno 1\n";
  cout<<" *Inserisci il numero di partecipanti: ";
  cin>>p1;

  int Gt1[p1];
  string nGt1[p1];
  ins(p1, Gt1, nGt1);

  cout<<"\n\nTurno 2\n";
  cout<<" *Inserisci il numero di partecipanti: ";
  cin>>p2;

  int Gt2[p2], pTot[p1+p2];
  string nGt2[p2], nTot[p1+p2];
  ins(p2, Gt2, nGt2);

  cl(Gt1, nGt1, p1, Gt2, nGt2, p2, pTot, nTot);

  do{
    system("cls");
    menu(0);
    cin>>m;
    system("cls");

    switch(m){
      case 1:{
        menu(2);
        scl(pTot, nTot, p1+p2);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 2:{
        menu(3);
        rc(pTot, nTot, p1+p2);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 3:{
        menu(4);
        canc(pTot, nTot, p1+p2);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
    }
  }while(m!=0);

  menu(5);

  return 0;
}
