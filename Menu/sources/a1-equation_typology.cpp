#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void eq(int delta, int a, int b, float &x1, float &x2){ // calcolo dell'equazione
  // eq = (-b +||- sqrt(delta))/(2a)
  if(delta>0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
  }
  else if(delta==0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
  }
}

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

int main(){
  int a, b, c, d;
  float s1, s2; // passaggio per riferimento

  cout<<"* Inserisci a (x^2): ";
  cin>>a;
  cout<<"* Inserisci b (x): ";
  cin>>b;
  cout<<"* Inserisci c: ";
  cin>>c;
  cout<<endl<<endl;

  d=(b*b)-4*a*c;
  eq(d, a, b, s1, s2);

  if(d<0){
    cout<<"Delta < 0    \32 Impossibile.\n\n";
  }
  else if(d==0){
    cout<<"Delta = 0    \32  2 soluzioni coincidenti.\n\n"<<s1<<endl;
  }
  else{
    cout<<"Delta > 0    \32  2 soluzioni.\n";
    cout<<"\n\nSoluzione 1: "<<s1;
    cout<<"\n\nSoluzione 2: "<<s2<<endl;
  }

  cout<<endl<<endl;
  if(d>=0){
    cout<<"Tipologia dell'equazione: "<<tip(b, c);
  }

  return 0;
}
