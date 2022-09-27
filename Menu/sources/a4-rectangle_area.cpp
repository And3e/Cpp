#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

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

int main(){
  float l1, l2, d;

  cout<<"Inserisci il primo lato: ";
  cin>>l1;
  cout<<"Inserisci il secondo lato: ";
  cin>>l2;
  d=sqrt(pow(l1, 2)+pow(l2, 2));

  cout<<"\nDiagonale del rettangolo: "<<d<<endl;

  cout<<"\nArea rettangolo tra l1 e l2: "<<l1*l2;
  cout<<"\nArea rettangolo tra l1 e d: "<<l1*d;
  cout<<"\nArea rettangolo tra l2 e d: "<<l2*d;

  cout<<"\n\nIl rettangolo con area maggiore \212: "<<ma(l1*l2, l1*d, l2*d);
  cout<<"\nIl rettangolo con area minore \212: "<<mi(l1*l2, l1*d, l2*d);

  cout<<endl;
  return 0;
}
