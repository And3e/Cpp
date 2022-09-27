#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;

char const p=2, s=178, v=32, bns=15, ad=187, as=201, bd=188, bs=200, o=205, ve=186, us=175; // char caratteri speciali
/*
p: ascii player
s: ascii siepe
v: ascii vuoto
bns: ascii bonus
ad: alto-destra
as: alto-sinistra
bd: basso-destra
bs: basso-sinistra
o: orrizzontale
ve: verticale
us: uscita
*/

void SetColor(unsigned int color){ // colore testo
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, color);
    //google: 'codice colore c++'
}

void intro(bool r){
    char p=219, s=177;
    string u, x="     ", y="    ", z="   ";
    int ss=78, sv;
    /*
    p: pieno
    s: sfondo
    u: '████'
    p: '█'
    x: 5 spazi
    y: 4 spazi
    z: 3 spazi
    */

    if(r==true){
        cout<<"I";
        for(int i=0; i<(ss+6); i++){
            cout<<"-";
        }
        cout<<"I";
        for(int i=0; i<(ss+6); i++){
            cout<<"-";
        }
        cout<<"I\n\n";

        sv=ss-16;
        do{
            cout<<" ";
            sv--;
        }while(sv>0);
        cout<<"Ridimensiona la finestra basandoti sul 'righello'\n\n";

        sv=ss-9;
        do{
            cout<<" ";
            sv--;
        }while(sv>0);
        cout<<"Premi un tasto per iniziare! . . . ";
        system("pause>nul");
        system("cls");
    }
    else{
        u=p;
        u+=p;
        u+=p;
        u+=p;

        cout<<endl<<endl;

        cout<<"          "<<u<<p<<p<<s<<"  "<<u<<s<<x<<x<<y<<u<<s<<x<<y<<u<<u<<s<<x<<u<<u<<p<<p<<s<<y<<u<<p<<p<<s<<z<<u<<u<<s<<x<<u<<p<<p<<s<<y<<u<<s<<y<<p<<p<<p<<s<<z<<u<<u<<p<<p<<s<<x<<u<<u<<s<<endl;
        cout<<"           "<<u<<s<<z<<u<<s<<x<<x<<y<<u<<s<<y<<z<<u<<s<<z<<u<<s<<z<<u<<s<<z<<p<<p<<p<<s<<y<<u<<s<<y<<u<<s<<"  "<<p<<p<<p<<s<<y<<u<<s<<y<<u<<p<<p<<s<<z<<p<<p<<p<<s<<z<<z<<u<<s<<z<<z<<u<<s<<z<<u<<s<<endl;
        cout<<"           "<<u<<s<<z<<u<<s<<x<<x<<y<<u<<s<<y<<z<<u<<s<<z<<u<<s<<z<<u<<s<<z<<p<<p<<p<<s<<y<<u<<s<<y<<u<<s<<"  "<<p<<p<<p<<s<<y<<u<<s<<y<<p<<p<<p<<s<<p<<p<<p<<s<<"  "<<p<<p<<p<<s<<z<<z<<u<<s<<z<<z<<u<<s<<z<<u<<s<<endl;
        cout<<"           "<<u<<s<<z<<u<<s<<x<<x<<y<<u<<s<<y<<z<<u<<u<<u<<s<<z<<u<<u<<p<<s<<z<<z<<u<<s<<y<<u<<u<<s<<z<<z<<u<<s<<y<<p<<p<<p<<s<<" "<<p<<p<<p<<s<<" "<<p<<p<<p<<s<<z<<z<<u<<s<<z<<z<<u<<s<<z<<u<<s<<endl;
        cout<<"           "<<u<<s<<z<<u<<s<<x<<x<<y<<u<<s<<y<<z<<u<<s<<z<<u<<s<<z<<u<<s<<z<<p<<p<<p<<s<<y<<u<<s<<y<<u<<s<<u<<s<<x<<u<<s<<y<<p<<p<<p<<s<<"  "<<p<<p<<p<<s<<p<<p<<p<<s<<z<<z<<u<<s<<z<<z<<u<<s<<z<<u<<s<<endl;
        cout<<"           "<<u<<s<<z<<u<<u<<s<<x<<x<<u<<u<<s<<z<<u<<s<<z<<u<<s<<z<<u<<s<<z<<p<<p<<p<<s<<y<<u<<s<<y<<u<<s<<" "<<p<<p<<p<<s<<x<<u<<s<<y<<p<<p<<p<<s<<z<<u<<p<<p<<s<<z<<z<<u<<s<<z<<z<<u<<s<<z<<u<<s<<endl;
        cout<<"          "<<u<<p<<p<<s<<"  "<<u<<u<<s<<x<<x<<u<<u<<s<<z<<u<<s<<z<<u<<s<<z<<u<<u<<p<<p<<s<<y<<u<<p<<p<<s<<z<<u<<s<<" "<<u<<s<<z<<u<<p<<p<<s<<z<<p<<p<<p<<s<<y<<u<<s<<y<<z<<u<<s<<y<<y<<u<<u<<s<<endl;
        cout<<endl<<endl;
    }
}

void nextlevel(bool in){
    char p=219, s=32, v=186;
    string sp="                                        ", sp2="                                                  ";
    /*
    p: pieno
    v: verticale
    s: sfondo
    */
    cout<<endl<<endl<<endl<<endl;
    if(in==true){
        SetColor(2);
        cout<<sp<<p<<p<<ad<<s<<s<<s<<s<<s<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<ad<<s<<s<<s<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<ad;
        cout<<"       "<<p<<p<<p<<p<<p<<p<<ad<<s<<s<<p<<p<<p<<p<<p<<ad<<s<<s<<p<<p<<p<<p<<p<<p<<ad<<s<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<ad<<endl;
        cout<<sp<<p<<p<<v<<s<<s<<s<<s<<s<<p<<p<<as<<o<<o<<o<<o<<bd<<p<<p<<v<<s<<s<<s<<p<<p<<v<<p<<p<<as<<o<<o<<o<<o<<bd<<p<<p<<v;
        cout<<"       "<<p<<p<<as<<o<<o<<p<<p<<ad<<p<<p<<as<<o<<o<<p<<p<<ad<<p<<p<<p<<as<<o<<o<<o<<bd<<p<<p<<p<<as<<o<<o<<o<<bd<<p<<p<<as<<o<<o<<o<<o<<bd<<p<<p<<as<<o<<o<<p<<p<<ad<<endl;
        cout<<sp<<p<<p<<v<<s<<s<<s<<s<<s<<p<<p<<p<<p<<p<<ad<<s<<s<<bs<<p<<p<<ad<<s<<p<<p<<as<<bd<<p<<p<<p<<p<<p<<ad<<s<<s<<p<<p<<v;
        cout<<"       "<<p<<p<<p<<p<<p<<p<<as<<bd<<p<<p<<p<<p<<p<<p<<p<<v<<bs<<p<<p<<p<<p<<p<<ad<<s<<bs<<p<<p<<p<<p<<p<<ad<<s<<p<<p<<p<<p<<p<<ad<<s<<s<<p<<p<<v<<s<<s<<p<<p<<v<<endl;
        cout<<sp<<p<<p<<v<<s<<s<<s<<s<<s<<p<<p<<as<<o<<o<<bd<<s<<s<<s<<bs<<p<<p<<p<<p<<as<<bd<<s<<p<<p<<as<<o<<o<<bd<<s<<s<<p<<p<<v;
        cout<<"       "<<p<<p<<as<<o<<o<<o<<bd<<s<<p<<p<<as<<o<<o<<p<<p<<v<<s<<bs<<o<<o<<p<<p<<p<<ad<<s<<bs<<o<<o<<p<<p<<p<<ad<<p<<p<<as<<o<<o<<bd<<s<<s<<p<<p<<v<<s<<s<<p<<p<<v<<endl;
        cout<<sp<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<p<<ad<<s<<s<<bs<<p<<p<<as<<bd<<s<<s<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<p<<ad;
        cout<<"  "<<p<<p<<v<<s<<s<<s<<s<<s<<p<<p<<v<<s<<s<<p<<p<<v<<p<<p<<p<<p<<p<<p<<as<<bd<<p<<p<<p<<p<<p<<p<<as<<bd<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<as<<bd<<endl;
        cout<<sp<<bs<<o<<o<<o<<o<<o<<o<<bd<<bs<<o<<o<<o<<o<<o<<o<<bd<<s<<s<<s<<bs<<o<<bd<<s<<s<<s<<bs<<o<<o<<o<<o<<o<<o<<bd<<bs<<o<<o<<o<<o<<o<<o<<bd;
        cout<<"  "<<bs<<o<<bd<<s<<s<<s<<s<<s<<bs<<o<<bd<<s<<s<<bs<<o<<bd<<bs<<o<<o<<o<<o<<o<<bd<<s<<bs<<o<<o<<o<<o<<o<<bd<<s<<bs<<o<<o<<o<<o<<o<<o<<bd<<bs<<o<<o<<o<<o<<o<<bd<<s<<endl;
        SetColor(15);
    }
    else{
        SetColor(4);
        cout<<sp2<<s<<p<<p<<p<<p<<p<<p<<ad<<s<<s<<p<<p<<p<<p<<p<<ad<<s<<p<<p<<p<<ad<<s<<s<<s<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<p<<ad;
        cout<<"  "<<s<<p<<p<<p<<p<<p<<ad<<s<<p<<p<<ad<<s<<s<<s<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<p<<p<<p<<p<<ad<<s<<endl;
        cout<<sp2<<p<<p<<as<<o<<o<<o<<o<<bd<<s<<p<<p<<as<<o<<o<<p<<p<<ad<<p<<p<<p<<p<<ad<<s<<p<<p<<p<<p<<v<<p<<p<<as<<o<<o<<o<<o<<bd;
        cout<<"  "<<p<<p<<as<<o<<o<<p<<p<<ad<<p<<p<<v<<s<<s<<s<<p<<p<<v<<p<<p<<as<<o<<o<<o<<o<<bd<<p<<p<<as<<o<<o<<p<<p<<ad<<endl;
        cout<<sp2<<p<<p<<v<<s<<s<<p<<p<<ad<<s<<p<<p<<p<<p<<p<<p<<p<<v<<p<<p<<as<<p<<p<<p<<p<<as<<p<<p<<v<<p<<p<<p<<p<<p<<ad<<s<<s;
        cout<<"  "<<p<<p<<v<<s<<s<<p<<p<<v<<bs<<p<<p<<ad<<s<<p<<p<<as<<bd<<p<<p<<p<<p<<p<<ad<<s<<s<<p<<p<<p<<p<<p<<p<<as<<bd<<endl;
        cout<<sp2<<p<<p<<v<<s<<s<<bs<<p<<p<<ad<<p<<p<<as<<o<<o<<p<<p<<v<<p<<p<<v<<bs<<p<<p<<as<<bd<<p<<p<<v<<p<<p<<as<<o<<o<<bd<<s<<s;
        cout<<"  "<<p<<p<<v<<s<<s<<p<<p<<v<<s<<bs<<p<<p<<p<<p<<as<<bd<<s<<p<<p<<as<<o<<o<<bd<<s<<s<<p<<p<<as<<o<<o<<p<<p<<ad<<endl;
        cout<<sp2<<bs<<p<<p<<p<<p<<p<<p<<as<<bd<<p<<p<<v<<s<<s<<p<<p<<v<<p<<p<<v<<s<<bs<<o<<bd<<s<<p<<p<<v<<p<<p<<p<<p<<p<<p<<p<<ad;
        cout<<"  "<<bs<<p<<p<<p<<p<<p<<as<<bd<<s<<s<<bs<<p<<p<<as<<bd<<s<<s<<p<<p<<p<<p<<p<<p<<p<<ad<<p<<p<<v<<s<<s<<p<<p<<v<<endl;
        cout<<sp2<<s<<bs<<o<<o<<o<<o<<o<<bd<<s<<bs<<o<<bd<<s<<s<<bs<<o<<bd<<bs<<o<<bd<<s<<s<<s<<s<<s<<bs<<o<<bd<<bs<<o<<o<<o<<o<<o<<o<<bd;
        cout<<"  "<<s<<bs<<o<<o<<o<<o<<bd<<s<<s<<s<<s<<bs<<o<<bd<<s<<s<<s<<bs<<o<<o<<o<<o<<o<<o<<bd<<bs<<o<<bd<<s<<s<<bs<<o<<bd<<endl;
        SetColor(15);
    }
    cout<<endl<<endl<<endl;
}

void levelfinish(int &exit, bool &lc, int &lev){
    int fi, fl=0;

    do{
        system("cls");
        nextlevel(lc);
        if(lev!=3){
            if(fl==0){
                cout<<"\n\n                                                                            ";
                SetColor(240);
                cout<<">"<<"PROSSIMO LIVELLO"<<"<";
                SetColor(15);
                cout<<"\n\n                                                                            ";
                cout<<"  TORNA AL MENU'\n\n";
            }
            else{
                cout<<"\n\n                                                                            ";
                cout<<" PROSSIMO LIVELLO";
                cout<<"\n\n                                                                             ";
                SetColor(240);
                cout<<">"<<"TORNA AL MENU'"<<"<";
                SetColor(15);
                cout<<endl<<endl;
            }
        }
        else{
            cout<<"\n\n                                                                             ";
            SetColor(240);
            cout<<">"<<"TORNA AL MENU'"<<"<";
            SetColor(15);
        }

        fi=getch();

        if(fi=='w' || fi=='W'){
            fl--;
        }
        else if(fi=='s' || fi=='S'){
            fl++;
        }

        if(lev!=3){
        //collisione
            if(fl==-1){
                fl++;
            }
            else if(fl==2){
                fl--;
            }
        }
        else{
            //collisione
            if(fl==-1){
                fl++;
            }
            else if(fl==1){
                fl--;
            }
        }

        if(fi==13){
            if(lev!=3){
                if(fl==0){
                    exit=0;
                }
                else if(fl==1){
                    exit=1;
                }
            }
            else{
                if(fl==0){
                    exit=1;
                }
            }
        }
    }while(fi!=13);
    lc=false;
}

void outmenu(int &sel, int &music){
    string s="                                                                            ";

    // border
    if(sel==-1){
        sel++;
    }
    else if(sel==4){
        sel--;
    }

    //suggerimento
    SetColor(12);
    cout<<"                                                                      UTILIZZA W-A-S-D PER MUOVERTI!!\n";
    SetColor(15);
    cout<<"\n\n\n";

    // 1
    if(sel==0){
        SetColor(2);
    }
    cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<s<<ve;
    SetColor(15);
    cout<<"  AVVIA PARTITA  ";
    if(sel==0){
        SetColor(2);
    }
    cout<<ve<<endl<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    SetColor(15);

    // 2
    if(sel==1){
        SetColor(1);
    }
    cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<s<<ve;
    SetColor(15);
    cout<<"     LIVELLO     ";
    if(sel==1){
        SetColor(1);
    }
    cout<<ve<<endl<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    SetColor(15);

    // 3
    if(sel==2){
        SetColor(4);
    }
    cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<s<<ve;
    SetColor(15);
    cout<<"    MODALITA'    ";
    if(sel==2){
        SetColor(4);
    }
    cout<<ve<<endl<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    SetColor(15);

    // 4
    if(sel==3){
        SetColor(13);
    }
    cout<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<s<<ve;
    SetColor(15);
    cout<<"  IMPOSTAZIONI   ";
    if(sel==3){
        SetColor(13);
    }
    cout<<ve<<endl<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    SetColor(15);
}

void enter(int &sel, int &mod, int &lev, bool &startg, int &music, int &sound, int &theme, int posmen[]){
    string s="   ", s2="    ";
    string sr1="                                                                    ";
    string sr2="                                                                         ";
    string sr3="                                                               ";
    char fs=16, fd=17, in, act=0, act2=0, es=0;

    if(sel==0){ // enter
        startg=true;
    }
    else if(sel==1){ // livello
        act=posmen[0];
        mov1:
            system("cls");
            cout<<"\n\n              "<<sr1;
            SetColor(31);
            cout<<"LIVELLO\n";
            SetColor(15);
            cout<<sr1<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<sr1<<ve<<s;

            if(act==0 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[1]";
                SetColor(15);
                cout<<fd;
                cout<<s<<s;
            }
            else{
                cout<<" [1]";
                cout<<s2<<s;
            }
            SetColor(15);

            if(act==1 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[2]";
                SetColor(15);
                cout<<fd;
                cout<<s<<s;
            }
            else{
                cout<<" [2]";
                cout<<s2<<s;
            }
            SetColor(15);

            if(act==2 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[3]";
                SetColor(15);
                cout<<fd;
                cout<<s;
            }
            else{
                cout<<" [3]";
                cout<<s2;
            }
            SetColor(15);

            cout<<ve<<endl<<sr1<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl<<endl;

            SetColor(15);
            cout<<sr1<<"         ";
            SetColor(10);
            cout<<"livello 1: facile";
            SetColor(15);
            cout<<endl<<sr1<<"         ";
            SetColor(10);
            cout<<"livello 2: medio";
            SetColor(15);
            cout<<endl<<sr1<<"        ";
            SetColor(10);
            cout<<"livello 3: difficile";
            SetColor(15);
            cout<<endl<<endl<<endl;
            if(es==1){
                cout<<"          "<<sr1;
                cout<<fs;
                SetColor(240);
                cout<<"TORNA AL MENU'";
                SetColor(15);
                cout<<fd;
            }
            else{
                cout<<"           "<<sr1;
                cout<<"TORNA AL MENU'";
            }
        cout<<endl<<endl<<endl;
        in1:
            in=getch();
            if(in<97 && in>13){
                in+=32;
            }

        //input
        if(in=='w'){
            es--;
        }
        if(in=='a'){
            act--;
        }
        if(in=='s'){
            es++;
        }
        else if(in=='d'){
            act++;
        }
        // collisione
        if(act==-1){
            act++;
            goto in1;
        }
        else if(act==3){
            act--;
            goto in1;
        }
        else if(es==-1){
            es++;
            goto in1;
        }
        else if(es==2){
            es--;
            goto in1;
        }

        if(in==13){
            if(es==0){
                if(act==0){
                    posmen[0]=0;
                }
                else if(act==1){
                    posmen[0]=1;
                }
                else if(act==2){
                    posmen[0]=2;
                }
            }
            goto ok1;
        }
        goto mov1;

        ok1:
            if(es==0){
                if(act==0){
                    lev=1;
                }
                if(act==1){
                    lev=2;
                }
                if(act==2){
                    lev=3;
                }
            }
            else if(es==1){
                goto fine;
            }
    }
    else if(sel==2){ // modalita'
        act=posmen[1];
        mov2:
            system("cls");
            cout<<"\n\n             "<<sr1;
            SetColor(79);
            cout<<"MODALITA'\n";
            SetColor(15);
            cout<<sr2<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<sr2<<ve<<s;

            if(act==0 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[1]";
                SetColor(15);
                cout<<fd;
                cout<<s<<s;
            }
            else{
                cout<<" [1]";
                cout<<s2<<s;
            }
            SetColor(15);

            if(act==1 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[2]";
                SetColor(15);
                cout<<fd;
                cout<<s;
            }
            else{
                cout<<" [2] ";
                cout<<s;
            }

            SetColor(15);

            cout<<ve<<endl<<sr2<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl<<endl;

            SetColor(15);
            cout<<sr1<<"    ";
            SetColor(10);
            cout<<"1 facile: labirinto a tempo";
            SetColor(15);
            cout<<endl<<"                                                          ";
            SetColor(10);
            cout<<"2 difficile: labirinto a tempo con nemici e muri mobili";
            SetColor(15);
            cout<<endl<<endl<<endl;
            if(es==1){
                cout<<"         "<<sr1;
                cout<<fs;
                SetColor(240);
                cout<<"TORNA AL MENU'";
                SetColor(15);
                cout<<fd;
            }
            else{
                cout<<"          "<<sr1;
                cout<<"TORNA AL MENU'";
            }
        cout<<endl<<endl<<endl;
        in2:
            in=getch();
            if(in<97 && in>13){
                in+=32;
            }

        //input
        if(in=='w'){
            es--;
        }
        if(in=='a'){
            act--;
        }
        if(in=='s'){
            es++;
        }
        else if(in=='d'){
            act++;
        }
        // collisione
        if(act==-1){
            act++;
            goto in2;
        }
        else if(act==2){
            act--;
            goto in2;
        }
        else if(es==-1){
            es++;
            goto in2;
        }
        else if(es==2){
            es--;
            goto in2;
        }
        if(in==13){
            if(es==0){
                if(act==0){
                    posmen[1]=0;
                }
                else if(act==1){
                    posmen[1]=1;
                }
            }
            goto ok2;
        }
        goto mov2;

        ok2:
            if(es==0){
                if(act==0){
                    mod=0;
                }
                if(act==1){
                    mod=1;
                }
            }
            else if(es==1){
                goto fine;
            }
    }
    else if(sel==3){ // impostazioni
        act=posmen[2];
        act2=posmen[3];
        mov3:
            system("cls");
            //! musica
            cout<<"\n\n              "<<sr1;
            SetColor(223);
            cout<<"MUSICA\n";
            SetColor(15);
            cout<<sr2<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<sr2<<ve<<s;

            if(act==0 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[S]";
                SetColor(15);
                cout<<fd;
                cout<<s<<s;
            }
            else{
                cout<<" [S]";
                cout<<s2<<s;
            }
            SetColor(15);

            if(act==1 && es==0){
                cout<<fs;
                SetColor(240);
                cout<<"[N]";
                SetColor(15);
                cout<<fd;
                cout<<s;
            }
            else{
                cout<<" [N] ";
                cout<<s;
            }

            SetColor(15);

            cout<<ve<<endl<<sr2<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl<<endl;

            cout<<sr1<<"        ";
            SetColor(10);
            cout<<"musica: S/N (Si o No)";
            SetColor(15);
            cout<<endl<<sr1<<"           ";
            SetColor(10);
            cout<<"default: S (Si)";
            SetColor(15);
            //! effetti sonori
            cout<<endl<<endl<<endl;
            cout<<"\n\n          "<<sr1;
            SetColor(223);
            cout<<"EFFETTI SONORI\n";
            SetColor(15);
            cout<<sr2<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl<<sr2<<ve<<s;

            if(act2==0 && es==1){
                cout<<fs;
                SetColor(240);
                cout<<"[S]";
                SetColor(15);
                cout<<fd;
                cout<<s<<s;
            }
            else{
                cout<<" [S]";
                cout<<s2<<s;
            }
            SetColor(15);

            if(act2==1 && es==1){
                cout<<fs;
                SetColor(240);
                cout<<"[N]";
                SetColor(15);
                cout<<fd;
                cout<<s;
            }
            else{
                cout<<" [N] ";
                cout<<s;
            }

            SetColor(15);
            cout<<ve<<endl<<sr2<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl<<endl;

            cout<<sr1<<"    ";
            SetColor(10);
            cout<<"effetti sonori: S/N (Si o No)";
            SetColor(15);
            cout<<endl<<sr1<<"           ";
            SetColor(10);
            cout<<"default: S (Si)";
            SetColor(15);
            cout<<endl<<endl<<endl;
            if(es==2){
                cout<<"         "<<sr1;
                cout<<fs;
                SetColor(240);
                cout<<"TORNA AL MENU'";
                SetColor(15);
                cout<<fd;
            }
            else{
                cout<<"          "<<sr1;
                cout<<"TORNA AL MENU'";
            }
        cout<<endl<<endl<<endl;
        in3:
            in=getch();
            if(in<97 && in>13){
                in+=32;
            }

        //input
        if(in=='w'){
            es--;
        }
        else if(in=='s'){
            es++;
        }
        if(es==1){
            if(in=='a'){
                act2--;
            }
            else if(in=='d'){
                act2++;
            }
        }
        else{
            if(in=='a'){
                act--;
            }
            else if(in=='d'){
                act++;
            }
        }

        // collisione
        if(act==-1){
            act++;
            goto in3;
        }
        else if(act==2){
            act--;
            goto in3;
        }
        else if(act2==-1){
            act2++;
            goto in3;
        }
        else if(act2==2){
            act2--;
            goto in3;
        }
        else if(es==-1){
            es++;
            goto in3;
        }
        else if(es==3){
            es--;
            goto in3;
        }

        if(in==13){
            if(es==0){
                if(act==0){
                    posmen[2]=0;
                }
                else{
                    posmen[2]=1;
                }
            }
            else if(es==1){
                if(act2==0){
                    posmen[3]=0;
                }
                else{
                    posmen[3]=1;
                }
            }
            goto ok3;
        }
        goto mov3;

        ok3:
            if(es==0){
                if(act==0){
                    music=1;
                    music=1;
                    sndPlaySound("music&sounds/menu.wav", SND_ASYNC | SND_LOOP);
                }
                if(act==1){
                    music=0;
                    PlaySound(NULL, 0, 0);
                }
            }
            else if(es==1){
                if(act2==0){
                    sound=1;
                }
                if(act2==1){
                    sound=0;
                }
            }
            else if(es==2){
                goto fine;
            }
    }

    fine:
        system("cls");
        outmenu(sel, music);
}

void menu(int &mod, int &lev, int &music, int &sound, int &theme, int posmen[]){
    int sel=0;
    char in;
    bool startg=false, r=false;

    if(music==1){
        sndPlaySound("music&sounds/menu.wav", SND_ASYNC | SND_LOOP);
    }

    movmen:
        system("cls");
        intro(r);
        outmenu(sel, music);
    movIN:
        in=getch();
        if(in<97 && in>13){
            in+=32;
        }

    if(in==13){
        enter(sel, mod, lev, startg, music, sound, theme, posmen);
        if(startg==true){
            goto enter;
        }
        else{
            goto movmen;
        }
    }

    if(in=='w'){
        sel--;
    }
    else if(in=='a'){
        goto movIN;
    }
    else if(in=='s'){
        sel++;
    }
    else if(in=='d'){
        goto movIN;
    }
    // collisione
    if(sel==-1){
        sel++;
        goto movIN;
    }
    else if(sel==4){
        sel--;
        goto movIN;
    }
    goto movmen;

    enter:
        system("cls");
}

void lab1(int x, int y, bool &lc, int &up, int &down, int &right, int &left, int tempo, int mod){
    int r=15, c=17, i=0, k=0, a=0;
    /*
    r: righe
    c: colonne
    x: coordinate x
    y: coordinate y
    i: contatore righe
    k: contatore colonne
    in: 'input' per controllo collisione
    lc: level complete
    */

    lc=false;

    char l[r][c]={
        {v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v},
        {v,s,v,s,v,s,v,v,v,s,v,v,v,v,v,s,v},
        {v,s,v,s,v,s,s,s,v,s,v,s,v,s,s,s,s},
        {v,s,v,s,v,v,v,s,v,s,v,s,v,v,v,v,v},
        {v,s,v,s,s,s,v,s,v,s,s,s,v,s,s,s,s},
        {v,s,v,v,v,s,v,s,v,v,v,v,v,s,v,s,v},
        {v,s,v,s,v,v,v,s,v,s,v,s,s,s,v,s,v},
        {v,s,v,s,v,s,v,s,v,s,v,s,v,v,v,s,v},
        {v,s,v,s,v,s,v,s,s,s,v,s,s,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,s,v,v,v,s,v,s,v},
        {s,s,s,s,v,s,s,s,v,s,s,s,v,s,v,s,v},
        {v,v,v,v,v,v,v,s,v,v,v,v,v,v,v,s,v},
        {s,s,s,s,s,s,v,s,v,s,s,s,s,s,s,s,v},
        {v,s,v,v,v,v,v,s,v,v,v,v,v,v,v,s,v},
        {v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v},
        };

    cout<<endl<<endl;

    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            if(k==0){ // stampa spazio all'inizio
                cout<<"                                                            ";
            }
            // cout<<i<<" "<<k<<"; ";
            if(l[i][k]==s){ // se siepe --> verde
                if(mod==1){
                    if(tempo>40 || tempo<35){
                        SetColor(32);
                    }
                    else{
                        SetColor(0);
                    }
                }
                else{
                    if(tempo>30){
                        SetColor(32);
                    }
                }
                if(tempo<=30 && tempo>15){
                    SetColor(96);
                }
                else if(tempo<=15){
                    if(tempo%2!=0){
                        SetColor(64);
                    }
                    else{
                        SetColor(0);
                    }
                }
            }

            if(i==y && k==x){ // se stampa = a x e y --> stampa faccina
                SetColor(14);
                cout<<" "<<p<<" ";
            }
            else if(i==3 && k==16){
                cout<<" "<<us<<" ";
            }
            else{ // altrimenti stampa labirinto
                cout<<l[i][k]<<l[i][k]<<l[i][k];
            }
            SetColor(15);
            if(k==c-1){ // stampa a capo alla fine di una riga
                cout<<endl;
            }
            if(y==3 && x==16){ // uscita dal livello
                lc=true;
            }
        }
        k=0;
    }

    // previsione collisioni
    // su
    y--;
    if(l[y][x]==s){
        up=1;
    }
    else{
        up=0;
    }
    y++;

    // giu
    y++;
    if(l[y][x]==s){
        down=1;
    }
    else{
        down=0;
    }
    y--;

    // destra
    x++;
    if(l[y][x]==s){
        right=1;
    }
    else{
        right=0;
    }
    x--;

    // sinistra
    x--;
    if(l[y][x]==s){
        left=1;
    }
    else if(y==11 && x==-1){
        left=1;
    }
    else{
        left=0;
    }
    x++;
}

void lab2(int &x, int &y, bool &lc, int &up, int &down, int &right, int &left, int tempo, int mod){
    int r=30, c=32, i=0, k=0;
    /*
    r: righe
    c: colonne
    x: coordinate x
    y: coordinate y
    i: contatore righe
    k: contatore colonne
    in: 'input' per controllo collisione
    lc: level complete
    */

    lc=false;

    char l[r][c]={
        {v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v},
        {v,s,v,v,v,v,v,v,v,s,v,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v},
        {s,s,s,s,s,s,v,s,v,s,s,s,v,s,s,s,s,s,s,s,v,s,s,s,s,s,v,s,s,s,s,v},
        {v,v,v,v,v,s,v,s,v,s,v,v,v,s,v,s,v,v,v,s,s,s,v,v,v,v,v,v,v,v,s,v},
        {s,s,s,s,v,v,v,s,v,v,v,s,v,s,v,s,v,s,v,v,v,v,v,s,s,s,s,s,s,v,s,v}, // 5
        {v,s,v,s,v,s,v,s,s,s,s,s,v,s,v,s,v,s,s,s,s,s,s,s,v,v,v,v,v,v,s,v},
        {v,s,v,s,v,s,v,s,v,v,v,v,v,s,v,v,v,v,v,v,v,s,v,v,v,s,s,s,s,v,s,v},
        {v,s,v,v,v,s,s,s,v,s,s,s,s,s,v,s,s,s,s,s,s,s,v,s,s,s,s,s,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,s,v,v,v,v,v,s,v,v,v,v,v,v,v,s,v,v,v,v,v,v,s,v},
        {v,s,v,s,v,s,v,s,s,s,s,s,s,s,v,s,s,s,s,s,v,s,s,s,s,s,s,s,s,v,s,v}, // 10
        {v,s,s,s,v,s,v,s,v,v,v,v,v,s,v,v,v,v,v,s,v,v,v,s,v,v,v,v,v,v,s,v},
        {v,s,v,s,v,s,v,s,v,s,s,s,v,s,v,s,s,s,v,s,s,s,v,s,s,s,s,v,s,s,s,v},
        {v,s,v,s,s,s,v,v,v,s,v,v,v,s,v,s,v,s,v,s,v,s,v,s,v,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,s,s,s,v,s,s,s,v,s,v,s,v,s,v,s,v,s,v,s,s,s,s,v,s,v},
        {v,s,v,v,v,v,v,s,v,s,v,s,v,v,v,s,v,s,v,s,v,s,v,v,v,v,v,v,s,v,s,v}, //15
        {v,s,v,s,s,s,v,s,v,s,v,s,s,s,v,s,v,s,v,s,v,s,v,s,s,s,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,s,v,s,v,v,v,s,v,s,v,v,v,s,v,s,v,s,v,v,v,v,s,v,s,v},
        {v,s,s,s,v,s,s,s,v,s,s,s,v,s,s,s,v,s,s,s,v,s,s,s,s,s,s,v,s,v,s,v},
        {v,s,v,v,v,v,v,v,v,v,v,s,v,v,v,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,s,v},
        {v,s,s,s,s,s,s,s,s,s,v,s,v,s,s,s,v,s,s,s,s,s,s,v,s,s,s,s,s,v,s,v}, //20
        {v,s,v,s,v,v,v,v,v,s,v,s,v,s,v,s,v,v,v,v,s,v,s,v,v,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,s,s,s,s,v,s,v,s,v,s,s,s,s,s,s,v,s,s,s,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,v,v,v,v,s,v,v,v,v,v,v,s,v,s,v,v,v,s,v,s,v,s,v},
        {v,s,v,v,v,s,v,s,s,s,v,s,s,s,v,s,v,s,s,v,s,v,s,v,s,s,s,v,s,v,s,v},
        {v,s,v,s,s,s,v,s,v,s,v,s,v,s,v,s,v,v,s,v,v,v,v,v,s,v,s,v,s,v,s,v}, // 25
        {v,s,v,s,v,v,v,s,v,s,s,s,v,s,v,s,s,v,s,s,s,s,s,v,s,v,v,v,s,s,s,s},
        {v,s,v,s,v,s,s,s,v,v,v,v,v,s,v,v,s,v,v,v,v,v,s,v,v,v,s,v,v,v,v,v},
        {v,s,v,s,v,s,v,s,s,s,s,s,v,s,s,v,s,v,s,s,s,s,s,v,s,s,s,s,s,v,s,s},
        {v,s,v,v,v,s,v,v,v,v,v,v,v,v,v,v,s,v,s,v,v,v,v,v,s,v,v,v,v,v,s,v},
        {v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v}, // 30
        };

    cout<<endl;
    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            if(k==0){ // stampa spazio all'inizio
                cout<<"                                     ";
            }
            // cout<<i<<" "<<k<<"; ";
            if(l[i][k]==s){ // se siepe --> verde
                if(mod==1){
                    if((tempo>90 || tempo<80) && (tempo>50 || tempo<40)){
                        SetColor(32);
                    }
                    else{
                        SetColor(0);
                    }
                }
                else{
                    if(tempo>30){
                        SetColor(32);
                    }
                }
                if(tempo<=30 && tempo>15){
                    SetColor(96);
                }
                else if(tempo<=15){
                    if(tempo%2!=0){
                        SetColor(64);
                    }
                    else{
                        SetColor(0);
                    }
                }
            }

            if(i==y && k==x){ // se stampa = a x e y --> stampa faccina
                SetColor(14);
                cout<<" "<<p<<" ";
            }
            else if(i==26 && k==31){ // sole indicante l'uscita
                cout<<" "<<us<<" ";
            }
            else{ // altrimenti stampa labirinto
                cout<<l[i][k]<<l[i][k]<<l[i][k];
            }
            SetColor(15);
            if(k==c-1){ // stampa a capo alla fine di una riga
                cout<<endl;
            }
            if(y==26 && x==31){ // uscita dal livello
                lc=true;
            }
        }
        k=0;
    }

    // previsione collisioni
    // su
    y--;
    if(l[y][x]==s){
        up=1;
    }
    else{
        up=0;
    }
    y++;

    // giu
    y++;
    if(l[y][x]==s){
        down=1;
    }
    else{
        down=0;
    }
    y--;

    // destra
    x++;
    if(l[y][x]==s){
        right=1;
    }
    else{
        right=0;
    }
    x--;

    // sinistra
    x--;
    if(l[y][x]==s){
        left=1;
    }
    else if(x==-1 && y==3){
        left=1;
    }
    else{
        left=0;
    }
    x++;
}

void lab3(int &x, int &y, bool &lc, bool &ba1, bool &ba2, bool &ba3, int &up, int &down, int &right, int &left, int tempo, int mod){
    int r=45, c=47, i=0, k=0;
    char ba[3]={'1', '2', '3'};
    /*
    r: righe
    c: colonne
    x: coordinate x
    y: coordinate y
    i: contatore righe
    k: contatore colonne
    in: 'input' per controllo collisione
    lc: level complete
    ba: barriera
    ba1, ba2, ba3: stato delle barriere (aperte o chiuse)
    */

    lc=false;

    char l[r][c]={
        {v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v},
        {v,s,v,v,v,s,s,v,v,v,s,v,s,v,v,v,s,s,s,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v,v,v,s,v,v,v,s,s,v},
        {v,s,v,s,v,v,v,v,s,s,s,v,s,v,s,v,v,v,s,v,s,s,s,s,v,s,s,v,s,s,s,s,s,s,s,v,v,v,s,v,v,v,s,v,v,s,v},
        {v,s,s,s,v,s,s,v,s,v,s,v,s,v,s,s,v,s,s,v,s,v,s,s,v,s,s,v,v,v,v,s,v,v,s,s,s,s,s,s,s,s,s,s,v,s,v},
        {v,s,v,v,v,s,v,v,v,v,s,v,v,v,v,s,v,v,v,v,s,v,v,v,v,v,s,s,s,s,v,s,s,v,v,v,v,v,v,v,v,v,v,s,v,s,v}, // 5
        {v,s,v,s,s,s,v,s,s,s,s,s,s,s,v,s,s,s,s,s,s,s,s,s,s,v,v,v,v,s,v,v,s,s,s,s,s,s,s,s,s,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,v,v,s,v,v,v,s,v,v,v,v,s,v,v,v,s,v,s,s,v,s,s,v,v,v,v,v,s,s,v,v,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,s,s,s,v,s,v,s,s,s,v,s,s,v,s,v,s,v,s,v,s,v,v,v,s,s,v,s,s,s,s,v,v,s,v,v,v,s,v,s,v},
        {v,s,v,s,v,v,v,v,v,s,v,v,v,s,v,s,v,v,s,v,s,v,s,v,s,v,s,v,s,s,s,v,v,v,s,v,s,v,s,s,s,s,v,s,v,s,v},
        {v,s,v,s,v,s,s,s,s,s,s,s,s,s,v,s,s,v,s,v,s,v,s,v,s,v,s,v,s,v,s,v,s,v,s,v,v,v,v,v,v,v,v,s,v,s,v}, // 10
        {v,s,v,s,v,v,v,v,v,s,v,v,v,v,v,v,v,v,s,v,v,v,s,v,s,v,s,v,s,v,s,v,s,v,s,s,s,s,v,s,s,s,s,s,v,s,v},
        {v,s,v,s,s,s,s,s,v,s,v,s,s,s,s,s,s,s,s,s,s,s,s,v,s,v,s,v,s,v,s,v,s,v,v,v,s,v,v,v,s,s,s,s,v,s,v},
        {v,s,v,v,s,v,v,v,v,s,v,s,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v,s,v,s,v,s,v,s,v,v,s,v,v,v,s,v},
        {s,s,s,v,s,v,s,s,s,s,v,s,s,s,s,s,s,s,v,s,s,s,s,s,s,s,s,v,s,s,s,s,s,v,s,v,s,v,s,s,s,s,s,s,s,s,s},
        {v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,ba[0],ba[1],ba[2],v,v,v}, // 15
        {s,s,s,s,v,s,s,s,s,s,s,s,s,s,s,s,s,s,v,s,s,s,s,s,s,s,s,v,s,s,s,s,s,s,s,s,s,s,s,s,v,s,s,s,s,s,s},
        {v,s,v,s,v,s,v,v,v,v,v,v,v,v,v,v,v,s,v,v,v,s,v,v,v,v,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,s,v,v,v,s,v},
        {v,s,v,s,v,s,s,s,s,s,s,v,s,s,s,s,v,s,v,s,v,s,v,s,v,s,s,v,s,s,s,s,s,s,s,s,s,s,s,s,v,s,s,s,v,s,v},
        {v,s,v,s,v,v,v,v,v,v,v,v,v,s,v,v,v,s,v,s,v,v,v,s,v,v,s,v,v,v,v,s,v,s,v,v,v,v,v,s,v,s,v,v,v,s,v},
        {v,s,v,s,s,s,v,s,v,s,v,s,v,s,v,s,s,s,v,s,s,s,s,s,s,s,s,s,s,s,v,s,v,v,v,s,s,s,v,s,v,s,v,s,s,s,v}, // 20
        {v,s,v,v,v,v,v,s,v,s,v,s,v,s,v,s,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v,v,v,s,v,s,v,s,v,v,v,s,v,v,v,s,v},
        {v,s,v,s,s,s,s,s,v,s,v,s,v,s,v,v,v,s,s,s,s,s,s,s,s,s,s,s,v,s,s,s,s,s,v,s,v,s,s,s,v,s,s,s,v,s,v},
        {v,s,v,s,v,v,v,s,v,s,s,s,v,s,s,s,v,s,v,s,v,v,v,s,v,v,v,s,v,s,v,v,v,s,v,s,v,v,s,v,v,s,v,v,v,s,v},
        {v,s,v,s,v,s,v,s,v,v,v,v,v,v,v,v,v,s,v,s,v,s,v,s,v,s,v,s,v,s,v,s,s,s,v,s,s,v,s,v,s,s,v,s,s,s,v},
        {v,s,v,s,v,s,v,s,v,s,s,s,s,s,s,s,s,s,v,s,v,s,v,s,s,s,v,s,v,s,v,s,v,v,v,v,s,v,s,v,v,s,v,v,v,s,v}, // 25
        {v,s,v,s,v,s,v,s,v,v,v,v,v,s,v,v,v,v,v,s,v,s,v,v,v,v,v,s,v,s,v,s,s,s,s,v,s,v,s,s,v,s,s,s,v,s,v},
        {v,s,v,s,v,s,v,s,s,s,s,s,v,s,s,v,s,s,s,s,v,s,s,s,s,s,s,s,v,s,v,v,v,v,s,v,s,v,v,v,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,v,v,v,v,s,s,v,v,v,s,v,v,v,v,v,v,v,v,v,v,s,s,s,s,v,s,v,s,s,s,s,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,s,s,s,s,s,s,v,v,v,v,s,v,v,v,s,v,s,s,s,s,s,s,s,s,v,v,v,v,v,v,v,s,v,v,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,v,v,s,v,s,s,s,s,s,s,s,s,v,v,v,v,v,v,v,v,v,v,s,s,s,s,s,v,v,v,s,v,v,v,s,v,s,v}, // 30
        {v,s,v,s,v,v,v,s,s,s,s,s,v,v,v,v,v,v,v,v,s,v,s,v,s,s,s,s,s,s,s,s,v,s,v,s,s,s,v,s,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,s,s,v,v,v,s,s,s,s,s,v,s,s,s,s,v,s,v,v,v,v,v,v,v,v,v,v,s,v,s,v,s,v,s,v,s,v,s,v,s,v},
        {v,s,v,s,v,v,v,s,v,s,v,v,v,v,v,v,v,v,v,v,v,v,s,s,s,s,s,s,s,s,s,s,v,s,v,s,v,s,v,s,s,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,s,v,s,v,s,v,s,s,s,s,s,s,v,v,v,v,v,v,s,v,v,v,v,v,s,v,s,v,s,v,v,v,s,v,s,v,s,v},
        {v,s,v,s,s,s,s,s,s,s,v,s,v,s,v,s,s,v,v,v,s,v,s,s,s,s,v,s,v,s,s,s,s,s,v,v,v,s,s,s,v,s,v,s,v,s,v}, // 35
        {v,s,v,s,v,v,v,v,v,v,v,s,v,s,v,v,v,v,s,v,s,v,s,v,v,s,v,v,v,v,v,v,v,v,v,s,v,v,v,s,v,v,v,v,v,s,v},
        {v,s,v,s,v,s,s,s,s,s,s,s,v,s,s,s,s,s,s,v,s,v,s,v,s,s,s,s,s,s,s,s,s,s,v,s,s,s,v,s,v,s,s,s,v,s,v},
        {v,s,v,s,v,s,v,v,v,v,v,v,v,s,v,v,v,v,s,v,s,v,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,s,s,s,s,s,s,s,s,s,s,v,s,v,s,s,s,s,s,s,s,v,s,v,s,s,s,s,s,s,s,s,s,s,v,s,v,s,v,s,v},
        {v,s,v,s,v,s,v,v,s,v,v,v,v,v,v,v,v,v,s,v,s,v,v,v,v,v,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,s,v,s,v,s,v}, // 40
        {v,s,v,s,v,s,s,v,s,s,s,s,s,s,v,s,s,s,s,v,s,s,s,s,v,s,s,s,s,v,s,s,s,s,v,s,s,s,s,s,s,s,v,s,v,s,v},
        {v,s,v,s,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v,v,v,v,v,v,v,v,v,s,v,v,v,v,v,v,s,v,v,v,v,s,v},
        {v,s,v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v,s,s,s,s,s,v,s,s,s,v,s,s,s,s,v,s,v,s,s,s,s,v,s,v},
        {v,s,v,v,v,s,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,s,v,s,v,v,v,v,v,v,v,v,s,v,v,v,v,v,v,s,v},
        {v,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,s,v}, // 45
        };

    cout<<endl;
    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            if(k==0){ // stampa spazio all'inizio
                cout<<"               ";
            }
            if(l[i][k]==s){ // se siepe verde
                if(mod==1){
                    if((tempo>280 || tempo<275) && (tempo>200 || tempo<190) && (tempo>140 || tempo<120)){
                        SetColor(32);
                    }
                    else{
                        SetColor(0);
                    }
                }
                else{
                    if(tempo>30){
                        SetColor(32);
                    }
                }
                if(tempo<=30 && tempo>15){
                    SetColor(96);
                }
                else if(tempo<=15){
                    if(tempo%2!=0){
                        SetColor(64);
                    }
                    else{
                        SetColor(0);
                    }
                }
            }
            else if(l[i][k]==ba[0]){ // se barriera --> rosso
                if(ba1==false){
                    SetColor(64);
                }
            }
            else if(l[i][k]==ba[1]){
                if(ba2==false){
                    SetColor(64);
                }
            }
            else if(l[i][k]==ba[2]){
                if(ba3==false){
                    SetColor(64);
                }
            }
            else if(i==2 && k==2){
                SetColor(255);
            }
            else if(i==43 && k==44){
                SetColor(255);
            }

            if(i==y && k==x){ // se stampa = a x e y --> stampa player (faccina)
                if(i==43 && k==6){
                    if(ba1==true){
                        goto faccina;
                    }
                    cout<<"[";
                    SetColor(14);
                    cout<<p;
                    SetColor(15);
                    cout<<"]";
                    ba1=true;
                }
                else if(i==1 && k==22){
                    if(ba2==true){
                        goto faccina;
                    }
                    cout<<"[";
                    SetColor(14);
                    cout<<p;
                    SetColor(15);
                    cout<<"]";
                    ba2=true;
                }
                else if(i==23 && k==24){
                    if(ba3==true){
                        goto faccina;
                    }
                    cout<<"[";
                    SetColor(14);
                    cout<<p;
                    SetColor(15);
                    cout<<"]";
                    ba3=true;
                }
                else if(i==2 && k==2){
                    SetColor(241);
                    cout<<" "<<p<<" ";
                    SetColor(15);
                }
                else if(i==43 && k==44){
                    SetColor(241);
                    cout<<" "<<p<<" ";
                    SetColor(15);
                }
                else{
                    faccina:
                        SetColor(14);
                        cout<<" "<<p<<" ";
                        SetColor(15);
                }
            }
            else{ // altrimenti stampa labirinto (con varianti)
                if(l[i][k]==ba[0]){
                    if(ba1==false){
                        cout<<"["<<l[i][k]<<"]";
                    }
                    else{
                        cout<<"   ";
                    }
                }
                else if(l[i][k]==ba[1]){
                    if(ba2==false){
                        cout<<"["<<l[i][k]<<"]";
                    }
                    else{
                        cout<<"   ";
                    }
                }
                else if(l[i][k]==ba[2]){
                    if(ba3==false){
                        cout<<"["<<l[i][k]<<"]";
                    }
                    else{
                        cout<<"   ";
                    }
                }
                else if(i==43 && k==6){
                    if(ba1==false){
                        cout<<"[1]";
                    }
                    else{
                    cout<<l[i][k]<<l[i][k]<<l[i][k];
                    }
                }
                else if(i==1 && k==22){
                    if(ba2==false){
                        cout<<"[2]";
                    }
                    else{
                    cout<<l[i][k]<<l[i][k]<<l[i][k];
                    }
                }
                else if(i==23 && k==24){
                    if(ba3==false){
                        cout<<"[3]";
                    }
                    else{
                    cout<<l[i][k]<<l[i][k]<<l[i][k];
                    }
                }
                else if(i==14 && k==46){
                    cout<<" "<<us<<" ";
                }
                else{
                    cout<<l[i][k]<<l[i][k]<<l[i][k];
                }
            }
            SetColor(15);
            if(k==c-1){ // stampa a capo alla fine di una riga
                cout<<endl;
            }
            if(y==14 && x==46){ // uscita dal livello
                lc=true;
            }
        }
        k=0;
    }

    // previsione collisioni
    // su
    y--;
    if(l[y][x]==s){
        up=1;
    }
    else{
        up=0;
    }
    y++;

    // giu
    y++;
    if(l[y][x]==s){
        down=1;
    }
    else{
        down=0;
    }
    y--;

    // destra
    x++;
    if(l[y][x]==s){
        right=1;
    }
    else if(l[y][x]==ba[0]){
        if(ba1==true){
            right=0;
        }
        else{
            right=1;
        }
    }
    else if(l[y][x]==ba[1]){
        if(ba2==true){
            right=0;
        }
        else{
            right=1;
        }
    }
    else if(l[y][x]==ba[2]){
        if(ba3==true){
            right=0;
        }
        else{
            right=1;
        }
    }
    else{
        right=0;
    }
    x--;

    // sinistra
    x--;
    if(l[y][x]==s){
        left=1;
    }
    else if(x==-1 && y==14){
        left=1;
    }
    else{
        left=0;
    }
    x++;
}

void game(int mod, int lev, int music, int sound, int theme){
    char m;
    int x, y, tempo=1, t, exit, col=0, up=0, down=0, right=0, left=0;
    bool lc=false, ba1=false, ba2=false, ba3=false;
    time_t start, giro, finish;
    string s="                                                                             ", s3="                                                             ";
    /*
    m: movimento (wasd)
    fi: finish input
    fl: finish level
    x, y: coordinate
    tempo: tempo nel labirinto
    t: limite tempo
    exit: fine livello
    up, down, right, left: supporto per collisioni
    col: collisione
    lc: level complete
    ba1, ba2, ba3: porte livello 3
    */

    switch(lev){ // livello (1, 2, 3)
        case 1:{
            t=80; // 80
            x=0;
            y=11;
        break;
        }
        case 2:{
            t=130; // 130
            x=0;
            y=3;
        break;
        }
        case 3:{
            t=320; // 320
            x=0;
            y=14;
            system("cls");
            cout<<endl<<s3<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl;
            cout<<s3<<ve<<"                  ";
            SetColor(4);
            cout<<"ATTENZIONE!";
            SetColor(15);
            cout<<"                  "<<ve<<endl;
            cout<<s3<<ve<<"   Per superare questo livello bigona aprire   "<<ve<<endl;
            cout<<s3<<ve<<"   le ";
            SetColor(96);
            cout<<"porte";
            SetColor(15);
            cout<<" con le pedane di relativo numero   "<<ve<<endl;
            cout<<s3<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
            _sleep(1000);
            cout<<"\n\n\n                                                                  Premi un tasto per iniziare il livello!";
            system("pause>NUL");
        break;
        }
    }
    if(music==1){
        sndPlaySound("music&sounds/start.wav", SND_ASYNC);
    }
    system("cls");
    cout<<endl<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl;
    cout<<s<<ve<<"   PRONTO?   "<<ve<<endl;
    cout<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    if(music==1){
        _sleep(2500);
    }
    if(sound==1){
        sndPlaySound("music&sounds/let's-go.wav", SND_ASYNC);
        _sleep(2450);
        sndPlaySound("music&sounds/321go.wav", SND_ASYNC);
    }
    system("cls");
    cout<<endl<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl;
    cout<<s<<ve<<"   PRONTO?   "<<ve<<endl;
    cout<<s<<ve<<"     3...    "<<ve<<endl;
    cout<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    _sleep(900);
    system("cls");
    cout<<endl<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl;
    cout<<s<<ve<<"   PRONTO?   "<<ve<<endl;
    cout<<s<<ve<<"     3...    "<<ve<<endl;
    cout<<s<<ve<<"     2...    "<<ve<<endl;
    cout<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    _sleep(900);
    system("cls");
    cout<<endl<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl;
    cout<<s<<ve<<"   PRONTO?   "<<ve<<endl;
    cout<<s<<ve<<"     3...    "<<ve<<endl;
    cout<<s<<ve<<"     2...    "<<ve<<endl;
    cout<<s<<ve<<"     1...    "<<ve<<endl;
    cout<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    _sleep(900);
    system("cls");
    cout<<endl<<s<<as<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<ad<<endl;
    cout<<s<<ve<<"   PRONTO?   "<<ve<<endl;
    cout<<s<<ve<<"     3...    "<<ve<<endl;
    cout<<s<<ve<<"     2...    "<<ve<<endl;
    cout<<s<<ve<<"     1...    "<<ve<<endl;
    cout<<s<<ve<<"             "<<ve<<endl;
    cout<<s<<ve<<"     ";
    SetColor(11);
    cout<<"VIA!";
    SetColor(15);
    cout<<"    "<<ve<<endl;
    cout<<s<<bs<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<bd<<endl;
    _sleep(1000);
    system("cls");

    if(music==1){
        sndPlaySound("music&sounds/game.wav", SND_ASYNC | SND_LOOP);
    }

    time(&start);
    while(lc==false){
        time(&giro);
        tempo=t-difftime(giro, start);
        cout<<"\n                                                                            Tempo restante: "<<tempo<<"s\n";
        if(tempo<1){
            goto endg;
        }

        switch(lev){
            case 1:{
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
                lab1(x, y, lc, up, down, right, left, tempo, mod);
            break;
            }
            case 2:{
                cout<<"\n\n\n\n\n\n\n\n";
                lab2(x, y, lc, up, down, right, left, tempo, mod);
            break;
            }
            case 3:{
                cout<<"\n";
                if(x==2 && y==2){
                    cout<<"                                                                              ";
                    SetColor(6);
                    cout<<"EFFETTO PACMAN!!";
                    SetColor(15);
                    x=44;
                    y=43;
                }
                else if(x==44 && y==43){
                    cout<<"                                                                              ";
                    SetColor(6);
                    cout<<"EFFETTO PACMAN!!";
                    SetColor(15);
                    x=2;
                    y=2;
                }
                cout<<endl;
                lab3(x, y, lc, ba1, ba2, ba3, up, down, right, left, tempo, mod);
            break;
            }
        }

        // controllo collisione
        input:
            m=getch();
            if(m<97){
                m+=32;
            }

            if(m=='w'){ // up
                y--;
                if(up==1){ // controllo collisione
                    if(sound==1){
                        mciSendString("play music&sounds/movement-ba.wav", NULL, 0, NULL);
                    }
                    y++;
                    goto input;
                }
                else{
                    if(sound==1){
                        mciSendString("play music&sounds/movement.wav", NULL, 0, NULL);
                    }
                }
            }
            else if(m=='a'){ // left
                x--;
                if(left==1){ // controllo collisione
                    if(sound==1){
                        mciSendString("play music&sounds/movement-ba.wav", NULL, 0, NULL);
                    }
                    x++;
                    goto input;
                }
                else{
                    if(sound==1){
                        mciSendString("play music&sounds/movement.wav", NULL, 0, NULL);
                    }
                }
            }
            else if(m=='s'){ // down
                y++;
                if(down==1){ // controllo collisione
                    if(sound==1){
                        mciSendString("play music&sounds/movement-ba.wav", NULL, 0, NULL);
                    }
                    y--;
                    goto input;
                }
                else{
                    if(sound==1){
                        mciSendString("play music&sounds/movement.wav", NULL, 0, NULL);
                    }
                }
            }
            else if(m=='d'){ // right
                x++;
                if(right==1){ // controllo collisione
                    if(sound==1){
                        mciSendString("play music&sounds/movement-ba.wav", NULL, 0, NULL);
                    }
                    x--;
                    goto input;
                }
                else{
                    if(sound==1){
                        mciSendString("play music&sounds/movement.wav", NULL, 0, NULL);
                    }
                }
            }

        if(lc==false){
            system("cls");
        }
    }
    time(&finish);

    endg:
        if(tempo<1){
            _sleep(200);
            system("cls");
            if(music==1){
                _sleep(800);
                sndPlaySound("music&sounds/game-over.wav", SND_ASYNC);
            }
        }
        else{
            _sleep(200);
            system("cls");
            if(music==1){
                _sleep(800);
                sndPlaySound("music&sounds/game-passed.wav", SND_ASYNC);
            }
        }
        levelfinish(exit, lc, lev);
        if(exit==0){
            lev++;
            lc=false;
            game(mod, lev, music, sound, theme);
        }
        system("cls");
}

int main(){
    int mod=0, lev=1, music=1, sound=1, theme=0, posmen[5]={0};
    bool r=true;
    srand(time(NULL));

    intro(r);
    menu:
        menu(mod, lev, music, sound, theme, posmen);
        PlaySound(NULL, 0, 0);

    game(mod, lev, music, sound, theme);
    PlaySound(NULL, 0, 0);
    goto menu;
    cout<<endl;

    return 0;
}

/*!
                                             ██
                                            ██

     ██████   ███   ██  ██████   ██████   ██████
    ██    ██  ████  ██  ██   ██  ██   ██  ██
    ████████  ██ ██ ██  ██   ██  ██████   ████
    ██    ██  ██  ████  ██   ██  ██ ██    ██
    ██    ██  ██   ███  ██████   ██  ██   ██████


    ██      ██   ██████   ██████    ██████   ██    ██  ██████  ██████   ██████  ██████  ██████   ██████   █████
    ████  ████  ██    ██  ██   ██  ██        ██    ██  ██      ██   ██  ██        ██      ██    ██    ██      ██
    ██  ██  ██  ████████  ██████   ██  ███   ██    ██  ████    ██████   ████      ██      ██    ████████    ██
    ██      ██  ██    ██  ██ ██    ██    ██  ██    ██  ██      ██ ██    ██        ██      ██    ██    ██  ██
    ██      ██  ██    ██  ██  ██    ██████    ██████   ██████  ██  ██   ██████    ██      ██    ██    ██   █████
*/
