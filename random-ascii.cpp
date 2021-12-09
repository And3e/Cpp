#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    char cs;

    // cs: carattere speciale
    // tabella ASCII: https://www.oppo.it/tabelle/tabella_ascii.html


    srand(time(NULL));
    cs=rand()%(255-1+1)+1;

    cout<<"(range: 0-255) Carattere speciale generato: \n\n--> "<<cs<<endl<<endl;

    system("pause");
    return 0;
}
