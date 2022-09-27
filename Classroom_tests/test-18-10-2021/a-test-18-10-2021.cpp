//Marguerettaz Andr� - 3BIT

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int a, b, c, ri = -50, rf = 50;

  // generatore casuale
  srand(time(NULL));

  a = rand()%(rf-ri+1)+ri; // %r --> intervallo di numeri
  cout << "1) " << a << endl;

  b = rand()%(rf-ri+1)+ri;
  cout << "2) " << b << endl;

  c = rand()%(rf-ri+1)+ri;
  cout << "3) " << c << endl << endl;

  // verifica di a
  if(a%2==0) {
    cout << a << " e' un multiplo di 2" << endl;
  }
  else {
    cout << a << " non e' un multiplo di 2" << endl;
  }

  if(a%3==0) {
    cout << a << " e' un multiplo di 3" << endl;
  }

  else {
    cout << a << " non e' un multiplo di 3" << endl;
  }

  cout << endl;

  // verifica di b
  if(b%2==0) {
    cout << b << " e' un multiplo di 2" << endl;
  }
  else {
    cout << b << " non e' un multiplo di 2" << endl;
  }

  if(b%3==0) {
    cout << b << " e' un multiplo di 3" << endl;
  }

  else {
    cout << b << " non e' un multiplo di 3" << endl;
  }

  cout << endl;

  // verifica di b
  if(c%2==0) {
    cout << c << " e' un multiplo di 2" << endl;
  }
  else {
    cout << c << " non e' un multiplo di 2" << endl;
  }

  if(c%3==0) {
    cout << c << " e' un multiplo di 3" << endl;
  }

  else {
    cout << c << " non e' un multiplo di 3" << endl;
  }

  cout << endl;

  system("pause");

  return 0;
}
