#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>

using namespace std;

#define D 50
const char o=167; // �

void menu(int n){
  switch(n){
    case 0:{
      cout<<"*=========================*\n";
      cout<<"|     SOTTOPROGRAMMI      |\n";
      cout<<"*=========================*\n";
      cout<<"|  1) Differenza int      |\n";
      cout<<"|  2) Divisori di n       |\n";
      cout<<"|  3) Conta vocali        |\n";
      cout<<"|  4) Somma e prodotto    |\n";
      cout<<"|  5) Somma degli addendi |\n";
      cout<<"|                         |\n";
      cout<<"|  0) esci                |\n";
      cout<<"*=========================*\n\n";


      cout<<" *Inserisci l'esercizio da svolgere: ";
    break;
    }
    case 1:{
      cout<<"*====================*\n";
      cout<<"|   Differenza int   |\n";
      cout<<"*====================*\n\n";
    break;
    }
    case 2:{
      cout<<"*===================*\n";
      cout<<"|   Divisori di n   |\n";
      cout<<"*===================*\n\n";
    break;
    }
    case 3:{
      cout<<"*==================*\n";
      cout<<"|   Conta vocali   |\n";
      cout<<"*==================*\n\n";
    break;
    }
    case 4:{
      cout<<"*======================*\n";
      cout<<"|   Somma e prodotto   |\n";
      cout<<"*======================*\n\n";
    break;
    }
    case 5:{
      cout<<"*=========================*\n";
      cout<<"|   Somma degli addendi   |\n";
      cout<<"*=========================*\n\n";
    break;
    }
    case 6:{
      cout<<"*=============================*\n";
      cout<<"| esercizi sui SOTTOPROGRAMMI |\n";
      cout<<"|                             |\n";
      cout<<"|     Marguerettaz Andre'     |\n";
      cout<<"|            3B IT            |\n";
      cout<<"|          31/01/2022         |\n";
      cout<<"*=============================*\n\n";
    break;
    }
  }
}

int trovaMassimo(int a, int b, int c){
  if(a>b && a>c){
    return a;
  }
  else if(b>a && b>c){
    return b;
  }
  else{
    return c;
  }
}

int trovaMinimo(int a, int b, int c){
  if(a>b && a>c){
    return a;
  }
  else if(b<a && b<c){
    return b;
  }
  else{
    return c;
  }
}

void es1(){ // esercizio 1
  int i=0, a, b, c, max, min;

  cout<<" *Inserisci un numero ("<<i+1<<"/3): ";
  cin>>a;
  cout<<" *Inserisci un numero ("<<i+1<<"/3): ";
  cin>>b;
  cout<<" *Inserisci un numero ("<<i+1<<"/3): ";
  cin>>c;

  max=trovaMassimo(a, b, c); // find Max
  min=trovaMinimo(a, b, c); // find Min

  cout<<"\n\nNumero maggiore: "<<max;
  cout<<"\nNumero minore: "<<min;
  cout<<"\n\nDifferenza calcolata: "<<max-min;
}

bool natr(double n){
  if(n==int(n)){
    return true;
  }
  else{
    return false;
  }
}

void divs(int n, int &d, int div[]){
  int k=0;
  for(int i=1; i<=(n/2); i++){
    if(n%i==0){
      d++;
      div[k]=i;
      k++;
    }
  }
}

void es2(){ // esercizio 2
  double n;
  bool nat;
  int d=0, div[D];

  cout<<" *Inserisci un numero: ";
  cin>>n;

  nat=natr(n);


  if(nat==true){
    divs(n, d, div);
    cout<<"\n\nIl numero "<<n<<" \212 un numero naturale.";
    cout<<"\nIl numero "<<n<<" possiede "<<d<<" divisori.";
    cout<<"\n   I suoi divisori sono: ";
    for(int i=0; i<d; i++){
      cout<<" |"<<div[i]<<"| ";
    }
  }
  else{
    cout<<"\n\nIl numero "<<n<<" non \212 un numero naturale.";
  }
}

bool voc(char n){
  if(n<97){
    n+=32;
  }
  switch(n){
    case 97:{ // a
      return true;
    break;
    }
    case 101:{ // e
      return true;
    break;
    }
    case 105:{ // i
      return true;
    break;
    }
    case 111:{ // o
      return true;
    break;
    }
    case 117:{ // u
      return true;
    break;
    }
    default:{
      return false;
    }
  }
}

void es3(){ // esercizio 3
  int n1, n2, v1=0, v2=0;

  cout<<" *Inserisci la lunghezza della prima parola: ";
  cin>>n1;
  cout<<" *Inserisci la lunghezza della seconda parola: ";
  cin>>n2;

  char p1[n1], p2[n2];

  cout<<"\nPrima parola:";
  for(int i=0; i<n1; i++){
    cout<<"\n *Inserisci il carattere ("<<i+1<<"/"<<n1<<"): ";
    cin>>p1[i];
    if(voc(p1[i])==true){
      v1++;
    }
  }
  cout<<"\n\nSeconda parola:";
  for(int i=0; i<n2; i++){
    cout<<"\n *Inserisci il carattere ("<<i+1<<"/"<<n2<<"): ";
    cin>>p2[i];
    if(voc(p2[i])==true){
      v2++;
    }
  }

  cout<<"\n\nLa prima parola contiene "<<v1<<" vocali.";
  cout<<"\nLa seconda parola contiene "<<v2<<" vocali.";
}

bool neg(double n){
  if(n<0){
    return true;
  }
  else{
    return false;
  }
}

void es4(){ // esercizio 4
  double n;

  cout<<" *Inserisci un numero: ";
  cin>>n;

  if(neg(n)==true){
    cout<<"\n\nIl numero "<<n<<" \212 un numero negativo. ";
  }
  else{
    cout<<"\n\nIl numero "<<n<<" \212 un numero positivo. ";
  }
}

int ad(int a1, int a2, int a3, int a4, int a5){
  return a1+a2+a3+a4+a5;
}

void es5(){ // esercizio 5
  int n, a[5]={0};

  do{
    cout<<" *Inserire il numero di addendi: ";
    cin>>n;
  }while(n<3 || n>5);

  for(int i=0; i<n; i++){
    cout<<"\n *Inserisci l'addendo "<<"("<<i+1<<"/"<<n<<"): ";
    cin>>a[i];
  }

  cout<<"\n\nLa somma degli addendi \212 uguale a "<<ad(a[0], a[1], a[2], a[3], a[4])<<".";
}

int main(){
  int m;
  char pause;
  do{
    do{
      system("cls");
      menu(0);
      cin>>m;
    }while(m<0 || m>5);
    switch(m){
      case 1:{
        system("cls");
        menu(1);
        es1();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 2:{
        system("cls");
        menu(2);
        es2();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 3:{
        system("cls");
        menu(3);
        es3();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 4:{
        system("cls");
        menu(4);
        es4();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 5:{
        system("cls");
        menu(5);
        es5();
        cout<<"\n";
        pause=getch();
      break;
      }
    }
  }while(m!=0);

  system("cls");
  menu(6);

  return 0;
}
