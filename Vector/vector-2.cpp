#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define D 10
const char o=167;

int random(int min, int max){
  return rand()%(max-min+1)+min;
}

void menu(int n){
  switch(n){
    case 0:{
      cout<<"*=======================*\n";
      cout<<"|        VETTORI        |\n";
      cout<<"*=======================*\n";
      cout<<"|  1) Somma e media     |\n";
      cout<<"|  2) Somma e media int |\n";
      cout<<"|  3) Gara rally        |\n";
      cout<<"|                       |\n";
      cout<<"|  0) esci              |\n";
      cout<<"*=======================*\n\n";


      cout<<" *Inserisci l'esercizio da svolgere: ";
    break;
    }
    case 1:{
      cout<<"*===================*\n";
      cout<<"|   Somma e media   |\n";
      cout<<"*===================*\n\n";
    break;
    }
    case 2:{
      cout<<"*=======================*\n";
      cout<<"|   Somma e media int   |\n";
      cout<<"*=======================*\n\n";
    break;
    }
    case 3:{
      cout<<"*================*\n";
      cout<<"|   Gara rally   |\n";
      cout<<"*================*\n\n";
    break;
    }
    case 4:{
      cout<<"*===========================*\n";
      cout<<"|  esercizi sui VETTORI 2   |\n";
      cout<<"|                           |\n";
      cout<<"|    Marguerettaz Andre'    |\n";
      cout<<"|           3B IT           |\n";
      cout<<"|         26/02/2022        |\n";
      cout<<"*===========================*\n\n";
    break;
    }
  }
}

void es1(){
  int n, temp, i=0;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n];

  cout<<"\n\nVettore generato: \n";
  for(int i=0; i<n; i++){
    a[i]=random(-20, 20);
    cout<<"|"<<a[i]<<"| ";
  }

  i=n-1;
for(int k=0; k<i; k++){
    temp=a[k];
    a[k]=a[i];
    a[i]=temp;
    i--;
  }

  cout<<"\n\nVettore invertito: \n";
  for(int i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void es2(){
  int n, temp, i=0, k=0, x=0;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\n\n";
  for(int i=0; i<n; i++){
    cout<<" *Inserisci un numero ("<<i+1<<"/"<<n<<"): ";
    cin>>a[i];
  }


  for(i=0; i<n-1; i++){
    x=i;
    for(k=i+1; k<n; k++){
      if(a[k]<a[x]){
        x=k;
      }
    }

    temp=a[i];
    a[i]=a[x];
    a[x]=temp;
  }

  cout<<"\n\nVettore ordinato: \n";
  for(int i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void stampa(int g1[], int g2[], int n1, int n2){
  cout<<"Ordine di arrivo - GARA 1\n";
  for(int i=0; i<n1; i++){
    cout<<"|"<<g1[i]<<"| ";
  }

  cout<<"\n\nOrdine di arrivo - GARA 2\n";
  for(int i=0; i<n2; i++){
    cout<<"|"<<g2[i]<<"| ";
  }

  cout<<"\n";
  system("pause>nul");
}

void ins(int &n1, int &n2, int g1[], int g2[]){

  cout<<"Gara 1:\n";
  cout<<" *Inserisci il numero di partecipanti:";
  cin>>n1;

  cout<<"\n";
  for(int i=0; i<n1; i++){
    cout<<" * Inserisci il "<<i+1<<o<<" arrivato: ";
    cin>>g1[i];
  }

  cout<<"\n\nGara 2:\n";
  cout<<" *Inserisci il numero di partecipanti:";
  cin>>n2;

  cout<<"\n";
  for(int i=0; i<n2; i++){
    cout<<" * Inserisci il "<<i+1<<o<<" arrivato: ";
    cin>>g2[i];
  }
}

void are(int arE[], int g1[], int g2[], int n1, int n2, int &ce){
  int i=0, k=0;

  for(i=0; i<n1; i++){
    for(k=0; k<n2; k++){
      if(g1[i]==g2[k]){
        arE[ce]=g1[i];
        ce++;
      }
    }
    k=0;
  }
}

void ars(int arS1[], int arS2[], int g1[], int g2[], int n1, int n2, int &cs1, int &cs2){
  int i, k;
  bool e=false;

  for(i=0; i<n1; i++){
    for(k=0; k<n2; k++){
      if(g1[i]==g2[k]){
        e=true;
      }
      if(e==true){
        break;
      }
    }
    if(e==false){
      arS1[cs1]=g1[i];
      cs1++;
    }
    k=0;
    e=false;
  }

  e=false;
  i=0;
  k=0;

  for(i=0; i<n2; i++){
    for(k=0; k<n1; k++){
      if(g2[i]==g1[k]){
        e=true;
      }
      if(e==true){
        break;
      }
    }
    if(e==false){
      arS2[cs2]=g2[i];
      cs2++;
    }
    k=0;
    e=false;
  }
}


void es3(){
  int n1, n2, g1[D], g2[D], arE[D], arS1[D], arS2[D], ce=0, cs1=0, cs2=0;
  // arE[]: arrivati entrambi
  // arS[]: arrivati singoli

  ins(n1, n2, g1, g2);
  system("cls");
  menu(3);
  stampa(g1, g2, n1, n2);

  are(arE, g1, g2, n1, n2, ce);
  ars(arS1, arS2, g1, g2, n1, n2, cs1, cs2);

  cout<<"\n\nMacchine che hanno completato entrambe gare:\n";
  for(int i=0; i<ce; i++){
    cout<<"|"<<arE[i]<<"| ";
  }

  if(cs1>0){
    cout<<"\n\nMacchine che hanno completato solo la 1"<<o<<" gara:\n";
    for(int i=0; i<cs1; i++){
      cout<<"|"<<arS1[i]<<"| ";
    }
  }
  if(cs2>0){
    cout<<"\n\nMacchine che hanno completato solo la 2"<<o<<" gara:\n";
    for(int i=0; i<cs2; i++){
      cout<<"|"<<arS2[i]<<"| ";
    }
  }

}

int main(){
  int m;
  srand(time(NULL));
  do{
    do{
        system("cls");
        menu(0);
        cin>>m;
    }while(m!=0 && m!=1 && m!=2 && m!=3);

    switch(m){
      case 1:{
        system("cls");
        menu(1);
        es1();
        cout<<"\n";
        system("pause>nul");
      break;
      }
      case 2:{
        system("cls");
        menu(2);
        es2();
        cout<<"\n";
        system("pause>nul");
      break;
      }
      case 3:{
        system("cls");
        menu(3);
        es3();
        cout<<"\n";
        system("pause>nul");
      break;
      }
    }
  }while(m!=0);

  system("cls");
  menu(4);

  return 0;
}
