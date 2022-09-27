#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

const int r=20, c=20; // righe - colonne max
int M;

void refresh(){
  cout<<"\n\n";
  system("pause>nul");
  system("cls");
}

int random(int min, int max){
  return rand()%(max-min+1)+min;
}

int countCifre(int n){
  bool e=false;
  if(n<0){
    n-=n*2;
    e=true;
  }
  string tmp=to_string(n);
  if(e){
    return tmp.size()+1;
  }
  return tmp.size();
}

void detM(int min, int max){ // per setw  --> outMat
  if(max<0){
    M=min;
  }
  else{
    M=max;
  }
  if(countCifre(M)<countCifre(min)){
    M=min;
  }
}

void randMat(int R, int C, int in[][c], int min, int max){
  for(int i=0; i<R; i++){
    for(int k=0; k<C; k++){
      in[i][k]=random(min, max);
    }
  }
}

void randVet(int d, int a[], int min, int max){
  for(int i=0; i<d; i++){
    a[i]=random(min, max);
  }
}

void cpMatInVet(int C, int in[][c], int iC, int a[]){
  for(int i=0; i<C; i++){
    a[i]=in[i][iC];
  }
}

void outVet(int d, int a[]){
  for(int i=0; i<d; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void outMat(int R, int C, int in[][c]){
  int j=0, d=countCifre(M);

  cout<<setw(d+3)<<"";
  for(int i=0; i<C; i++){
    cout<<" "<<setw(d)<<left<<i+1<<"  ";
  }
  cout<<"\n";

  for(int i=0; i<R; i++){
    j++;
    cout<<setw(d+1)<<right<<j<<"  ";
    for(int k=0; k<C; k++){
      cout<<"|"<<setw(d)<<left<<in[i][k]<<"| ";
    }
    cout<<"\n";
  }
}

void sBVet(int d, int a[]){ // bubble sort
  for(int i=0; i<d-1; i++){
    for(int k=0; k<(d-1)-i; k++){
      if(a[k]>a[k+1]){
        swap(a[k], a[k+1]);
      }
    }
  }
}

void sSVet(int d, int a[]){ // selection sort vettore
  int x;
  for(int i=0; i<d-1; i++){
    x=i;
    for(int k=i+1; k<d; k++){
      if(a[k]<a[x]){
        x=k;
      }
    }
    swap(a[i], a[x]);
  }
}

void sSMat(int R, int C, int in[][c]){ // selection sort matrice
  int x;
  for(int i=0; i<R; i++){
    for(int k=0; k<C; k++){
      x=k+1;
      for(int j=i; j<R; j++){
        for(int l=x; l<C; l++){
          if(in[j][l]<in[i][k]){
            swap(in[i][k], in[j][l]);
          }
        }
        x=0;
      }
    }
  }
}

void rDVet(int x, int a[], int d){ // dicotomic research
  int sx=0, dx=d-1, m=(sx+dx)/2, e=-1;

  sBVet(d, a);

  do{
    if(a[m]>x){
      dx=m-1;
    }
    else if(a[m]<x){
      sx=m+1;
    }
    else{
      e=m;
    }
    m=(sx+dx)/2;
  }while(sx<=dx && e==-1);

  if(e!=-1){
    cout<<"Elemento trovato in posizione: "<<e;
  }
  else{
    cout<<"Elemento non trovato!";
  }
}

void rSVet(int x, int a[], int d){ // selection research
  int e=-1;

  sBVet(d, a);

  for(int i=0; i<d; i++){
    if(a[i]==x){
      e=i;
      break;
    }
  }

  if(e!=-1){
    cout<<"Elemento trovato in posizione: "<<e;
  }
  else{
    cout<<"Elemento non trovato!";
  }
}

void insRC(int &R, int &C){ // menu inserimento righe e colonne
  do{
    cout<<" *Inserisci il numero di righe (max: "<<r<<") ";
    cin>>R;
  }while(R<1 || R>r);

  do{
    cout<<" *Inserisci il numero di colonne (max: "<<c<<") ";
    cin>>C;
  }while(C<1 || C>c);
}

void insD(int &d){ // menu inserimento dimensione
  cout<<" *Inserisci la dimensione del vettore: ";
  cin>>d;
}

void insmM(int &min, int &max){ // menu inserimento min e max
  cout<<"\n *Inserisci il range di estrazione: ";
  cout<<"\n    *Range minimo: ";
  cin>>min;
  do{
    cout<<"    *Range massimo: ";
    cin>>max;
  }while(max<min);

  detM(min, max);
}

void menu(int m){
  switch(m){
    case 0:{
      cout<<"*======================*\n";
      cout<<"|        Titolo        |\n";
      cout<<"*======================*\n";
      cout<<"|                      |\n";
      cout<<"|   1) |\n";
      cout<<"|   2) |\n";
      cout<<"|                      |\n";
      cout<<"|   0) Esci            |\n";
      cout<<"|                      |\n";
      cout<<"*======================*\n\n\n";
      cout<<" *Inserisci un numero: ";
    break;
    }
    case 1:{
      cout<<"*================*\n";
      cout<<"|      |\n";
      cout<<"*================*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*====================*\n";
      cout<<"|      |\n";
      cout<<"*====================*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*=========================*\n";
      cout<<"|          Titolo         |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        xx/0x/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
    }
  }
}

void es1(){
  int R=10, C=10, min=1, max=10, e1[r][c];
  insRC(R, C);
  insmM(min, max);

}

void es2(){
  int R=10, C=10, min=1, max=10, e2[r][c];
  insRC(R, C);
  insmM(min, max);

}

int main(){
  int m;
  srand(time(NULL));

  do{
    system("cls");
    menu(0);
    cin>>m;
    system("cls");

    switch(m){
      case 1:{
        menu(1);
        es1();
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 2:{
        menu(2);
        es2();
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
    }
  }while(m!=0);

  menu(3);

  return 0;
}
