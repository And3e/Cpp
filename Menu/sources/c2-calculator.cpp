#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>

void SetColor(unsigned int color)
{
  HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon, color);
  /*
  testo
  0 = Nero
  1 = Blu scuro
  2 = Verde
  3 = Verde acqua
  4 = Bordeaux
  5 = Viola
  6 = Verde oliva
  7 = Grigio chiaro
  8 = Grigio
  9 = Blu
  10 = Verde limone
  11 = Azzurro
  12 = Rosso
  13 = Fucsia
  14 = Giallo
  15 = Bianco

  sfondo
  A = Verde limone
  B = Azzurro
  C = Rosso
  D = Fucsia
  E = Giallo
  F = Bianco
  */
}

using namespace std;

int main(){
  int n;
  float a, b;
  bool e;
  string u;
  /*
  n: operatore
  a: primo numero
  b: primo numero
  e: exit
  */

  //Intestazione
  cout<<"*=====================*"<<endl;
  cout<<"|    ";
  SetColor(9);
  cout<<"Calcolatrice";
  SetColor(15);
  cout<<"     |"<<endl;
  cout<<"*=====================*"<<endl;
  cout<<"|";
  SetColor(2);
  cout<<"  1. somma";
  SetColor(15);
  cout<<"           |"<<endl;
  cout<<"|  ";
  SetColor(2);
  cout<<"2. sottrazione";
  SetColor(15);
  cout<<"     |"<<endl;
  cout<<"|  ";
  SetColor(2);
  cout<<"3. moltiplicazione";
  SetColor(15);
  cout<<" |"<<endl;
  cout<<"|  ";
  SetColor(2);
  cout<<"4. divisione";
  SetColor(15);
  cout<<"       |"<<endl;
  cout<<"|  ";
  SetColor(2);
  cout<<"5. potenza";
  SetColor(15);
  cout<<"         |"<<endl;
  cout<<"|  ";
  SetColor(2);
  cout<<"6. radice";
  SetColor(15);
  cout<<"          |"<<endl;
  cout<<"|                     |"<<endl;
  cout<<"|  ";
  SetColor(2);
  cout<<"0. esci";
  SetColor(15);
  cout<<"            |"<<endl;
  cout<<"*=====================*"<<endl;

  cout<<"\nSeleziona l'operatore: ";
  SetColor(2);
  cin>>n;
  SetColor(15);

  system("cls");

  while(n!=0) {
    switch(n){
      case 1:{
        cout<<"*=====================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(2);
        cout<<"1. somma";
        SetColor(15);
        cout<<"   |\n";
        cout<<"*=====================================*\n\n";

        cout<<"Inserisci il primo numero: ";
        cin>>a;
        cout<<"Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<a<<"+"<<b<<" = "<<a+b;
      break;
      }
      case 2:{
        cout<<"*===========================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(2);
        cout<<"2. sottrazione";
        SetColor(15);
        cout<<"   |\n";
        cout<<"*===========================================*\n\n";

        cout<<"Inserisci il primo numero: ";
        cin>>a;
        cout<<"Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<a<<"-"<<b<<" = "<<a-b;
      break;
      }
      case 3:{
        cout<<"*===============================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(2);
        cout<<"3. moltiplicazione";
        SetColor(15);
        cout<<"   |\n";
        cout<<"*===============================================*\n\n";

        cout<<"Inserisci il primo numero: ";
        cin>>a;
        cout<<"Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<a<<"*"<<b<<" = "<<a*b;
      break;
      }
      case 4:{
        cout<<"*=========================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(2);
        cout<<"4. divisione";
        SetColor(15);
        cout<<"   |\n";
        cout<<"*=========================================*\n\n";

        cout<<"Inserisci il primo numero: ";
        cin>>a;
        cout<<"Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<a<<"/"<<b<<" = "<<a/b;
      break;
      }
      case 5:{
        cout<<"*=======================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(2);
        cout<<"5. potenza";
        SetColor(15);
        cout<<"   |\n";
        cout<<"*=======================================*\n\n";

        cout<<"Inserisci il numero: ";
        cin>>a;
        cout<<"Inserisci l'esponente: ";
        cin>>b;

        cout<<endl<<a<<"^"<<b<<" = "<<pow(a,b);
      break;
      }
      case 6:{
        cout<<"*======================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(2);
        cout<<"6. radice";
        SetColor(15);
        cout<<"   |\n";
        cout<<"*======================================*\n\n";

        int ncifre, i=0;

        cout<<"Inserisci il numero: ";

        scanf("%f", &a);

        ncifre=log10(a)+1;

        cout<<" ";
        do{
            cout<<"_";
            i++;
        }
        while(i<ncifre+1);
        cout<<"\nV "<<a<<" = "<<sqrt(a);
      break;
      }
    } // fine switch case

    cout<<"\n\n------------------------------------------";
    SetColor(14);
    cout<<"\n\nVuoi effettuare un'altra operazione? (s/n)";
    SetColor(15);
    cin>>u;

    system("cls");

    if(u=="s"){
      //Intestazione
      cout<<"*=====================*"<<endl;
      cout<<"|    ";
      SetColor(4);
      cout<<"Calcolatrice";
      SetColor(15);
      cout<<"     |"<<endl;
      cout<<"*=====================*"<<endl;
      cout<<"|";
      SetColor(2);
      cout<<"  1. somma";
      SetColor(15);
      cout<<"           |"<<endl;
      cout<<"|  ";
      SetColor(2);
      cout<<"2. sottrazione";
      SetColor(15);
      cout<<"     |"<<endl;
      cout<<"|  ";
      SetColor(2);
      cout<<"3. moltiplicazione";
      SetColor(15);
      cout<<" |"<<endl;
      cout<<"|  ";
      SetColor(2);
      cout<<"4. divisione";
      SetColor(15);
      cout<<"       |"<<endl;
      cout<<"|  ";
      SetColor(2);
      cout<<"5. potenza";
      SetColor(15);
      cout<<"         |"<<endl;
      cout<<"|  ";
      SetColor(2);
      cout<<"6. radice";
      SetColor(15);
      cout<<"          |"<<endl;
      cout<<"|                     |"<<endl;
      cout<<"|  ";
      SetColor(2);
      cout<<"0. esci";
      SetColor(15);
      cout<<"            |"<<endl;
      cout<<"*=====================*"<<endl;

      cout<<"\nSeleziona l'operatore: ";
      SetColor(2);
      cin>>n;
      SetColor(15);

      system("cls");
    }
    else{
      n=0;
    }
  } // fine while
  SetColor(14);
  cout<<"Chiusura del programma";
  Sleep(300);
  cout<<".";
  Sleep(300);
  cout<<".";
  Sleep(300);
  cout<<".";
  Sleep(300);
  e=1;
  SetColor(15);

  cout<<endl<<endl;
  system("pause");
  return 0;
}
