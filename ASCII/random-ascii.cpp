#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

intestazione(){
    char const as=201, ad=187, bs=200, bd=188, co=205, cv=186;
    /*
    as: alto-sinistra
    ad: alto-destra
    bs: basso-sinistra
    bd: basso-destra
    co: centro-orrizzontale
    cv: centro-verticale
    */

    cout<<as;
    for(int i=0; i<35; i++){
        cout<<co;
    }
    cout<<ad<<endl;
    cout<<cv<<"  Generatore random ASCII (0-255)  "<<cv<<endl;
    cout<<bs;
    for(int i=0; i<35; i++){
        cout<<co;
    }
    cout<<bd<<endl<<endl;
}

int main(){
    char cs;

    //Intestazione
    intestazione();

    // cs: carattere speciale
    // tabella ASCII: https://www.oppo.it/tabelle/tabella_ascii.html


    srand(time(NULL));
    cs=rand()%(255-1+1)+1;

    cout<<"(range: 0-255) Carattere speciale generato: \n\n--> "<<cs<<endl<<endl;

    system("pause");
    return 0;
}
