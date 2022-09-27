#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

const char o=167;

int random(int min, int max){
  return rand()%(max-min+1)+min;
}

void menu(int n){
  switch(n){
    case 0:{
      cout<<"*======================*\n";
      cout<<"|       VETTORI        |\n";
      cout<<"*======================*\n";
      cout<<"|  1) Selection Sort   |\n";
      cout<<"|  2) Bubble Sort      |\n";
      cout<<"|  3) Merge Sort       |\n";
      cout<<"|  4) Quick Sort       |\n";
      cout<<"|  5) Personale 1      |\n";
      cout<<"|  6) Personale 2      |\n";
      cout<<"|  7) Personale 3      |\n";
      cout<<"|                      |\n";
      cout<<"|  0) Esci             |\n";
      cout<<"*======================*\n\n";


      cout<<" *Inserisci la metodologia di ordinamento da svolgere: ";
    break;
    }
    case 1:{
      cout<<"*====================*\n";
      cout<<"|   Selection Sort   |\n";
      cout<<"*====================*\n\n";
    break;
    }
    case 2:{
      cout<<"*=================*\n";
      cout<<"|   Bubble Sort   |\n";
      cout<<"*=================*\n\n";
    break;
    }
    case 3:{
      cout<<"*================*\n";
      cout<<"|   Merge Sort   |\n";
      cout<<"*================*\n\n";
    break;
    }
    case 4:{
      cout<<"*================*\n";
      cout<<"|   Quick Sort   |\n";
      cout<<"*================*\n\n";
    break;
    }
    case 5:{
      cout<<"*=================*\n";
      cout<<"|   Personale 1   |\n";
      cout<<"*=================*\n\n";
    break;
    }
    case 6:{
      cout<<"*=================*\n";
      cout<<"|   Personale 2   |\n";
      cout<<"*=================*\n\n";
      break;
    }
    case 7:{
      cout<<"*=================*\n";
      cout<<"|   Personale 3   |\n";
      cout<<"*=================*\n\n";
    break;
    }
    case 8:{
      cout<<"*=========================*\n";
      cout<<"|   ordinamento VETTORI   |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        21/02/2022       |\n";
      cout<<"*=========================*\n\n";
    break;
    }
  }
}

void es1(){
  int n, temp, i=0, k=0, x=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  /*
  Una volta trovato il numero minore controllando tutto il vettore, il valore decretato viene sostituito
  con il valore in prima posizione.
  Succesivamente si incrementa i passando dunque alla posizione 2 (1) del vettore e ripetendo il controllo
  */
  for(i=0; i<n-1; i++){
    x=i;
    for(k=i+1; k<n; k++){
      if(a[k]<a[x]){
        x=k;
      }
    }
    for(int out=0; out<n; out++){
      cout<<"|"<<a[out]<<"| ";
    }
    cout<<"\n";
    temp=a[i];
    a[i]=a[x];
    a[x]=temp;
  }

  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void es2(){
  int n, temp, i=0, k=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  /*
  Partendo dalla prima posizione, verifica se il numero nella posizione successiva � minore rispetto alla
  posizione in cui ci si trova.
  Quindi se minore, sostituisce i due numeri.
  I numeri maggiori verranno accatastati nel fondo in successione fino ad arrivare alla posizione 1 (0) e
  quindi alla fine dell'ordinamento.
  */
  for(i=0; i<n-1; i++){
    for(k=0; k<(n-1)-i; k++){
      if(a[k]>a[k+1]){
          temp=a[k];
          a[k]=a[k+1];
          a[k+1]=temp;
      }
      for(int out=0; out<n; out++){
        cout<<"|"<<a[out]<<"| ";
      }
      cout<<"\n";
    }
  }

  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void mergeU(int a[], int sx, int m, int dx){
  int i, j, k;
  int l1=m-sx+1, l2=dx-m;
  int SX[l1], DX[l2];

  // assegnazione vettori SX e DX
  for(i=0; i<l1; i++){
    SX[i]=a[sx+i];
  }

  for(j=0; j<l2; j++){
    DX[j]=a[m+1+j];
  }

  // ordinamento nel vettore principale
  i=0;
  j=0;
  k=sx;
  while(i<l1 && j<l2){
    if(SX[i]<=DX[j]){
      a[k]=SX[i];
      i++;
    }
    else{
      a[k]=DX[j];
      j++;
    }
    k++;
  }

  // unione di SX e DX al vettore principale
  while(i<l1){
    a[k]=SX[i];
    i++;
    k++;
  }

  while(j<l2){
    a[k]=DX[j];
    j++;
    k++;
  }
}

void mergeS(int a[], int sx, int dx, int n){
  int m;
  if(sx<dx){
    m=(sx+dx)/2;
    mergeS(a, sx, m, n);
    mergeS(a, m+1, dx, n); // cambio range
    mergeU(a, sx, m, dx);
    for(int out=0; out<n; out++){
      cout<<"|"<<a[out]<<"| ";
    }
    cout<<"\n";
  }
}

void es3(){
  int n, i=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  mergeS(a, 0, n, n);

  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

int quickD(int a[], int min, int max){
  int m=a[max], i=(min-1), j, temp;

  for(j=min; j<=max-1; j++){
      if(a[j]<m){ // spostamento in base al punto di riferimento
          i++;
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
  }

  // cambio punto di riferimento
  temp=a[i+1];
  a[i+1]=a[max];
  a[max]=temp;

  return(i+1);
}

void quickS(int a[], int min, int max, int n){
  int p;
  if(min<max){
    p=quickD(a, min, max);
    for(int out=0; out<n; out++){
      cout<<"|"<<a[out]<<"| ";
    }
    cout<<"\n";
    quickS(a, min, p-1, n);
    quickS(a, p+1, max, n);
  }
}

void es4(){
  int n, i=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  quickS(a, 0, n, n);

  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void es5(){
  int n, temp, i=0, k=0, x=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  /*
  Una volta trovato il numero maggiore controllando tutto il vettore, il valore decretato viene sostituito
  con il valore in ultima posizione.
  Succesivamente si incrementa i passando dunque alla posizione 2 (1) del vettore e ripetendo il controllo
  Alla fine, il vettore viene invertito
  */
  for(i=0; i<n-1; i++){
    x=i;
    for(k=i+1; k<n; k++){
      if(a[k]>a[x]){
        x=k;
      }
    }
    for(int out=0; out<n; out++){
      cout<<"|"<<a[out]<<"| ";
    }
    cout<<"\n";
    temp=a[i];
    a[i]=a[x];
    a[x]=temp;
  }

  // invertitore
  i=n-1;
for(int k=0; k<i; k++){
    temp=a[k];
    a[k]=a[i];
    a[i]=temp;
    i--;
  }

  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void es6(){
  int n, temp, i=0, k=0, x=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  /*
  Una volta trovato il numero maggiore controllando tutto il vettore, il valore decretato viene sostituito
  con il valore in prima posizione.
  Succesivamente si incrementa i passando dunque alla posizione 2 (1) del vettore e ripetendo il controllo
  Alla fine, il vettore viene invertito
  */
  for(i=0; i<n; i++){
    x=i;
    for(k=i; k<n; k++){
      if(a[k]>a[x]){
        x=k;
      }
    }
    for(int out=0; out<n; out++){
      cout<<"|"<<a[out]<<"| ";
    }
    cout<<"\n";
    temp=a[i];
    a[i]=a[x];
    a[x]=temp;
  }

  // invertitore
  i=n-1;
for(int k=0; k<i; k++){
    temp=a[k];
    a[k]=a[i];
    a[i]=temp;
    i--;
  }

  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void es7(){
  int n, temp, i=0, k=0, x=0, max, min;

  cout<<" *Inserisci il numero di parametri: ";
  cin>>n;

  int a[n]={0};

  cout<<"\nInserisci il range di estrazione:\n";
  cout<<"   *Range minimo: ";
  cin>>min;
  do{
    cout<<"   *Range massimo: ";
    cin>>max;
  }while(max<min);

  cout<<"\n\nVettore generato: \n";
  for(i=0; i<n; i++){
    a[i]=random(min, max);
    cout<<"|"<<a[i]<<"| ";
  }

  cout<<"\n\n\nFasi di ordinamento: \n";
  /*
  Una volta trovato il numero minore controllando tutto il vettore, il valore decretato viene sostituito
  con il valore in prima posizione.
  Succesivamente si incrementa i passando dunque alla posizione 2 (1) del vettore e ripetendo il controllo
  */
  for(i=0; i<n; i++){
    x=i;
    for(k=i; k<n; k++){
      if(a[k]<a[x]){
        x=k;
      }
    }
    for(int out=0; out<n; out++){
      cout<<"|"<<a[out]<<"| ";
    }
    cout<<"\n";
    temp=a[i];
    a[i]=a[x];
    a[x]=temp;
  }


  cout<<"\nVettore ordinato: \n";
  for(i=0; i<n; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

int main(){
  int m;
  char pause;
  srand(time(NULL));

  //! Togliendo il 2�, il 3� e il 4� esercizio, tutti gli esercizi sono stati ideati e scritti in autonomia
  //! fonte 2�, 3�, 4�: https://www.nicolabovolato.it/blog/tutorial-c/sorting/

  do{
    do{
      system("cls");
      menu(0);
      cin>>m;
    }while(m>0 && m>7);

    system("cls");
    switch(m){
      case 1:{
        menu(1);
        es1();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 2:{
        menu(2);
        es2();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 3:{
        menu(3);
        es3();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 4:{
        menu(4);
        es4();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 5:{
        menu(5);
        es5();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 6:{
        menu(6);
        es6();
        cout<<"\n";
        pause=getch();
      break;
      }
      case 7:{
        menu(7);
        es7();
        cout<<"\n";
        pause=getch();
      break;
      }
    }
  }while(m!=0);

  system("cls");
  menu(8);
  pause=getch();

  return 0;
}
