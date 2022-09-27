#include <iostream>
#include <stdlib.h>

using namespace std;

void sd(float &a, float &b, float &c){ // sposta debiti
  if(b<0){
    a+=b;
    b=0;
  }
  if(c<0){
    a+=c;
    c=0;
  }
}

int main(){
  float a, b, c;
  /*
  a, b, c: importi
  */

  cout<<"Inserire il primo importo: ";
  cin>>a;
  cout<<"Inserire il secondo importo: ";
  cin>>b;
  cout<<"Inserire il terzo importo: ";
  cin>>c;

  sd(a, b, c);

  cout<<"I nuovi importi saranno pari a: ";
  cout<<"\n 1) "<<a;
  cout<<"\n 2) "<<b;
  cout<<"\n 3) "<<c;

  cout<<endl<<endl;
  system("pause");
  return 0;
}
