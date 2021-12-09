//! nCasual = rand() % (valoreMax - valoreMin + 1) + valoreMin

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int casual, n, ri, rf;

    srand(time(NULL)); // Inizializzazione del generatore

    cout<<"Quanti numeri casauli vuoi generare?"<<endl;
    cin>>n;
    cout<<endl;

    cout<<"Inserire intervallo: "<<endl;
    cout<<"Inizio: (es. 1)"<<endl;
    cin>>ri;
    cout<<"Fine: (es. 10)"<<endl;
    cin>>rf;
    cout<<endl;

    for(int i=0; i<n; i++){
        casual=rand()%(rf-ri+1)+ri; // %r --> intervallo di numeri
        cout<<i+1<<") "<<casual<<endl;
    }

    cout<<" "<<endl;

    return 0;
}
