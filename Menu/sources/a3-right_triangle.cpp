#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int casual(int min, int max){ // estrazione di un numero casuale
  return rand()%(max-min+1)+min;
}

int tr3(int a, int b, int c, int &c1, int &c2, int &ip){
  int p;

  if(a>b && a>c){ // determina se l'ipotenusa � a
    ip=a;
    c1=b;
    c2=c;
  }
  if(b>a && b>c){ // determina se l'ipotenusa � b
    ip=b;
    c1=a;
    c2=c;
  }
  if(c>a && c>b){ // determina se l'ipotenusa � c
    ip=c;
    c1=a;
    c2=b;
  }

  p=pow(c1, 2)+pow(c2, 2); // determina se � un triangolo rettangolo
  if(ip==sqrt(p)){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int min, max, a, b, c, c1, c2, ip, i=0;
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
    i++;
  }while(tr3(a, b, c, c1, c2, ip)<1);

  cout<<"\nTentativi effettuati: "<<i<<endl;
  cout<<"\nTriangolo rettangolo estratto:\n";
  cout<<"    cateto 1: "<<c1<<endl;
  cout<<"    cateto 2: "<<c2<<endl;
  cout<<"    ipotenusa: "<<ip<<endl;

  return 0;
}
