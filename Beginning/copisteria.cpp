/*
Si deve calcolare l'importo da pagare in copisteria per N fotocopie (N inserito in input), sapendo che:
    - fino a 30 fotocopie   = 0,20 per fotocopia
    - da 30 a 100 fotocopie = 0,10 per fotocopia
    - oltre 100 fotocopie   = 0,05 per fotocopia

Prevedere inoltre l'aumento di 1,30 euro se le fotocopie devono essere rilegate.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    double a = 0.20, b = 0.10, c = 0.05, n, s;
    string r;

    cout<<"Inserisci il numero di fotocopie: "<<endl;
    cin>>n;

    if(n<30){
        s=n*a;
        cout<<"L'importo da pagare e' pari a: "<<s<<" euro."<<endl;
        }
    else if(n<100){
        s=n*b;
        cout<<"L'importo da pagare e' pari a: "<<s<<" euro."<<endl;
        }
    else if(n>100){
        s=n*c;
        cout<<"L'importo da pagare e' pari a: "<<s<<" euro."<<endl;
        }



    cout<<"Vuole rilegare le fotocopie? (Si/No)"<<endl;
    cin>>r;

    if(r=="Si" || r=="si"){
        s=s+1.30;
        cout<<"Il nuovo importo da pagare e' pari a: "<<s<<" euro."<<endl;
        cout<<"Grazie e arrivederci!"<<endl;
        }

    else{
        cout<<"Grazie e arrivederci!"<<endl;
        }

    system("pause");
    return 0;
}
