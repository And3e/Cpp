#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void menu(int m){
  switch(m){
    case 0:{
        cout<<"*===========================*\n";
        cout<<"|      COMPAGNIA AEREA      |\n";
        cout<<"*===========================*\n";
        cout<<"|                           |\n";
        cout<<"|  1) Inserimento volo      |\n";
        cout<<"|  2) Voli programmati      |\n";
        cout<<"|  3) Programmazione Milano |\n";
        cout<<"|  4) Costo medio Alitalia  |\n";
        cout<<"|  5) Soglia disponibilita' |\n";
        cout<<"|                           |\n";
        cout<<"|  0) Esci                  |\n";
        cout<<"|                           |\n";
        cout<<"*===========================*\n\n\n";
        cout<<" *Inserisci un numero: ";
      break;
      }
      case 1:{
        cout<<"*======================*\n";
        cout<<"|   Inserimento volo   |\n";
        cout<<"*======================*\n\n\n";
      break;
      }
      case 2:{
        cout<<"*======================*\n";
        cout<<"|   Voli programmati   |\n";
        cout<<"*======================*\n\n\n";
      break;
      }
      case 3:{
        cout<<"*===========================*\n";
        cout<<"|   Programmazione Milano   |\n";
        cout<<"*===========================*\n\n\n";
      break;
      }
      case 4:{
        cout<<"*==========================*\n";
        cout<<"|   Costo medio Alitalia   |\n";
        cout<<"*==========================*\n\n\n";
      break;
      }
      case 5:{
        cout<<"*===========================*\n";
        cout<<"|   Soglia disponibilita'   |\n";
        cout<<"*===========================*\n\n\n";
      break;
      }
      case 6:{
        cout<<"*================================*\n";
        cout<<"|   Inserimento numero di voli   |\n";
        cout<<"*================================*\n\n\n";
      break;
      }
      case 7:{
        cout<<"*=========================*\n";
        cout<<"|      COMPAGNIA AEREA    |\n";
        cout<<"|                         |\n";
        cout<<"|   Marguerettaz Andre'   |\n";
        cout<<"|          3B IT          |\n";
        cout<<"|        14/03/2022       |\n";
        cout<<"*=========================*\n\n";
        system("pause>nul");
      }
  }
}

void sB(int im, int cV[], char tCA[], string nCA[], string lP[], string lA[], int p[], int pP[], float c[]){ // Bubble Sort
  for(int i=0; i<im-1; i++){
    for(int k=0; k<(im-1)-i; k++){
      if((p[k]-pP[k])>(p[k+1]-pP[k+1])){
        swap(cV[k], cV[k+1]);
        swap(tCA[k], tCA[k+1]);
        swap(nCA[k], nCA[k+1]);
        swap(lP[k], lP[k+1]);
        swap(lA[k], lA[k+1]);
        swap(p[k], p[k+1]);
        swap(pP[k], pP[k+1]);
        swap(c[k], c[k+1]);
      }
    }
  }
}

bool rS(int x, int p[], int pP[], int d){ // Ricerca sequenziale
  int e=-1;

  for(int i=0; i<d; i++){
    if((p[i]-pP[i])>=x){
      e=i;
      break;
    }
  }

  if(e!=-1){
    return true;
  }
  else{
    return false;
  }
}

bool conf(string a, string b){ // Confronto stringhe
  if(a==b){
    return true;
  }
  else{
    return false;
  }
}

void insV(int d, int &im, int cV[], char tCA[], string nCA[], string lP[], string lA[], int p[], int pP[], float c[]){ // Inserimento Volo
  if(im<=d){
    cout<<"Inserisci i dati (volo "<<im+1<<" su "<<d<<")";
    cout<<"\n   1) Codice Volo: ";
    cin>>cV[im];
    do{
      cout<<"   2) Tipologia compagnia aerea: ";
      cin>>tCA[im];
    }while(tCA[im]!='N' && tCA[im]!='E');
    cout<<"   3) Nome compagnia aerea: ";
    cin>>nCA[im];
    cout<<"   4) Localita' di partenza: ";
    cin>>lP[im];
    cout<<"   5) Localita' di arrivo: ";
    cin>>lA[im];
    cout<<"   6) Numero di posti complessivi: ";
    cin>>p[im];
    cout<<"   7) Numero di posti prenotati: ";
    cin>>pP[im];
    cout<<"   8) Costo del volo: ";
    cin>>c[im];
    im++;
  }
  else{
    cout<<"Numero di aerei esauriti!";
  }
}

void pV(int im, int i, int cV[], string nCA[], int p[], int pP[]){ // Programmazione Voli
  cout<<"*"<<string(52, '=')<<"*";
  cout<<"\n| "<<setw(14)<<left<<"Codice Volo"<<"|"<<setw(15)<<left<<"Compagnia"<<"|"<<setw(20)<<left<<"Posti disponibili"<<"|";
  cout<<"\n*"<<string(52, '=')<<"*";
  for(i; i<im; i++){
    cout<<"\n| "<<setw(14)<<left<<cV[i]<<"|"<<setw(15)<<left<<nCA[i]<<"|"<<setw(20)<<left<<p[i]-pP[i]<<"|";
  }
  cout<<"\n*"<<string(52, '=')<<"*";
}

void Mil(int im, string lP[], string lA[]){ // Filtro Milano
  int pa=0, ar=0;
  for(int i=0; i<im; i++){
    if(conf(lP[i], "Milano")==true){
      pa++;
    }
    if(conf(lA[i], "Milano")==true){
      ar++;
    }
  }
  cout<<"Numero di voli in partenza da Milano: "<<pa;
  cout<<"\nNumero di voli in arrivo a Milano: "<<ar;
}

void Alitalia(int im, string nCA[], float c[]){ // Filtro Alitalia
  float co=0, ico=0;
  for(int i=0; i<im; i++){
    if(conf(nCA[i], "Alitalia")==true){
      co+=c[i];
      ico++;
    }
  }
  cout<<"Costo medio voli Alitalia: "<<co/ico;
}

void rPos(int im, int cV[], string nCA[], int p[], int pP[]){ // Soglia posti disponibili
  int x;

  cout<<"Inserisci la soglia di ricerca: ";
  cin>>x;

  if(rS(x, p, pP, im)){
    cout<<"Volo con posti disponibili superiori alla soglia inserita trovato!";
  }
  else{
    cout<<"Nessun volo trovato con posti disponibili superiori alla soglia inserita!";
  }
}

int main(){
  int m, d, im=0; // m: menu  d: dim  im: immisione volo

  menu(6);
  cout<<"Inserire il numero di aerei: ";
  cin>>d;

  int cV[d]; // codice Volo
  char tCA[d]; // tipologia compagnia Aerea (N=nazionale, E=non nazionale)
  string nCA[d]; // nome compagnia Aerea
  string lP[d]; // localit� di Partenza
  string lA[d]; // localit� di Arrivo
  int p[d]; // posti complessivi
  int pP[d]; // posti Prenotati
  float c[d]; // costo

  do{
    system("cls");
    menu(0);
    cin>>m;
    system("cls");

    switch(m){
      case 1:{
        menu(1);
        insV(d, im, cV, tCA, nCA, lP, lA, p, pP, c);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 2:{
        menu(2);
        pV(im, 0, cV, nCA, p, pP);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 3:{
        menu(3);
        Mil(im, lP, lA);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 4:{
        menu(4);
        Alitalia(im, nCA, c);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
      case 5:{
        menu(5);
        sB(im, cV, tCA, nCA, lP, lA, p, pP, c);
        rPos(im, cV, nCA, p, pP);
        cout<<"\n\n";
        system("pause>nul");
      break;
      }
    }
  }while(m!=0);

  menu(7);

  return 0;
}
