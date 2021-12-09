#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    double i=1.0, s=0.0, n=0.0;

    for(s=0.0; s/i<60; i++){
        do{
            cout<<"Inserisci un numero da 1 a 100: "<<endl;
            cin>>n;
        }while(n<1.0 || n>100.0);
        s=s+n;
    }

    cout<<"Hai superato il valore 60! "<<endl;
    cout<<"Hai inserito "<<i-1<<" numeri."<<endl;
    cout<<"Somma dei numeri inseriti: "<<s<<"."<<endl;
    cout<<"Media dei numeri inseriti: "<<s/i<<"."<<endl;

    system("pause");
    return 0;
}
