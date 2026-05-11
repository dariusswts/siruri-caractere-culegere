#include <iostream>
#include "functii.h"
#include <string.h>
using namespace std;


void cuvantMin(char v[100][100],int n){
    bool primul=true;
    char rez[100];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            char aux[100];
            strcpy(aux,v[i]);
            strcat(aux,v[j]);
            if(primul||strcmp(aux,rez)<0){
                strcpy(rez,aux);
                primul=false;
            }
        }
    }
    cout<<rez;
}

//mama arc conduce paine vine
/*
i=0 i<n  j=i+1  j<n      strcpy(aux,v[i])   strcat(aux,v[j])   if(primul||strcmp(aux,rez)<0)     strcpy(rez,aux);  j++  }}  i++   cout<<rez
 0  da    1     da        aux=mama             aux=mamaarc             primul da                   rez=mamaarc      2
          2     da        aux=mama             aux=mamaconduce   strcmp(mamaconduce,mamaarc)DA     rez=mamaconduce    3
          3     da        aux=mama             aux=mamapaine     strcmp(mamapaine,mamaconduce)NU   rez=mamaconduce    4
          4     da        aux=mama             aux=mamavine      strcmp(mamavine,mamaconduce) nu   rez=mamaconduce    5      1
          5     nu
 1  da    2     da        aux=arc              aux=arcconduce    strcmp(arcconduce,mamaconduce)da  rez=arcconduce     3
          3     da        aux=arc              aux=arcpaine      strcmp(arcpaine,arconduce)nu      rez=arcconduce     4
          4     da        aux=arc              aux=arcvine       strcmp(arcvine,arcconduce)nu      rez=arcconduce     5      2
          5     nu
 2  da    3     da        aux=conduce          aux=conducepaine  strcmp(conducepaine,arcconduce)nu rez=arcconduce     4
          4     da        aux=conduce          aux=conducevine   strcmp(conducevine,arcconduce)nu  rez=arcconduce     5      3
          5     nu
 3  da    4     da        aux=paine            aux=painevine     strcmp(panievine,arconduce)nu     rez=arcconduce     5
          5     nu
 4  da    5     nu
 5  nu-------------------------------------------------------------------------------------------------------------------------   cout<<arcconduce
 */





int main()
{
    int n=5;
    char s[100][100]={
       "mama",
       "arc",
       "conduce",
       "paine",
       "vine" };
    cuvantMin(s,n);




    return 0;
}
