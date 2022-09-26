#include <iostream>
#include <stdlib.h>

using namespace std;

void punt(int &p1, int &p2, int &p3){ // & == passaggio per riferimento
  static int a=0, b=0, c=0;
  a+=p1;
  b+=p2;
  c+=p3;
  p1=a;
  p2=b;
  p3=c;
}

int main(){
  int p1, p2, p3;

  for(int i=0; i<3; i++){
    cout<<"Inserisci il punteggio del player 1: ";
    cin>>p1;
    cout<<"Inserisci il punteggio del player 2: ";
    cin>>p2;
    cout<<"Inserisci il punteggio del player 3: ";
    cin>>p3;
    punt(p1, p2, p3);
    cout<<endl<<endl;
  }
  cout<<"\n\nPunti player 1: "<<p1;
  cout<<"\nPunti player 2: "<<p2;
  cout<<"\nPunti player 2: "<<p3;

  cout<<endl;
  system("pause");
  return 0;
}
