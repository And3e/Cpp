#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

char const s=32, ad=187, as=201, bd=188, bs=200, o=205, ve=186, td=185, ts=204; // char caratteri speciali
/*
s: ascii vuoto
ad: alto-destra
as: alto-sinistra
bd: basso-destra
bs: basso-sinistra
o: orrizzontale
ve: verticale
td: curva tripla destra
ts: curva tripla sinisstra
*/

int random(int min, int max){ //! estrazione random
  return rand()%(max-min+1)+min;
}

void SetColor(unsigned int color){ // colore testo
  HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon, color);
  //google: 'codice colore c++'
}

void menugame(int menu, char &m, char &m2){
  if(menu==1){
    do{
      system("cls");
      cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<"\n"<<s<<ve<<"        ";
      SetColor(30);
      cout<<"CONBINATOR";
      SetColor(31);
      cout<<"        "<<ve<<"\n"<<s<<ts<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<td;
      cout<<"\n"<<s<<ve<<"                          "<<ve<<"\n"<<s<<ve<<"  1) ";
      SetColor(28);
      cout<<"Gioca";
      SetColor(31);
      cout<<" a CONBINATOR!  "<<ve<<"\n"<<s<<ve<<"  2) ";
      SetColor(26);
      cout<<"Info";
      SetColor(31);
      cout<<" su CONBINATOR!  "<<ve<<"\n"<<s<<ve<<"                          "<<ve<<"\n"<<s<<ve<<"  0) ";
      SetColor(23);
      cout<<"Esci";
      SetColor(31);
      cout<<" da CONBINATOR!  "<<ve<<"\n"<<s<<ve<<"                          "<<ve;
      cout<<"\n"<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<"\n";
      m=getch();
    }while(m<=48 && m>=50);
  }
  else if(menu==2){
    do{
      system("cls");
      cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<"\n"<<s<<ve<<"        ";
      SetColor(30);
      cout<<"CONBINATOR GAMES";
      SetColor(31);
      cout<<"        "<<ve<<"\n"<<s<<ts<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<td;
      cout<<"\n"<<s<<ve<<"                                "<<ve<<"\n"<<s<<ve<<"    1) ";
      SetColor(28);
      cout<<"RITIRCOMBINATOR";
      SetColor(31);
      cout<<"          "<<ve<<"\n"<<s<<ve<<"    2) ";
      SetColor(30);
      cout<<"RITIRCOMBINATOR EXTRA";
      SetColor(31);
      cout<<"    "<<ve<<"\n"<<s<<ve<<"    3) ";
      SetColor(26);
      cout<<"TRICOMBINATOR";
      SetColor(31);
      cout<<"            "<<ve<<"\n"<<s<<ve<<"    4) ";
      SetColor(29);
      cout<<"TRICOMBINATOR EXTRA";
      SetColor(31);
      cout<<"      "<<ve<<"\n"<<s<<ve<<"                                "<<ve<<"\n"<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<"\n";
      m2=getch();
    }while(m<=49 && m>=52);
  }
  else{
    system("cls");
    cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<"\n";
    cout<<s<<ve<<"  Programma realizzato da  "<<ve<<"\n";
    cout<<s<<ve<<"    Andre' Marguerettaz    "<<ve<<"\n";
    cout<<s<<ve<<"           3B IT           "<<ve<<"\n";
    cout<<s<<ve<<"     Verifica 12/01/2022   "<<ve<<"\n";
    cout<<s<<ve<<"       A.S. 2020/2021      "<<ve<<"\n";
    cout<<s<<ve<<"                           "<<ve<<"\n";
    cout<<s<<ve<<"   ";
    SetColor(224);
    cout<<"Grazie per l'utilizzo!";
    SetColor(31);
    cout<<"  "<<ve<<"\n";
    cout<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<"\n";
    system("pause>nul");
  }
}

void RITIRCOMBINATOR(){
  int min, max, x, e, i=0;
  /*
  min, max: range
  x: input da verificare
  e: numero casuale
  i: contatore
  */

  system("cls");
  // intestazione
  cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<"\n"<<s<<ve;
  SetColor(28);
  cout<<"     RITICOMBINATOR     ";
  SetColor(31);
  cout<<ve<<"\n"<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<"\n";

  cout<<" *Inserisci il range: \n";
  cout<<"   *Valore minimo: ";
  SetColor(26);
  cin>>min;
  SetColor(31);
  do{
    cout<<"   *Valore massimo: ";
    SetColor(28);
    cin>>max;
    SetColor(31);
  }while(max<min);

  do{
    cout<<"\n *Inserisci il valore da controllare: ";
    SetColor(27);
    cin>>x;
    SetColor(31);
  }while(x<min || x>max);

  cout<<"\n\n\n Estrazione";
  Sleep(100);
  cout<<".";
  Sleep(100);
  cout<<".";
  Sleep(100);
  cout<<".\n\n";

  do{
    e=random(min, max);
    Sleep(300);
    cout<<"  "<<e;
    i++;
  }while(e!=x);

  cout<<"\n\n Tentativi effettuati: "<<i<<"\n\n\n";

  system("pause>nul");
}

void RITIRCOMBINATOR_EXTRA(){
  int min, max, x, e, i=0, so=0;
  /*
  min, max: range
  x: input da verificare
  e: numero casuale
  i: contatore
  s: somma dei numeri
  */

  system("cls");
  // intestazione
  cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<s<<ve;
  SetColor(30);
  cout<<"     RITICOMBINATOR EXTRA     ";
  SetColor(31);
  cout<<ve<<endl<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;

  cout<<" *Inserisci il range: \n";
  cout<<"   *Valore minimo: ";
  SetColor(26);
  cin>>min;
  SetColor(31);
  do{
    cout<<"   *Valore massimo: ";
    SetColor(28);
    cin>>max;
    SetColor(31);
  }while(max<min);

  cout<<"\n *Inserisci il valore da raggiungere: ";
  SetColor(27);
  cin>>x;
  SetColor(31);

  cout<<"\n\n\n Estrazione";
  Sleep(100);
  cout<<".";
  Sleep(100);
  cout<<".";
  Sleep(100);
  cout<<".\n\n";

  do{
    e=random(min, max);
    Sleep(300);
    cout<<"  "<<e;
    i++;
    if(s<x){
      so+=e;
    }
    else{
      so-=e;
    }
  }while(so!=x);

  cout<<"\n\n Valore raggiunto: "<<so;
  cout<<"\n Tentativi effettuati: "<<i<<"\n\n\n";
  system("pause>nul");
}

void TRICOMBINATOR(){
  int max, a, b, c, i=0;
  bool e;
  /*
  max: range
  a, b, c: lati del triangolo
  i: contatore
  e: verifica triangolo
  */

  system("cls");
  // intestazione
  cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<"\n"<<s<<ve;
  SetColor(26);
  cout<<"     TRICOMBINATOR     ";
  SetColor(31);
  cout<<ve<<"\n"<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<"\n";

  cout<<" *Inserisci il range: \n";
  cout<<"   *Valore massimo: ";
  SetColor(28);
  cin>>max;
  SetColor(31);

  do{
    a=random(1, max);
    b=random(1, max);
    c=random(1, max);
    i++;
    if(a+b>c && a+c>b && b+c>a){
      e=true;
    }
    else{
      e=false;
    }
  }while(e==false);

  cout<<"\n\n\n Tentativi effettutati: "<<i;
  cout<<"\n\n Triangolo estratto: \n";
  cout<<"\n     lato a: "<<a;
  cout<<"\n     lato b: "<<b;
  cout<<"\n     lato c: "<<c<<"\n\n\n";

  system("pause>nul");
}

void lati(int a, int b, int c, int &c1, int &c2, int &ip){
  if(a>b && a>c){ // ip = a
    ip=a;
    c1=b;
    c2=c;
  }
  if(b>a && b>c){ // ip = b
    ip=b;
    c1=a;
    c2=c;
  }
  if(c>a && c>b){ // ip = c
    ip=c;
    c1=a;
    c2=b;
  }
}

bool ret(int c1, int c2, int ip){
  int p;
  p=pow(c1, 2)+pow(c2, 2);
  if(ip==sqrt(p)){
    return true;
  }
  else{
    return false;
  }
}

void TRICOMBINATOR_EXTRA(){
  int min, max, a, b, c, c1, c2, ip, i=0;

  system("cls");
  // intestazione
  cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<"\n"<<s<<ve;
  SetColor(29);
  cout<<"     RITICOMBINATOR EXTRA     ";
  SetColor(31);
  cout<<ve<<"\n"<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<"\n";

  cout<<" *Inserisci il range: \n";
  cout<<"   *Valore minimo: ";
  SetColor(26);
  cin>>min;
  SetColor(31);
  do{
    cout<<"   *Valore massimo: ";
    SetColor(28);
    cin>>max;
    SetColor(31);
  }while(max<min);

  do{
    a=random(min, max);
    b=random(min, max);
    c=random(min, max);
    i++;
    lati(a, b, c, c1, c2, ip);
  }while(ret(c1, c2, ip)==false);

  cout<<"\n\n\n Tentativi effettuati: "<<i<<endl;
  cout<<"\n\n Triangolo rettangolo estratto:\n";
  cout<<"     cateto 1: "<<c1<<endl;
  cout<<"     cateto 2: "<<c2<<endl;
  cout<<"     ipotenusa: "<<ip<<"\n\n\n";

  system("pause>nul");
}

int main(){
  char m, m2;
  // m: menu
  srand(time(NULL));
  system("color 1f");

  menugame(1, m, m2);

  while(m!=48){
    switch(m){
      case 49:{ // 1
        menugame(2, m, m2);
        switch(m2){ // 1
          case 49:{
            RITIRCOMBINATOR();
          break;
          }
          case 50:{ // 2
            RITIRCOMBINATOR_EXTRA();
          break;
          }
          case 51:{ // 3
            TRICOMBINATOR();
          break;
          }
          case 52:{ // 4
            TRICOMBINATOR_EXTRA();
          break;
          }
        } // chiusura switch m2
      break;
      }
      case 50:{ // 2
        cout<<"\n\n\n  ";
        SetColor(31);
        cout<<"W";
        Sleep(250);
        SetColor(47);
        cout<<"O";
        Sleep(250);
        SetColor(63);
        cout<<"R";
        Sleep(250);
        SetColor(79);
        cout<<"K";
        Sleep(250);
        SetColor(31);
        cout<<" ";
        Sleep(250);
        SetColor(95);
        cout<<"I";
        Sleep(250);
        SetColor(111);
        cout<<"N";
        Sleep(250);
        SetColor(31);
        cout<<" ";
        Sleep(250);
        SetColor(159);
        cout<<"P";
        Sleep(250);
        SetColor(175);
        cout<<"R";
        Sleep(250);
        SetColor(191);
        cout<<"O";
        Sleep(250);
        SetColor(207);
        cout<<"G";
        Sleep(250);
        SetColor(223);
        cout<<"R";
        Sleep(250);
        SetColor(239);
        cout<<"E";
        Sleep(250);
        SetColor(31);
        cout<<"S";
        Sleep(250);
        SetColor(47);
        cout<<"S";
        Sleep(250);
        SetColor(127);
        cout<<".";
        Sleep(250);
        SetColor(143);
        cout<<".";
        Sleep(250);
        SetColor(15);
        cout<<".";
        SetColor(31);
        system("pause>nul");
      break;
      }
    } //chiusura switch m
    menugame(1, m, m2);
  } // chiusura while

  menugame(3, m, m2);

  return 0;
}
