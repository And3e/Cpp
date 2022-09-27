#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct albergo{
  string nome, regione;
  int localita, posti_disponibili;
};

int random(int min, int max){
  return rand()%(max-min+1)+min;
}

void insDim(int &d){
  cout<<" *Inserisci il numero di alberghi: ";
  cin>>d;
}

void out(int d, int a[]){
  for(int i=0; i<d; i++){
    cout<<"|"<<a[i]<<"| ";
  }
}

void outStruct(int ind, albergo in[]){
  if(in[ind].nome!="*"){
    cout<<"\n\n  Nome albergo: "<<in[ind].nome;
    cout<<"\n  Regione: "<<in[ind].regione;
    cout<<"\n  Localita': ";
    if(in[ind].localita==1){
      cout<<"mare";
    }
    else if(in[ind].localita==2){
      cout<<"montagna";
    }
    else{
      cout<<"collina";
    }
    cout<<"\n  Posti disponibili: "<<in[ind].posti_disponibili<<"\n";
  }
}

void sS(int d, int a[], int b[]){
  int x;
  for(int i=0; i<d-1; i++){
    x=i;
    for(int k=i+1; k<d; k++){
      if(a[k]<a[x]){
        x=k;
      }
    }
    swap(a[i], a[x]);
    swap(b[i], b[x]);
  }
}

void menu(int m){
  switch(m){
    case 0:{
      cout<<"*================================*\n";
      cout<<"|            Alberghi            |\n";
      cout<<"*================================*\n";
      cout<<"|                                |\n";
      cout<<"|  1) Inserimento albergo        |\n";
      cout<<"|  2) Elenco soglia disp.        |\n";
      cout<<"|  3) Min e Max posti disp.      |\n";
      cout<<"|  4) Alberghi per localita'     |\n";
      cout<<"|  5) Canc. logica reg. e disp.  |\n";
      cout<<"|                                |\n";
      cout<<"|  0) Esci                       |\n";
      cout<<"|                                |\n";
      cout<<"*================================*\n\n\n";
      cout<<" *Inserisci un numero: ";
    break;
    }
    case 1:{
      cout<<"*=========================*\n";
      cout<<"|   Inserimento Albergo   |\n";
      cout<<"*=========================*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*===============================*\n";
      cout<<"|   Elenco soglia disponibili   |\n";
      cout<<"*===============================*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*=================================*\n";
      cout<<"|   Min e Max posti disponibili   |\n";
      cout<<"*=================================*\n\n\n";
    break;
    }
    case 4:{
      cout<<"*============================*\n";
      cout<<"|   Alberghi per localita'   |\n";
      cout<<"*============================*\n\n\n";
    break;
    }
    case 5:{
      cout<<"*===================================================*\n";
      cout<<"|   Cancellazione logica regione e disponibilita'   |\n";
      cout<<"*===================================================*\n\n\n";
    break;
    }
    case 6:{
      cout<<"*=========================*\n";
      cout<<"|         Alberghi        |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        04/05/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
    }
    case 7:{
      cout<<"*============================*\n";
      cout<<"|   Inserimento Dimensione   |\n";
      cout<<"*============================*\n\n\n";
    break;
    }
  }
}

void es1(int d, albergo in[], int &i){
  string temp;
  bool e;
  i++;

  cout<<"Albergo "<<i+1<<" di "<<d<<endl;
  cout<<"   *Inserisci il nome dell'albergo: ";
  cin>>in[i].nome;
  cout<<"   *Inserisci la regione: ";
  cin>>in[i].regione;
  do{
    e=true;
    cout<<"   *Inserisci la localita' (mare | montagna | collina): ";
    cin>>temp;
    if(temp=="mare"){
      in[i].localita=1;
    }
    else if(temp=="montagna"){
      in[i].localita=2;
    }
    else if(temp=="collina"){
      in[i].localita=3;
    }
    else{
      cout<<"   Localita' non valida!\n";
      e=false;
    }
  }while(e==false);
  cout<<"   *Inserisci i posti disponibili: ";
  cin>>in[i].posti_disponibili;
  cout<<"\n";
}

void es2(int d, albergo in[]){
  int s, ord[d], ind[d], k=-1;
  char c;

  cout<<" *Inserisci la soglia: ";
  cin>>s;
  do{
    cout<<" *Inserisci il criterio ('m'=minore | 'M'=maggiore): ";
    cin>>c;
  }while(c!='m' && c!='M');

  if(c=='m'){
    for(int i=0; i<d; i++){
      if(in[i].posti_disponibili<s){
        k++;
        ord[k]=in[i].posti_disponibili;
        ind[k]=i;
      }
    }
  }
  else{
    for(int i=0; i<d; i++){
      if(in[i].posti_disponibili>s){
        k++;
        ord[k]=in[i].posti_disponibili;
        ind[k]=i;
      }
    }
  }

  if(k==-1){
    cout<<"\nNessun Albergo trovato! ";
  }
  else if(c=='m'){
    cout<<"\nAlberghi trovati sotto la soglia inserita: '"<<k+1<<"'";
  }
  else{
    cout<<"\nAlberghi trovati sopra la soglia inserita: '"<<k+1<<"'";
  }

  sS(k+1, ord, ind);

  for(int i=0; i<k+1; i++){
    outStruct(ind[i], in);
  }
}

void es3(int d, albergo in[]){
  int min=0, max=0;

  for(int i=0; i<d; i++){
    if(in[i].posti_disponibili>in[max].posti_disponibili){
      max=i;
    }
    if(in[i].posti_disponibili<in[min].posti_disponibili){
      min=i;
    }
  }

  cout<<"Albergo con piu' posti disponibili: ";
  outStruct(max, in);

  cout<<"\n\nAlbergo con meno posti disponibili: ";
  outStruct(min, in);
}

void es4(int d, albergo in[]){
  int ma[d], mai[d], mo[d], moi[d], co[d], coi[d], k1=-1, k2=-1, k3=-1;

  for(int i=0; i<d; i++){
    if(in[i].localita==1){
      k1++;
      ma[k1]=in[i].posti_disponibili;
      mai[k1]=i;
    }
    else if(in[i].localita==2){
      k2++;
      mo[k2]=in[i].posti_disponibili;
      moi[k2]=i;
    }
    else{
      k3++;
      co[k3]=in[i].posti_disponibili;
      coi[k3]=i;
    }
  }

  sS(k1+1, ma, mai);
  sS(k2+1, mo, moi);
  sS(k3+1, co, coi);

  if(k1==-1){
    cout<<"\nNessun Albergo al mare trovato!\n\n";
  }
  else{
    cout<<"\nAlberghi al mare trovati: ";
    for(int i=0; i<k1+1; i++){
      outStruct(mai[i], in);
    }
    cout<<"\n\n";
  }

  if(k2==-1){
    cout<<"\nNessun Albergo in montagna trovato!\n\n";
  }
  else{
    cout<<"\nAlberghi in montagna trovati: ";
    for(int i=0; i<k2+1; i++){
      outStruct(moi[i], in);
    }
    cout<<"\n\n";
  }

  if(k3==-1){
    cout<<"\nNessun Albergo in collina trovato!\n\n";
  }
  else{
    cout<<"\nAlberghi in collina trovati: ";
    for(int i=0; i<k3+1; i++){
    outStruct(coi[i], in);
    }
    cout<<"\n\n";
  }
}

void es5(int d, albergo in[]){
  int s, k=0;

  cout<<" *Inserisci la soglia: ";
  cin>>s;

  for(int i=0; i<d; i++){
    if(in[i].posti_disponibili<s){
      in[i].nome="*";
      k++;
    }
  }

  if(k==0){
    cout<<"\nNessun Albergo cancellato! ";
  }
  else{
    cout<<"\nAlberghi cancellati: '"<<k<<"'";
  }
}

int main(){
  int m, d, as=-1;
  srand(time(NULL));

  menu(7);
  insDim(d);
  albergo v[d];

  do{
    system("cls");
    menu(0);
    cin>>m;
    system("cls");

    switch(m){
        case 1:{
          menu(1);
          es1(d, v, as);
          cout<<"\n\n";
          system("pause>nul");
        break;
        }
        case 2:{
          menu(2);
          es2(d, v);
          cout<<"\n\n";
          system("pause>nul");
        break;
        }
        case 3:{
          menu(3);
          es3(d, v);
          cout<<"\n\n";
          system("pause>nul");
        break;
        }
        case 4:{
          menu(4);
          es4(d, v);
          cout<<"\n\n";
          system("pause>nul");
        break;
        }
        case 5:{
          menu(5);
          es5(d, v);
          cout<<"\n\n";
          system("pause>nul");
        break;
        }
      }
  }while(m!=0);

  menu(6);

  return 0;
}
