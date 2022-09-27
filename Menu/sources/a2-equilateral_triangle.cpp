#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int casual(int min, int max){ // estrazione di un numero casuale
  return rand()%(max-min+1)+min;
}

int tr2(int c1, int c2, int ip){ // verifica se � un triangolo
  if(c1+c2>ip && c1+ip>c2 && c2+ip>c1){
    return 1;
  }
  else{
    return 0;
  }
}

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

int main(){
  int min, max, a, b, c;
  srand(time(NULL));

  do{
    cout<<"Inserisci il valore minimo: ";
    cin>>min;
    cout<<"Inserisci il valore massimo: ";
    cin>>max;
  }while(min>max);

  do{
  a=casual(min, max);
  b=casual(min, max);
  c=casual(min, max);
  }while(tr2(a, b, c)<1);

  cout<<"\nTriangolo estratto: \n";
  cout<<"    lato a: "<<a<<endl;
  cout<<"    lato b: "<<b<<endl;
  cout<<"    lato c: "<<c<<endl;
  cout<<"\nIl triangolo estratto \212 un triangolo "<<tip(a, b, c)<<".\n";

  return 0;
}
