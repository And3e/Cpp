#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

struct calciatore{
  string nome, squadra;
  char ruolo;
  float minuti_in_panchina;
  int goals;
};

void insDim(int &d){
  cout<<" *Inserisci il numero di calciatori: ";
  cin>>d;
}

void outStruct(int d, calciatore in[]){
  cout<<"\n\n  Nome calciatore: "<<in[d].nome;
  cout<<"\n  Squadra: "<<in[d].squadra;
  cout<<"\n  Ruolo: ";
  if(in[d].ruolo=='p'){
    cout<<"portiere";
    cout<<"\n  Goals subiti: "<<in[d].goals<<"\n";
  }
  else{
    if(in[d].ruolo=='a'){
      cout<<"attaccante";
    }
    else if(in[d].ruolo=='d'){
      cout<<"difensore";
    }
    else{
      cout<<"terzino";
    }
    cout<<"\n  Goals fatti: "<<in[d].goals<<"\n";
  }
  cout<<"\n  Minuti in panchina: "<<in[d].minuti_in_panchina<<"\n";
}

void sS(int d, calciatore in[]){
  int x;
  for(int i=0; i<d-1; i++){
    x=i;
    for(int k=i+1; k<d; k++){
      if(in[k].goals<in[x].goals){
        x=k;
      }
    }
    swap(in[i], in[x]);
  }
}

void menu(int m){
  switch(m){
    case 0:{
      cout<<"*=============================*\n";
      cout<<"|          Calciatori         |\n";
      cout<<"*=============================*\n";
      cout<<"|                             |\n";
      cout<<"|  1) Inserimento Giocatore   |\n";
      cout<<"|  2) Classifica Bomber       |\n";
      cout<<"|  3) Minuti in panchina      |\n";
      cout<<"|  4) Bomber della squadra    |\n";
      cout<<"|                             |\n";
      cout<<"|  0) Esci                    |\n";
      cout<<"|                             |\n";
      cout<<"*=============================*\n\n\n";
      cout<<" *Inserisci un numero: ";
    break;
    }
    case 1:{
      cout<<"*===========================*\n";
      cout<<"|   Inserimento Giocatore   |\n";
      cout<<"*===========================*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*=======================*\n";
      cout<<"|   Classifica Bomber   |\n";
      cout<<"*=======================*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*========================*\n";
      cout<<"|   Minuti in panchina   |\n";
      cout<<"*========================*\n\n\n";
    break;
    }
    case 4:{
      cout<<"*==========================*\n";
      cout<<"|   Bomber della squadra   |\n";
      cout<<"*==========================*\n\n\n";
    break;
    }
    case 5:{
      cout<<"*============================*\n";
      cout<<"|   Inserimento Dimensione   |\n";
      cout<<"*============================*\n\n\n";
    break;
    }
    case 6:{
      cout<<"*=========================*\n";
      cout<<"|        Calciatori       |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        09/05/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
      break;
    }
  }
}

void calcIn(int d, calciatore in[], int &i){
  i++;

  cout<<"Calciatore "<<i+1<<" di "<<d<<endl;
  cout<<"   *Inserisci il nome: ";
  cin>>in[i].nome;
  cout<<"   *Inserisci la squadra: ";
  cin>>in[i].squadra;
  do{
      cout<<"   *Inserisci il ruolo: ' ";
      cout<<"\n   ('p' = portiere | 'a' = attaccante | 'd' = difensore | 't' = terzino) ";
      cin>>in[i].ruolo;
  }while(in[i].ruolo!='p' && in[i].ruolo!='a' && in[i].ruolo!='d' && in[i].ruolo!='t');
  if(in[i].ruolo=='p'){
      cout<<"   *Inserisci i goals subiti: ";
  }
  else{
      cout<<"   *Inserisci i goals fatti: ";
  }
  cin>>in[i].goals;
  cout<<"   *Inserisci i minuti in panchina: ";
  cin>>in[i].minuti_in_panchina;
  cout<<"\n";
}

void clss(int d, calciatore in[]){
  sS(d, in);

  if(in[d].ruolo!='p'){
    cout<<"|"<<setw(16)<<"Nome giocatore"<<setw(5)<<"|"<<setw(15)<<"Goals"<<setw(5)<<"|\n";
    for(int i=0; i<d; i++){
      cout<<"|"<<setw(20)<<left<<in[i].nome<<"|"<<setw(18)<<left<<in[i].goals<<"|\n";
    }
  }
}

void med(int d, calciatore in[], float &m, float &sA, float &sD){
  int i;

  for(i=0; i<d; i++){
    if(in[i].ruolo!='p'){
      m+=in[i].minuti_in_panchina;
    }
    if(in[i].ruolo=='a'){
      sA+=in[i].minuti_in_panchina;
    }
    else if(in[i].ruolo=='d'){
      sD+=in[i].minuti_in_panchina;
    }
  }
  m=m/(i+1);
}

void medMin(int d, calciatore in[]){
  float m=0, sA=0, sD=0;
  med(d, in, m, sA, sD);

  cout<<"Media totale: "<<m;
  cout<<"\nScarto media-difensori: "<<sD-m;
  cout<<"\nScarto media-attaccanti: "<<sA-m;
}

void bmbSq(int d, calciatore in[]){
  string s;
  int max=0, ind, j=0;

  cout<<" *Inserire la squadra voluta: ";
  cin>>s;

  for(int i=0; i<d; i++){
    if(in[i].squadra==s){
      if(in[i].goals>max){
        max=in[i].goals;
        ind=i;
        j++;
      }
    }
  }

  if(j>0){
    cout<<"    Bomber della squadra '"<<s<<"' : "<<in[ind].nome;
    cout<<"    Goals fatti: '"<<in[ind].goals<<"'";
  }
  else{
    cout<<"    Nessun Bomber trovato!";
  }
}

int main(){
  int m, d, as=-1;
  srand(time(NULL));

  menu(5);
  insDim(d);
  calciatore v[d];

  do{
    system("cls");
    menu(0);
    cin>>m;
    system("cls");

    switch(m){
      case 1:{
        menu(1);
        calcIn(d, v, as);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 2:{
        menu(2);
        clss(as, v);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 3:{
        menu(3);
        medMin(d, v);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 4:{
        menu(4);
        bmbSq(d, v);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
    }
  }while(m!=0);

  menu(6);

  return 0;
}
