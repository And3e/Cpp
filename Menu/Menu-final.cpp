#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>

using namespace std;

void SetColor(unsigned int color){ // colore testo
  HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon, color);
  //google: 'codice colore c++'
}

void menu(int a, int b, bool &mtf){ //  controllo codice programma
  // false (0) se ok
  if(a=='a' || a=='A' || a=='b' || a=='B' || a=='c' || a=='C'){
    if(a>64 && a<68){ // controllo di a
      mtf=false;
    }
    else if(a>96 && a<100){
      mtf=false;
    }
    else{
      mtf=true;
    }

    if(a=='c' || a=='C'){ // controllo di b
      if(b=='1' || b=='2'){
        mtf=false;
      }
      else{
        mtf=true;
      }
    }
    else{
      if(b=='1' || b=='2' || b=='3' || b=='4' || b=='5'){
        mtf=false;
      }
      else{
        mtf=true;
      }
    }
  } // fine if a
  else{
    mtf=true;
  }
} // fine controllo codice programma

int casual(int min, int max){ // estrazione di un numero casuale
  return rand()%(max-min+1)+min;
}

// supporto A1
void eq(int delta, int a, int b, float &s1, float &s2){ // calcolo dell'equazione
  // eq = (-b +||- sqrt(delta))/(2a)
  if(delta>0){
    s1=(-b+sqrt(delta))/(2*a);
    s2=(-b-sqrt(delta))/(2*a);
  }
  else if(delta==0){
    s1=(-b+sqrt(delta))/(2*a);
    s2=(-b+sqrt(delta))/(2*a);
  }
}

// supporto A1
string tip(int b, int c){// calcolo della tipologia
  if(b!=0 && c==0){
    return "spuria";
  }
  else if(b==0 && c!=0){
    return "pura";
  }
  else if(b==0 && c==0){
    return "monomia";
  }
  else{
    return "completa";
  }
}

void A1(){
  int a, b, c, d;
  float s1=0, s2=0; // passaggio per riferimento

  cout<<" * Inserisci 'a' (x^2): ";
  cin>>a;
  cout<<" * Inserisci 'b' (x): ";
  cin>>b;
  cout<<" * Inserisci 'c': ";
  cin>>c;
  cout<<endl<<endl;

  d=(b*b)-4*a*c;
  eq(d, a, b, s1, s2);

  if(d<0){
    cout<<" Delta < 0    \32 Impossibile.\n\n";
  }
  else if(d==0){
    cout<<" Delta = 0    \32  2 soluzioni coincidenti.\n\n"<<s1<<endl;
  }
  else{
    cout<<" Delta > 0    \32  2 soluzioni.\n";
    cout<<"\n\n Soluzione 1: "<<s1;
    cout<<"\n\n Soluzione 2: "<<s2<<endl;
  }

  cout<<endl<<endl;
  if(d>=0){
    cout<<" Tipologia dell'equazione: "<<tip(b, c);
  }
}

// supporto A2
int tr2(int c1, int c2, int ip){ // verifica se è un triangolo
  if(c1+c2>ip && c1+ip>c2 && c2+ip>c1){
    return 1;
  }
  else{
    return 0;
  }
}

// supporto A2
string tip(int a, int b, int c){
  if(a==b && a==c){
    return "equilatero";
  }
  else if(a!=b && a!=c && b!=c){
    return "scaleno";
  }
  else{
    return "isoscele";
  }
}

void A2(){
  int min, max, a, b, c, i=0;

  do{
    cout<<" * Inserisci il valore minimo: ";
    cin>>min;
    cout<<" * Inserisci il valore massimo: ";
    cin>>max;
  }while(min>max);

  do{
    a=casual(min, max);
    b=casual(min, max);
    c=casual(min, max);
    i++;
  }while(tr2(a, b, c)<1);

  cout<<"\n Tentativi effettutati: "<<i;
  cout<<"\n\n Triangolo estratto: \n";
  cout<<"     lato a: "<<a<<endl;
  cout<<"     lato b: "<<b<<endl;
  cout<<"     lato c: "<<c<<endl;
  cout<<"\n Il triangolo estratto \212 un triangolo "<<tip(a, b, c)<<".";
}

//supporto A3
int tr3(int a, int b, int c, int &c1, int &c2, int &ip){
  int p;

  if(a>b && a>c){ // determina se l'ipotenusa è a
    ip=a;
    c1=b;
    c2=c;
  }
  if(b>a && b>c){ // determina se l'ipotenusa è b
    ip=b;
    c1=a;
    c2=c;
  }
  if(c>a && c>b){ // determina se l'ipotenusa è c
    ip=c;
    c1=a;
    c2=b;
  }

  p=pow(c1, 2)+pow(c2, 2); // determina se è un triangolo rettangolo
  if(ip==sqrt(p)){
    return 1;
  }
  else{
    return 0;
  }
}

void A3(){
  int min, max, a, b, c, c1, c2, ip, i=0;

  do{
    cout<<" * Inserisci il valore minimo: ";
    cin>>min;
    cout<<" * Inserisci il valore massimo: ";
    cin>>max;
  }while(min>max);

  do{
    a=casual(min, max);
    b=casual(min, max);
    c=casual(min, max);
    i++;
  }while(tr3(a, b, c, c1, c2, ip)<1);

  cout<<"\n Tentativi effettuati: "<<i<<endl;
  cout<<"\n Triangolo rettangolo estratto:\n";
  cout<<"     cateto 1: "<<c1<<endl;
  cout<<"     cateto 2: "<<c2<<endl;
  cout<<"     ipotenusa: "<<ip;
}

// supporto A4
string ma(float l1l2, float l1d, float l2d){
  if(l1l2>l1d && l1l2>l2d){
    return "l1-l2";
  }
  else if(l1d>l1l2 && l1d>l2d){
    return "l1-d";
  }
  else{
    return "l2-d";
  }
}

// supporto A4
string mi(float l1l2, float l1d, float l2d){
  if(l1l2<l1d && l1l2<l2d){
    return "l1-l2";
  }
  else if(l1d<l1l2 && l1d<l2d){
    return "l1-d";
  }
  else{
    return "l2-d";
  }
}

void A4(){
  float l1, l2, d;

  cout<<" * Inserisci il primo lato: ";
  cin>>l1;
  cout<<" * Inserisci il secondo lato: ";
  cin>>l2;
  d=sqrt(pow(l1, 2)+pow(l2, 2));

  cout<<"\n Diagonale del rettangolo: "<<d<<endl;

  cout<<"\n Area rettangolo tra l1 e l2: "<<l1*l2;
  cout<<"\n Area rettangolo tra l1 e d: "<<l1*d;
  cout<<"\n Area rettangolo tra l2 e d: "<<l2*d;

  cout<<"\n\n Il rettangolo con area maggiore \212: "<<ma(l1*l2, l1*d, l2*d);
  cout<<"\n Il rettangolo con area minore \212: "<<mi(l1*l2, l1*d, l2*d);
}

void A5(){
  int max, min, x, i=0, a, b, d=0;

  cout<<" * Inserisci l'area da trovare: ";
  cin>>x;

  do{
    cout<<endl;
    cout<<" * Inserisci il valore minimo: ";
    cin>>min;
    cout<<" * Inserisci il valore massimo: ";
    cin>>max;
  }while(max*max<x);

  //calcolo dei divisori
  for(int i=1; i<=(x/2); i++)
    {
    if(x%i==0)
      {
      d++;
      }
    }
  //controllo se n è un numero primo
  if(d<2)
    {
    cout<<"\n Il numero inserito \212 un numero primo!\n";
    cout<<" Area = "<<x<<" * 1 = "<<x<<endl;
    }
    else{
    do{
      a=casual(min, max);
      b=casual(min, max);
      i++;
    }while(a*b!=x);

    cout<<"\n Tentativi effettuati: "<<i<<endl;
    cout<<"\n Lato a: "<<a;
    cout<<"\n Lato b: "<<b;
  }
}

void B1(){
  int m, n, x, e, k=0;

  cout<<" * Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\n * Inserisci il numero dei lanci da effettuare: ";
  cin>>n;

  do{
    cout<<"\n * Inserisci la faccia da contare: ";
    cin>>x;
  }while(x>m);

  cout<<"\n ";
  for(int i=0; i<n; i++){
    e=casual(1, m);
    cout<<e<<"  ";
    if(e==x){
      k++;
    }
  }

  cout<<"\n\n La faccia inserita \212 stata estratta "<<k<<" volte.";
}

void B2(){
  int m, n=0, x, e, i=0;

  cout<<" * Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\n * Inserisci il valore da superare: ";
  cin>>x;

  cout<<"\n ";
  while(n<x){
    e=casual(1, m);
    cout<<e<<"  ";
    n+=e;
    i++;
  }

  cout<<"\n\n Tentativi effettuati: "<<i;
  cout<<"\n Somma raggiunta: "<<n;
}

void B3(){
  int m, n=0, x, e, i=0, k=0;

  cout<<" * Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\n * Inserisci il valore da raggiungere: ";
  cin>>x;

  cout<<"\n ";
  while(n!=x){
    e=casual(1, m);
    cout<<e<<"  ";
    if(n<x){
      n+=e;
      i++;
    }
    else{
      n-=e;
      k++;
    }
  }

  cout<<"\n\n Tentativi effettuati: "<<i;
  cout<<"\n\n Somme effettuate: "<<i;
  cout<<"\n Sottrazioni effettuate: "<<k;
}

void B4(){
  int m, n, x, e, i=0, k=0;

  cout<<" * Inserisci il numero di facce del dado: ";
  cin>>m;

  cout<<"\n * Inserisci il numero dei lanci da effettuare: ";
  cin>>n  ;

  do{
    cout<<"\n * Inserisci la faccia truccata: ";
    cin>>x;
  }while(x>m);

  cout<<"\n ";
  for(i=0; i<n; i++){
    e=casual(1, m);
    cout<<e<<"  ";
    while(k<1){
      if(e==x){
          n++;
      }
      k++;
    }

  }

  cout<<"\n\n Estrazioni effettuate: "<<i;
  if(k==1){
    cout<<"\n La faccia truccata '"<<x<<"' \212 stata estratta.";
  }
  else{
    cout<<"\n La faccia truccata '"<<x<<"' non \212 stata estratta.";
  }
}

void B5(){
  int m, n=0, x, e, i=0, k=0;

  cout<<" * Inserisci il numero di facce del dado: ";
  cin>>m;

  do{
    cout<<"\n * Inserisci la faccia da controllare: ";
    cin>>x;
  }while(x>m);

  cout<<"\n * Inserisci il numero dei lanci da effettuare (n volte la faccia scelta): ";
  cin>>n;

  cout<<"\n ";
  for(i; k<n; i++){ // how to brake an for ;-)
    e=casual(1, m);
    cout<<e<<"  ";
    if(e==x){
      k++;
    }
  }

  cout<<"\n\n Lanci effettuati: "<<i;
  cout<<"\n La faccia inserita \212 stata estratta "<<k<<" volte.";
}

void C1(){
  int ma, mi, e, x=0, m, i=0;

  cout<<" Modalit\205 1:   facile\n";
  cout<<" Modalit\205 2:   difficile\n\n";

  do{
      cout<<" * Seleziona la modalit\205: ";
      cin>>m;
  }while(m!=1 && m!=2);

  cout<<"\n--------------------------------\n\n";

  switch(m){
    case 1:{
      cout<<" * Inserisci il range minimo: ";
      cin>>mi;
      do{
        cout<<"\n * Inserisci il range massimo: ";
        cin>>ma;
      }while(ma<mi);

      e=rand()%(ma-mi+1)+mi;
      cout<<endl<<endl;

      while(e!=x){
        i++;
        system("cls");
        do{
          cout<<" Quanto vale x? ("<<mi<<"-"<<ma<<")  ";
          cin>>x;
        }while(x>ma || x<mi);

        if(e>x){
          cout<<"\n Il numero estratto \212 maggiore di "<<x<<"!\n";
          mi=x;
        }
        else if(e<x){
          cout<<"\n Il numero estratto \212 minore di "<<x<<"!\n";
          ma=x;
        }
        cout<<endl<<" ";
        system("pause");
      }

      cout<<"\n\n\n Il numero estratto valeva: "<<e<<endl;
      cout<<" Tentativi effettuati: "<<i;

    break;
    }
    case 2:{
      cout<<" * Inserisci il range minimo: ";
      cin>>mi;
      do{
        cout<<"\n * Inserisci il range massimo: ";
        cin>>ma;
      }while(ma<mi);

      e=rand()%(ma-mi+1)+mi;
      cout<<endl<<endl;

      while(e!=x){
        i++;
        system("cls");
        do{
          cout<<" Quanto vale x? ("<<mi<<"-"<<ma<<")  ";
          cin>>x;
        }while(x>ma && x<mi);

        if(e>x){
          cout<<"\n Il numero estratto \212 maggiore di "<<x<<"!\n";
        }
        else if(e<x){
          cout<<"\n Il numero estratto \212 minore di "<<x<<"!\n";
        }
        cout<<endl<<" ";
        system("pause");
      }

      cout<<"\n\n\n Il numero estratto valeva: "<<e<<endl;
      cout<<" Tentativi effettuati: "<<i;
    break;
    }
  }
}

void C2(){
  char n;
  float a, b;
  string u;
  /*
  n: operatore
  a: primo numero
  b: primo numero
  e: exit
  */

  //Intestazione
  cout<<" *=====================*"<<endl;
  cout<<" |    ";
  SetColor(121);
  cout<<"CALCOLATRICE";
  SetColor(112);
  cout<<"     |"<<endl;
  cout<<" *=====================*"<<endl;
  cout<<" |";
  SetColor(114);
  cout<<"  1. somma";
  SetColor(112);
  cout<<"           |"<<endl;
  cout<<" |  ";
  SetColor(114);
  cout<<"2. sottrazione";
  SetColor(112);
  cout<<"     |"<<endl;
  cout<<" |  ";
  SetColor(114);
  cout<<"3. moltiplicazione";
  SetColor(112);
  cout<<" |"<<endl;
  cout<<" |  ";
  SetColor(114);
  cout<<"4. divisione";
  SetColor(112);
  cout<<"       |"<<endl;
  cout<<" |  ";
  SetColor(114);
  cout<<"5. potenza";
  SetColor(112);
  cout<<"         |"<<endl;
  cout<<" |  ";
  SetColor(114);
  cout<<"6. radice";
  SetColor(112);
  cout<<"          |"<<endl;
  cout<<" |                     |"<<endl;
  cout<<" |  ";
  SetColor(117);
  cout<<"0. esci";
  SetColor(112);
  cout<<"            |"<<endl;
  cout<<" *=====================*"<<endl;

  do{
    cout<<"\n * Seleziona l'operatore: ";
    SetColor(114);
    cin>>n;
    SetColor(112);
  }while(n!='0' && n!='1' && n!='2' && n!='3' && n!='4' && n!='5' && n!='6');

  system("cls");

  while(n!=0) {
    switch(n){
      case '1':{
        cout<<"*=====================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(114);
        cout<<"1. somma";
        SetColor(112);
        cout<<"   |\n";
        cout<<"*=====================================*\n\n";

        cout<<" * Inserisci il primo numero: ";
        cin>>a;
        cout<<" * Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<" "<<a<<"+"<<b<<" = "<<a+b;
        break;
      }
      case '2':{
        cout<<"*===========================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(114);
        cout<<"2. sottrazione";
        SetColor(112);
        cout<<"   |\n";
        cout<<"*===========================================*\n\n";

        cout<<" * Inserisci il primo numero: ";
        cin>>a;
        cout<<" * Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<" "<<a<<"-"<<b<<" = "<<a-b;
        break;
      }
      case '3':{
        cout<<"*===============================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(114);
        cout<<"3. moltiplicazione";
        SetColor(112);
        cout<<"   |\n";
        cout<<"*===============================================*\n\n";

        cout<<" * Inserisci il primo numero: ";
        cin>>a;
        cout<<" * Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<" "<<a<<"*"<<b<<" = "<<a*b;
        break;
      }
      case '4':{
        cout<<"*=========================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(114);
        cout<<"4. divisione";
        SetColor(112);
        cout<<"   |\n";
        cout<<"*=========================================*\n\n";

        cout<<" * Inserisci il primo numero: ";
        cin>>a;
        cout<<" * Inserisci il secondo numero: ";
        cin>>b;

        cout<<endl<<" "<<a<<"/"<<b<<" = "<<a/b;
        break;
      }
      case '5':{
        cout<<"*=======================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(114);
        cout<<"5. potenza";
        SetColor(112);
        cout<<"   |\n";
        cout<<"*=======================================*\n\n";

        cout<<" * Inserisci il numero: ";
        cin>>a;
        cout<<" * Inserisci l'esponente: ";
        cin>>b;

        cout<<endl<<" "<<a<<"^"<<b<<" = "<<pow(a,b);
        break;
      }
      case '6':{
        cout<<"*======================================*\n";
        cout<<"|   Operatore selezionato: ";
        SetColor(114);
        cout<<"6. radice";
        SetColor(112);
        cout<<"   |\n";
        cout<<"*======================================*\n\n";

        int ncifre, i=0;

        cout<<" * Inserisci il numero: ";

        scanf("%f", &a);

        ncifre=log10(a)+1;

        cout<<"  ";
        do{
            cout<<"_";
            i++;
        }
        while(i<ncifre+1);
        cout<<"\n V "<<a<<" = "<<sqrt(a);
        break;
      }
      case '0':{
          goto exit;
      }
    } // fine switch case

    cout<<"\n\n ------------------------------------------";
    SetColor(116);
    cout<<"\n\n Vuoi effettuare un'altra operazione? (s/n) ";
    SetColor(113);
    cin>>u;
    SetColor(112);

    system("cls");

    if(u=="s" || u=="S"){
      //Intestazione
      cout<<" *=====================*"<<endl;
      cout<<" |    ";
      SetColor(121);
      cout<<"CALCOLATRICE";
      SetColor(112);
      cout<<"     |"<<endl;
      cout<<" *=====================*"<<endl;
      cout<<" |";
      SetColor(114);
      cout<<"  1. somma";
      SetColor(112);
      cout<<"           |"<<endl;
      cout<<" |  ";
      SetColor(114);
      cout<<"2. sottrazione";
      SetColor(112);
      cout<<"     |"<<endl;
      cout<<" |  ";
      SetColor(114);
      cout<<"3. moltiplicazione";
      SetColor(112);
      cout<<" |"<<endl;
      cout<<" |  ";
      SetColor(114);
      cout<<"4. divisione";
      SetColor(112);
      cout<<"       |"<<endl;
      cout<<" |  ";
      SetColor(114);
      cout<<"5. potenza";
      SetColor(112);
      cout<<"         |"<<endl;
      cout<<" |  ";
      SetColor(114);
      cout<<"6. radice";
      SetColor(112);
      cout<<"          |"<<endl;
      cout<<" |                     |"<<endl;
      cout<<" |  ";
      SetColor(117);
      cout<<"0. esci";
      SetColor(112);
      cout<<"            |"<<endl;
      cout<<" *=====================*"<<endl;

      do{
          cout<<"\n * Seleziona l'operatore: ";
          SetColor(113);
          cin>>n;
          SetColor(112);
      }while(n!='0' && n!='1' && n!='2' && n!='3' && n!='4' && n!='5' && n!='6');

      system("cls");
    }
    else{
      exit:
          n=0;
    }
  } // fine while
}

int main(){
  char m[2];
  bool mtf, exit;

  /*
  m[]: menu selezionato
  mtf: menu true o false --> verifica se il primo carattere inserito e' una lettera e se il secondo e' un numero
  */

  srand(time(NULL));

  do{
    do{
      system("color 70");
      //Intestazione
      cout<<"*===============================================*"<<endl;
      cout<<"|           ";
      SetColor(113);
      cout<<"MENU' PRIMO QUADRIMESTRE";
      SetColor(112);
      cout<<"            |"<<endl;
      cout<<"*===============================================*"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"|  ";
      SetColor(124);
      cout<<"A) Matematica";
      SetColor(112);
      cout<<"                                |"<<endl;
      cout<<"|     1) Equazione di 2^ grado                  |"<<endl;
      cout<<"|     2) Estrazione di un triangolo             |"<<endl;
      cout<<"|     3) Estrazione di un triangolo rettangolo  |"<<endl;
      cout<<"|     4) Diagonale di un rettangolo             |"<<endl;
      cout<<"|     5) Area di un rettangolo uguale a n       |"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"|  ";
      SetColor(121);
      cout<<"B) Giochi di dadi";
      SetColor(112);
      cout<<"                            |"<<endl;
      cout<<"|     1) Estrazione dado n volte                |"<<endl;
      cout<<"|     2) Somma delle facce maggiore di n        |"<<endl;
      cout<<"|     3) Somma delle facce uguale a n           |"<<endl;
      cout<<"|     4) Estrazione con faccia truccata         |"<<endl;
      cout<<"|     5) Estrazione faccia n volte              |"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"|  ";
      SetColor(114);
      cout<<"C) Vario";
      SetColor(112);
      cout<<"                                     |"<<endl;
      cout<<"|     1) Indovina il numero                     |"<<endl;
      cout<<"|     2) Calcolatrice                           |"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"|  ";
      SetColor(117);
      cout<<"E) Esci";
      SetColor(112);
      cout<<"                                      |"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"*===============================================*"<<endl;

      SetColor(112);
      cout<<"\n\n * Inserisci il programma da eseguire: ";
      SetColor(113);
      cin>>m[0];
      SetColor(112);
      if(m[0]=='E' || m[0]=='e'){
        mtf=false;
        exit=true;
      }
      else{ // messaggio di errore codice programma
        SetColor(113);
        cin>>m[1];
        SetColor(112);
        menu(m[0], m[1], mtf);
        if(mtf==true){
          cout<<"\n   ";
          SetColor(236);
          cout<<"Codice programma non valido!";
          SetColor(112);
          cout<<endl<<endl;
          Sleep(200);
          system("pause");
          system("cls");
        }
      }
    }while(mtf==true); // verifica codice programma

    switch(m[0]){ // switch macro argomenti
      case 'a':
      case 'A':{ // macro argomento A
        switch(m[1]){ // switch m[1]
          case '1':{ // case A1 'equazione di 2^ grado'
            system("cls");
            system("color 70");
            cout<<"*========================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(124);
            cout<<"A1";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Equazione di 2^ grado   ";
            SetColor(112);
            cout<<"|\n*========================================================*";
            SetColor(114);
            cout<<"\n         Risolutore di equazioni di secondo grado\n\n";
            SetColor(112);
            A1();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '2':{ // case A2 'estrazione di un triangolo'
            system("cls");
            system("color 70");
            cout<<"*=============================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(124);
            cout<<"A2";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Estrazione di un triangolo   ";
            SetColor(112);
            cout<<"|\n*=============================================================*";
            SetColor(114);
            cout<<"\n            Estrazione di un triangolo dato un range\n\n";
            SetColor(112);
            A2();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '3':{ // case A3 'estrazione di un triangolo rettangolo'
            system("cls");
            system("color 70");
            cout<<"*========================================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(124);
            cout<<"A3";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Estrazione di un triangolo rettangolo   ";
            SetColor(112);
            cout<<"|\n*========================================================================*";
            SetColor(114);
            cout<<"\n            Estrazione di un triangolo rettangolo dato un range\n\n";
            SetColor(112);
            A3();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '4':{ // case A4 'diagonale di un rettangolo'
            system("cls");
            system("color 70");
            cout<<"*=============================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(124);
            cout<<"A4";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Diagonale di un rettangolo   ";
            SetColor(112);
            cout<<"|\n*=============================================================*";
            SetColor(114);
            cout<<"\n        Calcolo della diagonale e dei rettangoli con lati";
            cout<<"\n                       l1-l2, l1-d, l2-d\n\n";
            SetColor(112);
            A4();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '5':{ // case A5 'area di un rettangolo uguale a n'
            system("cls");
            system("color 70");
            cout<<"*===================================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(124);
            cout<<"A5";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Area di un rettangolo uguale a n   ";
            SetColor(112);
            cout<<"|\n*===================================================================*";
            SetColor(114);
            cout<<"\n            Estrazione di un triangolo rettangolo con area";
            cout<<"\n                          uguale a 'n' inserito\n\n";
            SetColor(112);
            A5();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
        }
        break;
      } // fine macro argomento A
      case 'b':
      case 'B':{ // macro argomento B
        switch(m[1]){ // switch B
          case '1':{ // case B1 'estrazione dado n volte'
            system("cls");
            system("color 70");
            cout<<"*==========================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(121);
            cout<<"B1";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Estrazione dado n volte   ";
            SetColor(112);
            cout<<"|\n*==========================================================*";
            SetColor(114);
            cout<<"\n        Estrazione di una faccia scelta date 'n' volte\n\n";
            SetColor(112);
            B1();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '2':{ // case B2 'somma delle facce maggiore di n'
            system("cls");
            system("color 70");
            cout<<"*==================================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(121);
            cout<<"B2";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Somma delle facce maggiore di n   ";
            SetColor(112);
            cout<<"|\n*==================================================================*";
            SetColor(114);
            cout<<"\n    Somma delle facce estratte fino al raggiungimeto di 'n' dato\n\n";
            SetColor(112);
            B2();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '3':{ // case B3 'somma delle facce uguale a n'
            system("cls");
            system("color 70");
            cout<<"*===============================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(121);
            cout<<"B3";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Somma delle facce uguale a n   ";
            SetColor(112);
            cout<<"|\n*===============================================================*";
            SetColor(114);
            cout<<"\n         Somma delle facce estratte fino al raggiungimeto";
            cout<<"\n                        preciso di 'n' dato\n\n";
            SetColor(112);
            B3();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '4':{ // case B4 'estrazione con faccia truccata'
            system("cls");
            system("color 70");
            cout<<"*=================================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(121);
            cout<<"B4";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Estrazione con faccia truccata   ";
            SetColor(112);
            cout<<"|\n*=================================================================*";
            SetColor(114);
            cout<<"\n             Estrazione di 'n' dadi con faccia truccata";
            cout<<"\n      (faccia truccata = se viene estratta la faccia truccata,";
            cout<<"\n                  viene effettuato un'altro lancio)\n\n";
            SetColor(112);
            B4();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '5':{ // case B5 'estrazione faccia n volte'
            system("cls");
            system("color 70");
            cout<<"*============================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(121);
            cout<<"B5";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Estrazione faccia n volte   ";
            SetColor(112);
            cout<<"|\n*============================================================*";
            SetColor(114);
            cout<<"\n    Estrazione di un dado fino a 'n' volte la faccia scelta\n\n";
            SetColor(112);
            B5();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
        }
        break;
      } // fine macro argomento B
      case 'c':
      case 'C':{ // macro argomento C
        switch(m[1]){ // switch C
          case '1':{ // case C1 'indovina il numero'
            system("cls");
            system("color 70");
            cout<<"*=====================================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(114);
            cout<<"C1";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Indovina il numero   ";
            SetColor(112);
            cout<<"|\n*=====================================================*";
            SetColor(114);
            cout<<"\n              Indovina il numero estratto";
            cout<<"\n             Modalit\205 facile: range mobile";
            cout<<"\n            Modalit\205 difficile: range fisso\n\n";
            SetColor(112);
            C1();
            cout<<endl<<endl<<endl<<" ";
            system("pause");
            system("cls");
          break;
          }
          case '2':{ // case C2 'calcolatrice'
            system("cls");
            system("color 70");
            cout<<"*===============================================*\n";
            cout<<"|   Programma selezionato:  ";
            SetColor(120);
            cout<<"|";
            SetColor(114);
            cout<<"C2";
            SetColor(120);
            cout<<"|";
            SetColor(113);
            cout<<" Calcolatrice   ";
            SetColor(112);
            cout<<"|\n*===============================================*\n\n";
            C2();
            system("cls");
          break;
          }
        }
      }
    } // fine macro argomento C (fine dei macro argomenti)
  }while(exit==false); // verifica uscita

  // messaggio di uscita
  system("cls");
  //Intestazione
  cout<<"*===========================*"<<endl;
  cout<<"|  Programma realizzato da  |"<<endl;
  cout<<"|    Andre' Marguerettaz    |"<<endl;
  cout<<"|           3B IT           |"<<endl;
  cout<<"|         1/12/2021         |"<<endl;
  cout<<"|       A.S. 2020/2021      |"<<endl;
  cout<<"|                           |"<<endl;
  cout<<"|   ";
  SetColor(224);
  cout<<"Grazie per l'utilizzo!";
  SetColor(112);
  cout<<"  |"<<endl;
  cout<<"*===========================*"<<endl<<endl;

  system("pause");

  return 0;
}
