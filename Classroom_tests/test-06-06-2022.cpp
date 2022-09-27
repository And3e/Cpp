#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int min, int max){ // generatore numero casuale
  return rand()%(max-min+1)+min;
}

void rV(int in[], int d, int min, int max){ // random vettore
  for(int i=0; i<d; i++){
    in[i]=random(min, max);
  }
}

void rg(int &min, int &max){ // input range estrazione
  cout<<" *Inserisci il range di estrazione: \n";
  min=1;
  do{
    cout<<"    *Range massimo: ";
    cin>>max;
  }while(max<min);
}

void rgV(int &d){ // input dimensione vettore
  do{
    cout<<" *Inserisci la dimensione del vettore: ";
    cin>>d;
  }while(d<1);
}

void out(int in[], int d){ //! Esercizio B - stampa vettore
  for(int i=0; i<d; i++){
    cout<<"|"<<in[i]<<"| ";
  }
}

void sS(int in[], int d){ // Selection Sort (decrescente)
  int x;
  for(int i=0; i<d-1; i++){
    x=i;
    for(int k=i+1; k<d; k++){
      if(in[k]>in[x]){
        x=k;
      }
    }
    swap(in[i], in[x]);
  }
}

void sSC(int in[], int d){ // Selection Sort (crescente)
  int x;
  for(int i=0; i<d-1; i++){
    x=i;
    for(int k=i+1; k<d; k++){
      if(in[k]<in[x]){
        x=k;
      }
    }
    swap(in[i], in[x]);
  }
}

int rD(int x, int in[], int d){ // ricerca dicotomica
  int sx=0, dx=d-1, m=(sx+dx)/2, e=-1;

  sSC(in, d);

  do{
    if(in[m]>x){
      dx=m-1;
    }
    else if(in[m]<x){
      sx=m+1;
    }
    else{
      e=m;
    }
    m=(sx+dx)/2;
  }while(sx<=dx && e==-1);

  return e;
}

void elC(int in[], int d, int x, int &n){
  for(int i=0; i<d; i++){
    if(in[i]==x){
      n++;
    }
  }
}

void el(int in[], int d, int x, int in2[], int d2){
  sS(in, d);
  int e=rD(x, in, d);

  if(e!=-1){
    int j=in[e];
    for(int i=0; i<d; i++){
      if(in[i]==j){
        in[i]=0;
      }
    }
  }
  sS(in, d);

  for(int i=0; i<d2; i++){
    in2[i]=in[i];
  }
}

void st(int in[], int d, double &sCD, double &sM){
  for(int i=0; i<d; i++){
    if(in[i]==in[i+1]){
      sCD++;
    }
    else{
      sM+=in[i];
    }
  }
}

void sep(){
  cout<<"\n\n";
  system("pause>nul");
  system("cls");
}

float media(int s, int n){
  return s/n;
}

void menu(int m){ // output menu
  switch(m){
    case 1:{
      cout<<"*===================*\n";
      cout<<"|   Numero random   |\n";
      cout<<"*===================*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*====================*\n";
      cout<<"|   Random vettore   |\n";
      cout<<"*====================*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*======================*\n";
      cout<<"|   Riordina vettore   |\n";
      cout<<"*======================*\n\n\n";
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
      cout<<"|  Combinator sort vector |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        06/04/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
    }
  }
}

void es1(){
  int min, max;
  rg(min, max);

  cout<<"\n\nNumero casuale estratto: "<<random(min, max);
}

void es2(){
  int min, max, d;
  rg(min, max);
  cout<<"\n";
  rgV(d);
  int a[d];

  rV(a, d, min, max);
  cout<<"\n\nVettore generato: \n";
  out(a, d);
}

void es3(){
  int min, max, d;
  rg(min, max);
  cout<<"\n";
  rgV(d);
  int a[d];

  rV(a, d, min, max);
  cout<<"\n\nVettore generato: \n";
  out(a, d);

  sS(a, d);
  cout<<"\n\nVettore riordinato: \n";
  out(a, d);
}

void es4(){
  int min, max, d, x, n=0;
  double sCD=0, sM=0;
  rg(min, max);
  cout<<"\n";
  rgV(d);
  int a[d];

  rV(a, d, min, max);
  cout<<"\n\nVettore generato: \n";
  out(a, d);

  cout<<"\n\nVettore ordinato: \n";
  sS(a, d);
  out(a, d);

  cout<<"\n\n *Inserisci il numero da eliminare: ";
  cin>>x;

  elC(a, d, x, n);
  n=d-n;
  int b[n];
  el(a, d, x, b, n);

  cout<<"\n\nVettore rimaneggiato: \n";
  out(b, n);

  st(b, n, sCD, sM);
  cout<<"\n\nNumeri doppi presenti: "<<"'"<<sCD<<"'";
  cout<<"\nSomma dei rimanenti ("<<n-sCD<<"): "<<"'"<<sM<<"'";
  double m=sM/(n-sCD);
  cout<<"\nMedia dei rimanenti: '"<<m<<"'";
}

int main(){
  srand(time(NULL));

  menu(1);
  es1();
  sep();

  menu(2);
  es2();
  sep();

  menu(3);
  es3();
  sep();

  menu(4);
  es4();
  sep();

  menu(5);

  return 0;
}
