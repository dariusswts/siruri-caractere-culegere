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

int main()
{
    int n=5;
    char s[100][100]={
       "mama",
       "arc",
       "conduce",
       "paine",
       "vine" };
    char v[100][100];
    char rez[100];
    cuvantMin(s,n);




    return 0;
}
