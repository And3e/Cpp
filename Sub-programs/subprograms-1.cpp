#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

bool ec(int a, int n){
  if(a==n){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  srand(time(NULL));
  int n, min, max, i=0, a;
  bool e;
  string name;

  //Intestazione
  cout<<"*==================*"<<endl;
  cout<<"|  Sottoprogrammi  |"<<endl;
  cout<<"*==================*"<<endl<<endl;


  // procedura senza parametri - procedure without parameters
  cout<<"Procedura senza parametri\n";
  cout<<"Quanti numeri vuoi estrarre?";
  cin>>a;
  cout<<endl;
  do{
      n=rand()%(63-(-44)+1)+44;
      cout<<"Numero estratto: "<<n<<endl;
      i++;
  }while(i<a);

  cout<<endl<<endl;
  // Procedura con parametri
  cout<<"-------------------------------------\n";
  cout<<"Per uscire, inserisci 0 e 0 in min e max\n\n";
  do{
      cout<<endl<<"Inserisci il valore minimo: ";
      cin>>min;
      do{
          cout<<"Inserisci il valore massimo: ";
          cin>>max;
      }while(max<min);

      n=rand()%(max-min+1)+min;
      cout<<"\nProcedura con parametri: "<<n<<endl;
  }while(min!=0 && max!=0);

  cout<<endl<<endl;
  // Funzione senza parametri
  cout<<"-------------------------------------\n";
  i=0;
  cout<<"Funzione senza parametri\n";
  n=rand()%51;
  cout<<"\nNome giocatore: ";
  cin>>name;

  cout<<"\nCiao "<<name<<"!";
  cout<<"\nHai 3 tentativi...";
  cout<<"\nI numeri estratti vanno da 1 a 50";
  do{
    cout<<"\nIndovina il numero estratto: ";
    cin>>a;
    e=ec(a, n);
    if(e==true){
      break;
    }
    else{
      i++;
    }
  }while(i<3);
  if(i<3){
    cout<<"\n\nComplimenti, hai indovinato il numero estratto!";
  }
  cout<<"Funzione con parametri\n";


  cout<<endl<<endl;
  // Funzione con parametri
  cout<<"\n\n-------------------------------------\n";
  cout<<"Funzione con parametri\n";
  i=0;
  cout<<"\nNome giocatore: ";
  cin>>name;

  cout<<endl<<"Inserisci il valore minimo: ";
  cin>>min;
  do{
    cout<<"Inserisci il valore massimo: ";
    cin>>max;
  }while(max<min);
  n=rand()%(max-min+1)+min;

  cout<<"\nCiao "<<name<<"!";
  cout<<"\nHai 3 tentativi...";
  cout<<"\nI numeri estratti vanno da 1 a 50";
  do{
    cout<<"\nIndovina il numero estratto: ";
    cin>>a;
    e=ec(a, n);
    if(e==true){
      break;
    }
    else{
      i++;
    }
  }while(i<3);
  if(i<3){
    cout<<"\n\nComplimenti, hai indovinato il numero estratto!\n\n";
  }
  cout<<"Funzione con parametri\n";

  return 0;
}
