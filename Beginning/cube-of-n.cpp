#include <iostream>
#include <stdlib.h>

using namespace std;

int cubo(int c){ // effettua il cubo di n
	return c*c*c;
}

int verifica(int v){ // verifica se n � maggiore di 0. (Inutile --> serve solo a provare *1* e *2*)
	if (v>0) {
		return 1; // *1*
	}
	else {
		return 0; // *2*
	}
}

int main() {
    //Intestazione
    cout<<"*=============*"<<endl;
    cout<<"|  Cubo di n  |"<<endl;
    cout<<"*=============*"<<endl<<endl;

	int n, c, v;
	/*
	n: numero inserito dall'utente
	c: cubo del numero
	v: verifica del numero
	*/
	cout<<"Inserisci un numero: ";
	cin>>n;

	cout<<endl;
	v=verifica(n);
	if (v==1) {
		c=cubo(n);
		cout<<"In cubo del numero inserito e': "<<c<<endl;
	}
	else {
		cout<<"ATTENZIONE: Il numero inserito deve essere maggiore di 0!\n\n";
	}

	cout<<endl<<"Grazie per aver utilizzato questo programma!\n\n";

	system("pause");
	return 0;
}
