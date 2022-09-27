#include <iostream>
#include <stdlib.h>

using namespace std;

void menu(int m){
  switch(m){
    case 0:{
      cout<<"*======================*\n";
      cout<<"|   Sottoprogrammi 4   |\n";
      cout<<"*======================*\n";
      cout<<"|                      |\n";
      cout<<"|   1) Robin Hood      |\n";
      cout<<"|   2) Calcolo debiti  |\n";
      cout<<"|                      |\n";
      cout<<"|   0) Esci            |\n";
      cout<<"|                      |\n";
      cout<<"*======================*\n\n\n";
      cout<<" *Inserisci un numero: ";
    break;
    }
    case 1:{
      cout<<"*================*\n";
      cout<<"|   Robin Hood   |\n";
      cout<<"*================*\n\n\n";
    break;
    }
    case 2:{
      cout<<"*====================*\n";
      cout<<"|   Calcolo debiti   |\n";
      cout<<"*====================*\n\n\n";
    break;
    }
    case 3:{
      cout<<"*=========================*\n";
      cout<<"|     Sottoprogrammi 4    |\n";
      cout<<"|                         |\n";
      cout<<"|   Marguerettaz Andre'   |\n";
      cout<<"|          3B IT          |\n";
      cout<<"|        09/02/2022       |\n";
      cout<<"*=========================*\n\n";
      system("pause>nul");
    }
  }
}

float robinHood(float x, float y){ // media - average
  return (x+y)/2;
}

void es1(){
  float a, b, r;

  cout<<"Inserisci la prima quantita' di denaro: ";
  cin>>a;
  cout<<"Inserisci la seconda quantita' di denaro: ";
  cin>>b;

  r=robinHood(a, b);

  cout<<"\n\nPassaggio di Robin Hood: ";
  cout<<"\n   Importo persona 1: "<<r;
  cout<<"\n   Importo persona 2: "<<r;
}

void sd(float &a, float &b, float &c){ // sposta debiti
  if(b<0){
    a+=b;
    b=0;
  }
  if(c<0){
    a+=c;
    c=0;
  }
}

void es2(){
  float a, b, c;

  cout<<" *Inserisci il primo importo: ";
  cin>>a;
  cout<<" *Inserisci il secondo importo: ";
  cin>>b;
  cout<<" *Inserisci il terzo importo: ";
  cin>>c;

  sd(a, b, c);

  cout<<"I nuovi importi saranno pari a: ";
  cout<<"\n   1) "<<a;
  cout<<"\n   2) "<<b;
  cout<<"\n   3) "<<c;
}

int main(){
  int m;

  //Intestazione
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
