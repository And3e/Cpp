#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int fattoriale(int n){ // possibile prototipo
  int f=1;
  for(int i=1; i<=n; i++){
    f*=i; // parametri formali
  }

  return f;
}

int main(){
  int n;

  srand(time(NULL));

  //Intestazione
  cout<<"*===========================*"<<endl;
  cout<<"|    Verifica 13/12/2021    |"<<endl;
  cout<<"|                           |"<<endl;
  cout<<"|  Fattoriale di un numero  |"<<endl;
  cout<<"*===========================*"<<endl<<endl;

  do{
    cout<<"\nInserisci il numero da calcolare: ";
    cin>>n;
  }while(n<=0);

  cout<<"\nCalcolo del fattoriale";
  for(int i=0; i<3; i++){ // parametri attuali (escluso 'i')
    Sleep(500);
    cout<<".";
  }

  cout<<"\n\n\nIl fattoriale di "<<n<<" \212 uguale a: "<<fattoriale(n)<<"\n\n\n"; // chiamata a funzione

  system("pause");
  return 0;
}
