#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int min, int max){
  return rand()%(max-min+1)+min;
}

void menu(int n){
  switch(n){
    case 1:{
      cout<<"*=====================*\n";
      cout<<"|   GENERATORE DADI   |\n";
      cout<<"*=====================*\n\n";
    break;
    }
    case 2:{
      cout<<"*=======================*\n";
      cout<<"|  Generatore di dadi   |\n";
      cout<<"|                       |\n";
      cout<<"|  Marguerettaz Andre'  |\n";
      cout<<"|         3B IT         |\n";
      cout<<"|       02/02/2022      |\n";
      cout<<"*=======================*\n\n";
    break;
    }
  }
}

void estr(int a[], int x, int n){
  int e;
  for(int i=0; i<x; i++){
    system("cls");
    e=random(1, n);
    a[e-1]+=1;
    menu(1);
    cout<<"Numero estratto: "<<e;
  }
}

int main(){
  int n, x;
  srand(time(NULL));

  menu(1);

  cout<<" *Inserisci il numero di facce del dado: ";
  cin>>n;
  int a[n]={0};

  cout<<" *Inserisci il numero di estrazioni: ";
  cin>>x;

  estr(a, x, n);

  cout<<"\n\n";
  system("cls");
  menu(1);
  cout<<"\nNumeri estratti: \n";
  for(int i=0; i<n; i++){
    cout<<" |"<<a[i]<<"| ";
  }

  system("pause>nul");
  cout<<"\n\n";
  system("cls");
  menu(2);
  system("pause>nul");

  return 0;
}
