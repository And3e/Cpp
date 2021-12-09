#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    /*! Dichiarazione delle variabili
    Variabili input output */
    int a,b,risultato;

    //! acquisisco a e b
    cout<<"Inserisci a:"<<endl;
    cin >> a;
    cout<<"Inserisci b:"<<endl;
    cin>>b;

    risultato=a+b;

    cout << "Risultato:" << risultato << endl;

    system("pause");
    return 0;
}
