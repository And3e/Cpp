#include <iostream>
#include <stdlib.h>

using namespace std;

struct orario{
 int h;
 int m;
 double s;
};

int main(){
 orario orario;
 orario.h=12;
 orario.m=59;
 orario.s=15.0;
 cout<<orario.h<<":"<<orario.m<<":"<<orario.s;
 return 0;
}
