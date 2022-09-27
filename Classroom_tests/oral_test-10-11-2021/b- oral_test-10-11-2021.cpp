#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  char c;

  cout<<"Inserisci un carattere: ";
  cin>>c;

  cout<<endl;
  if(c>=48 && c<=57){
    cout<<"Il carattere inserito \212 un numero. ";
  }
  else if(c>=32 && c<=47){
    cout<<"Il carattere inserito \212 un carattere normale. ";
  }
  else if(c>=58 && c<=127){
    cout<<"Il carattere inserito \212 un carattere normale. ";
  }
  else{
    cout<<"Il carattere inserito \212 un carattere speciale. ";
  }
  cout<<endl;

  return 0;
}
