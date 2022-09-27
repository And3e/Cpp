// Marguerettaz Andr� - 3BIT

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  /*
  k = contatore
  q = variabile di supporto
  n = numero inserito dall'utente --> usato per il calcolo del quadrato
  */

  int k=1, n, q;

  cout<<"Inserisci un numero: "<<endl;
  cin>>n;

  do {
    q=k*k;
    k=k+1;
  }
  while(q<n);


  if(q==n) {
    cout<<n<<" e' un quadrato perfetto."<<endl<<endl;;
  }
  else {
    cout<<n<<" non e' un quadrato perfetto."<<endl<<endl;
  }

  system("pause");

  return 0;
}
