#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int n, m10=0, p=0;
  srand(time(NULL));

  do{
    n=rand()%101;
    cout<<n<<", ";
    if(n%10==0){
      m10++;
      // debug  cout<<" m10 ";
    }
    if(n%2==0){
      p++;
      // debug  cout<<" pari ";
    }
  }while(m10<10 && p<51);

  cout<<endl<<endl;
  cout<<"Multipli di 10 estratti: "<<m10<<endl;
  cout<<"Numeri pari estratti: "<<p<<endl;

  return 0;
}
