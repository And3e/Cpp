#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int mi=0, ma=0;

    cout<<"Inserisci il numero minimo: ";
    cin>>mi;
    cout<<"Inserisci il numero massimo: ";
    cin>>ma;
    cout<<endl;

    do{
        for(mi; mi%5==0; mi++){
            cout<<mi<<" e' un divisore."<<endl;
        }
        mi++;
    }while(ma>mi);

    cout<<ma<<" e' un divisore."<<endl<<endl;

    system("pause");
    return 0;
}
