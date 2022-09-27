#include <iostream>
#include <stdlib.h>

using namespace std;

void sam(float &a, float &b, float &c){ // sottrazione al maggiore
  float min;
  if(a<b && a<c){ // minore
    min=a;
  }
  else if(b<a && b<c){
    min=b;
  }
  else{
    min=c;
  }
  if(a>b && a>c){ // maggiore
    a-=(min/2);
  }
  else if(b>a && b>c){
    b-=(min/2);
  }
  else{
    c-=(min/2);
  }
}

int main(){
  float a, b, c;
  /*
  a, b, c: valori
  */

  cout<<"Inserire il primo valore: ";
  cin>>a;
  cout<<"Inserire il secondo valore: ";
  cin>>b;
  cout<<"Inserire il terzo valore: ";
  cin>>c;

  for(int i=0; i<3; i++){
    sam(a, b, c);
  }

  cout<<"\n\nI nuovi valori sono pari a: ";
  cout<<"\n 1) "<<a;
  cout<<"\n 2) "<<b;
  cout<<"\n 3) "<<c;

  cout<<endl<<endl;
  system("pause");
  return 0;
}
