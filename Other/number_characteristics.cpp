#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  /*
  n: numero inserito dall'utente
  i: contatore
  d: numero dei divisori
  sd: somma dei divisori
  */
  int n, i, d=0, sd=0;

  //Intestazione
  cout<<"*========================*"<<endl;
  cout<<"|  Caratteristiche di n  |"<<endl;
  cout<<"*========================*"<<endl<<endl;

  cout<<"* Inserisci un numero: ";
  cin>>n;
  cout<<endl;

  for(i=1; i<=(n/2); i++)
    {
    if(n%i==0)
      {
      //!debug testuale
      //cout<<"+ ho trovato un divisore!"<<endl;

      //cout -->  serve solo all'utente
      cout<<i<<" e' uno dei divisori di "<<n<<endl;
      //incremento il numero dei divisori trovati
      d++;
      //incremento la somma dei divisori di i
      //sd=sd+i; = sd+=i;
      sd+=i;

      //!debug testuale
      //cout<<"+ i="<<i<<" d="<<d<<" sd="<<sd<<endl<<endl;
      }
    }

  cout<<n<<" e' uno dei divisori di "<<n<<endl<<endl;
  d++;
  cout<<n<<" ha "<<d<<" divisori."<<endl;
  cout<<"La somma dei divisori di "<<n<<" vale "<<sd<<endl<<endl;

  //controllo se n � primo
  if(d==2)
    {
    cout<<n<<" e' un numero primo."<<endl<<endl;
    }

  //controllo se n � abbondante, difettivo o perfetto
  if(sd>n)
    {
    cout<<n<<" e' un numero abbondante."<<endl;
    }
  else if(sd<n)
    {
    cout<<n<<" e' un numero difettivo."<<endl<<endl;
    }
  else
    {
    cout<<n<<" e' un numero perfetto."<<endl<<endl;
    }

  cout<<endl;
  system("pause");
  return 0;
}
