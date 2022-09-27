#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int ma, mi, e, x=0, m, i=0;
  srand(time(NULL));

  cout<<"Modalit\205 1:   facile\n";
  cout<<"Modalit\205 2:   difficile\n\n";

  do{
      cout<<"Seleziona la modalit\205: ";
      cin>>m;
  }while(m!=1 && m!=2);

  cout<<"\n--------------------------------\n\n";

  switch(m){
    case 1:{
      cout<<"Inserisci il range minimo: ";
      cin>>mi;
      do{
        cout<<"\nInserisci il range massimo: ";
        cin>>ma;
      }while(ma<mi);

      e=rand()%(ma-mi+1)+mi;
      cout<<endl<<endl;

      while(e!=x){
        i++;
        system("cls");
        do{
          cout<<"Quanto vale x? ("<<mi<<"-"<<ma<<")  ";
          cin>>x;
        }while(x>ma || x<mi);

        if(e>x){
          cout<<"\nIl numero estratto \212 maggiore di "<<x<<"!\n";
          mi=x;
        }
        else if(e<x){
          cout<<"\nIl numero estratto \212 minore di "<<x<<"!\n";
          ma=x;
        }
        cout<<endl;
        system("pause");
      }

      cout<<"\n\n\nIl numero estratto valeva: "<<e<<endl;
      cout<<"Tentativi effettuati: "<<i<<endl;

    break;
    }
    case 2:{
      cout<<"Inserisci il range minimo: ";
      cin>>mi;
      do{
        cout<<"\nInserisci il range massimo: ";
        cin>>ma;
      }while(ma<mi);

      e=rand()%(ma-mi+1)+mi;
      cout<<endl<<endl;

      while(e!=x){
        i++;
        system("cls");
        do{
          cout<<"Quanto vale x? ("<<mi<<"-"<<ma<<")  ";
          cin>>x;
        }while(x>ma && x<mi);

        if(e>x){
          cout<<"\nIl numero estratto \212 maggiore di "<<x<<"!\n";
        }
        else if(e<x){
          cout<<"\nIl numero estratto \212 minore di "<<x<<"!\n";
        }
        cout<<endl;
        system("pause");
      }

      cout<<"\n\n\nIl numero estratto valeva: "<<e<<endl;
      cout<<"Tentativi effettuati: "<<i<<endl;
    break;
    }
  }

  return 0;
}
