#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int min, int max){
  return rand()%(max-min+1)+min;
}

void out(int d, int a[]){
  for(int i=0; i<d; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void sB(int d, int a[]){
  for(int i=0; i<d-1; i++){
    for(int k=0; k<(d-1)-i; k++){
      if(a[k]>a[k+1]){
        swap(a[k], a[k+1]);
      }
    }
  }
}

void sS(int d, int a[]){
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

void rD(int x, int a[], int d){
  int sx=0, dx=d-1, m=(sx+dx)/2, e=-1;

  sB(d, a);

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

void rS(int x, int a[], int d){
  int e=-1;

  sB(d, a);

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

}

void es2(){

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
