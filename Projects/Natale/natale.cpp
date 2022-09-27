#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void SetColor(unsigned int color)
{
  HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon, color);
  /*
  0 = Nero
  1 = Blu scuro
  2 = Verde
  3 = Verde acqua
  4 = Bordeaux
  5 = Viola
  6 = Verde oliva
  7 = Grigio chiaro
  8 = Grigio
  9 = Blu
  10 = Verde limone
  11 = Azzurro
  12 = Rosso
  13 = Fucsia
  14 = Giallo
  15 = Bianco
  */
}

int main(){
  int s, ss=62, sl=1;

  cout<<"I";
  for(int i=0;i<(ss+6);i++){
    cout<<"-";
  }
  cout<<"I";
  for(int i=0;i<(ss+6);i++){
    cout<<"-";
  }
  cout<<"I"<<endl<<endl;

  s=ss-17;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  cout<<"Ridimensiona la finestra basandoti sul 'righello'\n\n";

  s=ss-10;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  system("pause");
  system("cls");

  cout<<"Microsoft Windows [Versione 10.0.22000.282]\n";
  cout<<"(c) Microsoft Corporation. Tutti i diritti riservati.\n\n";
  cout<<"C:\\Users\\3B-IT>";

  char out1[10]={'c','d',' ','D','e','s','k','t','o','p'};
  Sleep(5000);
  for(int i=0;i<10;i++){
    cout<<out1[i];
    Sleep(250);
  }
  Sleep(2000);
  cout<<endl<<endl;
  cout<<"C:\\Users\\3B-IT\\Desktop>";
  Sleep(1500);

  char out2[3]={'d','i','r'};

  Sleep(2000);
  for(int i=0;i<3;i++){
    cout<<out2[i];
    Sleep(400);
  }
  Sleep(1500);
  cout<<endl;
  Sleep(10);

  cout<<"\n Il volume nell'unit\205 C \212 Local Disk\n";
  cout<<" Numero di serie del volume: ABC1-2DE3\n\n";
  cout<<" Directory di C:\\Users\\3B-IT\n\n";
  cout<<"25/12/2021  12:17    <DIR>          .\n";
  cout<<"25/12/2021  12:03    <DIR>          ..\n";
  cout<<"25/12/2021  12:26    <DIR>          Scuola\n";
  cout<<"25/12/2021  12:31             5.120 natale.cpp\n";
  cout<<"25/12/2021  12:31            62.464 natale.exe\n";
  cout<<"25/12/2021  12:31             6.144 natale.o\n";
  cout<<"              3 File          73.728 byte\n";
  cout<<"              3 Directory  539.018.395.648 byte disponibili\n";

  char out3[10]={'n','a','t','a','l','e','.','e','x','e'};

  cout<<endl<<endl;
  cout<<"C:\\Users\\3B-IT\\Desktop>";
  Sleep(8000);

  for(int i=0;i<10;i++){
    cout<<out3[i];
    Sleep(300);
  }
  Sleep(3500);
  cout<<endl;

 sndPlaySound("Jingle_Bells.wav", SND_ASYNC);

  for(int r=0;r<1;r++){
    system("cls");
    // int 's' e 'ss' all'inizio
    cout<<endl<<endl<<endl;

    system("color 2f");

    /* immagine
    cout<<"       *"<<endl;         8   a
    cout<<"      ***"<<endl;        9   b
    cout<<"     *****"<<endl;       10  c
    cout<<"    *******"<<endl;      11  d
    cout<<"   *********"<<endl;     12  e
    cout<<"  ***********"<<endl;    13  f
    cout<<" *************"<<endl;   14  g
    cout<<"***************"<<endl;  15  h
    cout<<" *************"<<endl;   14  i
    cout<<"      ***"<<endl;        9   j
    cout<<"      ***"<<endl;        9   k
    cout<<"      ***"<<endl;        9   l
    */
    //133 caratteri

    char a[8]={' ',' ',' ',' ',' ',' ',' ','*'};
    char b[9]={' ',' ',' ',' ',' ',' ','*','*','*'};
    char c[10]={' ',' ',' ',' ',' ','*','*','*','*','*'};
    char d[11]={' ',' ',' ',' ','*','*','*','*','*','*','*'};
    char e[12]={' ',' ',' ','*','*','*','*','*','*','*','*','*'};
    char f[13]={' ',' ','*','*','*','*','*','*','*','*','*','*','*'};
    char g[14]={' ','*','*','*','*','*','*','*','*','*','*','*','*','*'};
    char h[15]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
    char i[14]={' ','*','*','*','*','*','*','*','*','*','*','*','*','*'};
    char j[9]={' ',' ',' ',' ',' ',' ','*','*','*'};
    char k[9]={' ',' ',' ',' ',' ',' ','*','*','*'};
    char l[9]={' ',' ',' ',' ',' ',' ','*','*','*'};

    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<8;i++){ // a
      cout<<a[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<9;i++){ // b
      cout<<b[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<10;i++){ // c
      cout<<c[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<11;i++){ // d
      cout<<d[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<12;i++){ // e
      cout<<e[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<13;i++){ // f
      cout<<f[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<14;i++){ // g
      cout<<g[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<15;i++){ // h
      cout<<h[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int k=0;k<14;k++){ // i
      cout<<i[k];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<9;i++){ // j
      cout<<j[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<9;i++){ // k
      cout<<k[i];
      Sleep(10);
    }
    cout<<endl;
    s=ss;
    do {
      cout<<" ";
      s--;
    } while(s>0);
    for(int i=0;i<9;i++){ // l
      cout<<l[i];
      Sleep(10);
    }
    cout<<endl;

    for(int i=0;i<8;i++){
      system("color 2c"); // bianco
      Sleep(500);
      system("color 2f"); // rosso
      Sleep(500);
    }
    Sleep(3000);
  }

  cout<<endl<<endl<<endl;

  string spazio="            ";

  char buon1[44]={'I','I','I','I','I','I','I',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ','I','I','I','I','I','I',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I'};
  char buon2[44]={'I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I','I',' ',' ',' ',' ',' ','I'};
  char buon3[44]={'I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ','I',' ',' ',' ',' ','I'};
  char buon4[44]={'I','I','I','I','I','I','I',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ','I',' ',' ',' ','I'};
  char buon5[44]={'I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ','I',' ',' ','I'};
  char buon6[44]={'I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ','I','I'};
  char buon7[44]={'I','I','I','I','I','I','I',' ',' ',' ',' ',' ',' ','I','I','I','I','I','I',' ',' ',' ',' ',' ',' ','I','I','I','I','I','I',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I'};


  char natale1[77]={'I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ','I','I','I','I','I','I',' ',' ',' ',' ',' ','I','I','I','I','I','I','I',' ',' ',' ',' ',' ','I','I','I','I','I','I',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I','I','I','I','I','I','I',' ',' ',' ',' ',' ',' ',' ','I','I','I','I','I'};
  char natale2[77]={'I','I',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I','I','I','I','I'};
  char natale3[76]={'I',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I','I','I'};
  char natale4[75]={'I',' ',' ','I',' ',' ',' ','I',' ',' ',' ',' ','I','I','I','I','I','I','I','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I','I','I','I','I','I','I','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I','I','I','I','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I',};
  char natale5[59]={'I',' ',' ',' ','I',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I'};
  char natale6[76]={'I',' ',' ',' ',' ',' ','I','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I','I','I'};
  char natale7[76]={'I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ',' ',' ','I',' ',' ',' ',' ','I','I','I','I','I','I','I',' ',' ',' ',' ','I','I','I','I','I','I','I',' ',' ',' ',' ',' ',' ',' ',' ','I','I','I'};


  /*
  IIIIIII     I      I     IIIIII     I      I            I      I     IIIIII     IIIIIII     IIIIII     I          IIIIIII       IIIII
  I      I    I      I    I      I    II     I            II     I    I      I       I       I      I    I          I             IIIII
  I      I    I      I    I      I    I I    I            I I    I    I      I       I       I      I    I          I              III
  IIIIIII     I      I    I      I    I  I   I            I  I   I    IIIIIIII       I       IIIIIIII    I          IIIII           I
  I      I    I      I    I      I    I   I  I            I   I  I    I      I       I       I      I    I          I
  I      I    I      I    I      I    I     II            I     II    I      I       I       I      I    I          I              III
  IIIIIII      IIIIII      IIIIII     I      I            I      I    I      I       I       I      I    IIIIIII    IIIIIII        III
  */

  // buon + spazio + natale



  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon1
    cout<<buon1[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<77;i++){ // natale1
    cout<<natale1[i];
    Sleep(sl);
  }
  cout<<endl;

  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon2
    cout<<buon2[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<77;i++){ // natale2
    cout<<natale2[i];
    Sleep(sl);
  }
  cout<<endl;

  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon3
    cout<<buon3[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<76;i++){ // natale3
    cout<<natale3[i];
    Sleep(sl);
  }
  cout<<endl;

  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon4
    cout<<buon4[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<75;i++){ // natale4
    cout<<natale4[i];
    Sleep(sl);
  }
  cout<<endl;

  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon5
    cout<<buon5[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<59;i++){ // natale5
    cout<<natale5[i];
    Sleep(sl);
  }
  cout<<endl;

  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon6
    cout<<buon6[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<76;i++){ // natale6
    cout<<natale6[i];
    Sleep(sl);
  }
  cout<<endl;

  s=ss-59;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<44;i++){ // buon7
    cout<<buon7[i];
    Sleep(sl);
  }
  cout<<spazio; // spazio
  for(int i=0;i<76;i++){ // natale7
    cout<<natale7[i];
    Sleep(sl);
  }

  for(int i=0;i<15;i++){
    system("color 4f"); // rosso
    Sleep(500);
    system("color 2f"); // verde
    Sleep(500);
  }
  Sleep(3000);

  cout<<endl<<endl<<endl<<endl;

  Sleep(3000);
  char out4[22]={'~','3','B',' ','I','T',' ',' ','|',' ',' ','N','a','t','a','l','e',' ','2','0','2','1'};

  s=ss-4;
  do {
    cout<<" ";
    s--;
  } while(s>0);
  for(int i=0;i<22;i++){ // out 3
    cout<<out4[i];
    Sleep(100);
  }
  Sleep(3000);

  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  system("pause");
  system("color 0f");
  return 0;
}
