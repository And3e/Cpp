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
    for(int i=0; i<44; i++){
        cout<<co;
    }
    cout<<ad<<endl;
    cout<<cv<<"  Generatore random alfabeto con contatore  "<<cv<<endl;
    cout<<bs;
    for(int i=0; i<44; i++){
        cout<<co;
    }
    cout<<bd<<endl<<endl;
}

int main(){
    char cs;
    int n, cA=0, cE=0, cI=0, cO=0, cU=0, cC=0;

    //Intestazione
    intestazione();

    /*
    tabella ASCII: https://www.oppo.it/tabelle/tabella_ascii.html
    cs: carattere speciale
    cA: contatore 'a'
    cE: contatore 'e'
    cI: contatore 'i'
    cO: contatore 'o'
    cU: contatore 'u'
    cC: contatore consonanti
    */

    srand(time(NULL));

    cout<<"Inserire numero di lettere da generare: ";
    cin>>n;
    cout<<endl;

    for(int i=0; i<n; i++) {
        cs=rand()%(122-97+1)+97;
        cout<<cs<<" ";
        if(cs==0141) //0141 --> 'a' in ottale (base 8)
            cA++;
        else if(cs==0x65) //0x65 --> 'e' in esadecimale (base 16)
            cE++;
        else if(cs=='i')
            cI++;
        else if(cs=='o')
            cO++;
        else if(cs==117) //117 --> numero ASCII del carattere 'u'
            cU++;
        else
            cC++;
    }

    cout<<endl<<endl<<"Lettere 'a' generate: "<<cA<<endl;
    cout<<"Lettere 'e' generate: "<<cE<<endl;
    cout<<"Lettere 'i' generate: "<<cI<<endl;
    cout<<"Lettere 'o' generate: "<<cO<<endl;
    cout<<"Lettere 'u' generate: "<<cU<<endl;
    cout<<"Consonanti generate:  "<<cC<<endl<<endl;

    system("pause");
    return 0;
}
