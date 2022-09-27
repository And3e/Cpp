#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

const int r=20, c=20; // righe - colonne max

int random(int min, int max){ // numero random
  return rand()%(max-min+1)+min;
}

void menu(int m){ // menu
  switch(m){
    case 0:{
      cout<<"*======================*\n";
      cout<<"|       Matrici 1      |\n";
      cout<<"*======================*\n";
      cout<<"|                      |\n";
      cout<<"|  1) Caratteri        |\n";
      cout<<"|  2) Interi           |\n";
      cout<<"|  3) Es. 3            |\n";
      cout<<"|  4) Matrice-Vettore  |\n";
      cout<<"|  5) Es. 5            |\n";
      cout<<"|                      |\n";
      cout<<"|  0) Esci             |\n";
      cout<<"|                      |\n";
      cout<<"*======================*\n\n\n";
      cout<<" *Inserisci un numero: ";
    break;
    }
    case 1:{
      cout<<"*===============*\n";
      cout<<"|   Caratteri   |\n";
      cout<<"*===============*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*============*\n";
      cout<<"|   Interi   |\n";
      cout<<"*============*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*============*\n";
      cout<<"|   Es. 3   |\n";
      cout<<"*============*\n\n\n";
    break;
    }
    case 4:{
      cout<<"*=====================*\n";
      cout<<"|   Matrice-Vettore   |\n";
      cout<<"*=====================*\n\n\n";
    break;
    }
    case 5:{
      cout<<"*===========*\n";
      cout<<"|   Es. 5   |\n";
      cout<<"*===========*\n\n\n";
    break;
    }
    case 6:{
      cout<<"*=========================*\n";
      cout<<"|         Matrici 1       |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        30/03/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
    }
  }
}

void sS(int in[], int d){ // selection
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

void insRC(int &R, int &C){ // menu inserimento righe e colonne
  do{
    cout<<" *Inserisci il numero di righe (max: "<<r<<") ";
    cin>>R;
  }while(R<1 || R>20);

  do{
    cout<<" *Inserisci il numero di colonne (max: "<<c<<") ";
    cin>>C;
  }while(C<1 || C>20);
}

void mM(int &min, int &max){ // menu inserimento min e max
  cout<<"\n *Inserisci il range di estrazione: ";
  cout<<"\n    *Range minimo: ";
  cin>>min;
  do{
    cout<<"    *Range massimo: ";
    cin>>max;
  }while(max<min);
}

void randMatC(char in[][c], int R, int C, int min, int max){ // riempi random matrice char
  for(int i=0; i<R; i++){
    for(int k=0; k<C; k++){
      in[i][k]=random(min, max);
    }
  }
}

void randMatI(int in[][c], int R, int C, int min, int max){ // riempi random matrice int
  for(int i=0; i<R; i++){
    for(int k=0; k<C; k++){
      in[i][k]=random(min, max);
    }
  }
}

void outMatC(char in[][c], int R, int C, int min, int max){ // stampa matrice char
  int j=0;

  cout<<setw(6)<<"";
  for(int i=0; i<C; i++){
    cout<<" "<<setw(3)<<left<<i+1<<"  ";
  }
  cout<<"\n";

  for(int i=0; i<R; i++){
    j++;
    cout<<setw(4)<<right<<j<<"  ";
    for(int k=0; k<C; k++){
      cout<<"|"<<setw(3)<<left<<in[k][i]<<"| ";
    }
    cout<<"\n";
  }
}

void outMatI(int in[][c], int R, int C, int min, int max){ // stampa matrice int
  int j=0;

  cout<<setw(6)<<"";
  for(int i=0; i<C; i++){
    cout<<" "<<setw(3)<<left<<i+1<<"  ";
  }
  cout<<"\n";

  for(int i=0; i<R; i++){
    j++;
    cout<<setw(4)<<right<<j<<"  ";
    for(int k=0; k<C; k++){
      cout<<"|"<<setw(3)<<left<<in[i][k]<<"| ";
    }
    cout<<"\n";
  }
}

void outVet(int in[], int d){
  for(int i=0; i<d; i++){
    cout<<"|"<<in[i]<<"| ";
  }
}

void ricVC(char in[][c], int R, int C, int &vc, int &cn){ // conta vocali/consonanti
  for(int i=0; i<C; i++){
    for(int k=0; k<R; k++){
      if(in[k][i]==97 || in[k][i]==101 || in[k][i]==105 || in[k][i]==111 || in[k][i]==117){
        vc++;
      }
      else{
        cn++;
      }
    }
  }
}

float medMat(int in[][c], int R, int C){ // media degli elementi nella matrice
  float med=0, j=0;

  for(int i=0; i<C; i++){
    for(int k=0; k<R; k++){
      med+=in[k][i];
      j++;
    }
  }

  return med/j;
}

void es1(){
  int R, C, min=97, max=122, vc=0, cn=0;
  /*
  R: Righe
  C: Colonne
  min, max: range di estrazione
  vc: vocali
  cn: consonanti
  */
  char e1[r][c];

  insRC(R, C);

  randMatC(e1, R, C, min, max);

  cout<<"\n\nMatrice generata: \n";
  outMatC(e1, R, C, min, max);

  ricVC(e1, R, C, vc, cn);
  cout<<"\n\nNumero di vocali presenti: '"<<vc<<"'";
  cout<<"\nNumero di consonanti presenti: '"<<cn<<"'";
}

void sumR(int in[][c], int R, int C, int &sum, bool p){ // Somma degli elementi nelle righe con indice dispari
  int sr;
  if(p){
    sr=1;
  }
  else{
    sr=0;
  }
  for(int i=sr; i<R; i+=2){
    for(int k=0; k<C; k++){
      cout<<"|"<<setw(2)<<left<<in[i][k]<<"| ";
      sum+=in[i][k];
    }
    cout<<"\n";
  }
}

void es2(){
  int R, C, min, max, e2[r][c], sD=0, sP=0;
  /*
  R: Righe
  C: Colonne
  min, max: range di estrazione
  sD: somma Dispari
  sP: somma Pari
  */

  insRC(R, C);
  mM(min, max);
  randMatI(e2, R, C, min, max);

  cout<<"\n\nMatrice generata: \n";
  outMatI(e2, R, C, min, max);

  cout<<"\n\nMedia degli elementi: "<<medMat(e2, R, C);
  cout<<"\n\nElementi nelle righe dispari: \n";
  sumR(e2, R, C, sD, true);
  cout<<"\nSomma elementi righe dispari: \n"<<sD;
  cout<<"\n\n\nElementi nelle righe pari: \n";
  sumR(e2, R, C, sP, false);
  cout<<"\nSomma elementi righe pari: \n"<<sP;
}

void ricDis(int in[][c], int R, int C, int k, int &ds){ // conta dispari
  for(int i=0; i<R; i++){
    if((in[i][k]%2)!=0){
      ds++;
    }
  }
}

void es3(){
  int R, C, min, max, e3[r][c], k, ds=0;

  insRC(R, C);
  mM(min, max);
  randMatI(e3, R, C, min, max);

  cout<<"\n\nMatrice generata: \n";
  outMatI(e3, R, C, min, max);

  cout<<"\n\n *Inserisci la colonna da controllare: ";
  cin>>k;
  k--;
  ricDis(e3, R, C, k, ds);
  cout<<"\nElementi dispari presenti nella colonna "<<k+1<<": '"<<ds<<"'";
}

void cpMV(int inM[][c], int inV[], int R, int k){ // copia Matrice - Vettore
  for(int i=0; i<R; i++){
    inV[i]=inM[i][k];
  }
}

void es4(){
  int R, C, min, max, e4[r][c], k;

  insRC(R, C);
  mM(min, max);
  randMatI(e4, R, C, min, max);

  cout<<"\n\nMatrice generata: \n";
  outMatI(e4, R, C, min, max);

  cout<<"\n\n *Inserisci la colonna da controllare: ";
  cin>>k;
  k--;
  int v[C];
  cpMV(e4, v, R, k);
  cout<<"\nVettore generato: ";
  outVet(v, R);
}

void medRig(int inM[][c], int inV[], int C, int k, int &m, int &j){ // media riga
  int i;
  for(i=0; i<C; i++){
    m+=inM[k][i];
  }
  m=m/i;

  for(int i=0; i<C; i++){
    if(inM[k][i]>m){
      inV[j]=inM[k][i];
      j++;
    }
  }
  sS(inV, j);
}

void es5(){
  int R, C, min, max, e5[r][c], k, m=0, j=0;

  insRC(R, C);
  mM(min, max);
  randMatI(e5, R, C, min, max);

  cout<<"\n\nMatrice generata: \n";
  cout<<"\n";
  outMatI(e5, R, C, min, max);

  cout<<"\n\n *Inserisci la riga da controllare: ";
  cin>>k;
  k--;
  int v[C];
  medRig(e5, v, C, k, m, j);
  cout<<"\nMedia dei valori nella riga "<<k+1<<": '"<<m<<"'";
  cout<<"\nValori al di sopra della media: ";
  outVet(v, j);
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
      case 3:{
        menu(3);
        es3();
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 4:{
        menu(4);
        es4();
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 5:{
        menu(5);
        es5();
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
    }
  }while(m!=0);

  menu(6);

  return 0;
}
