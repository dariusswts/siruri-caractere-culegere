#include <iostream>
#include "corectarea_temei.h"
#include <string.h>
using namespace std;
void secventaNrSir(char s[],char maxNR[]){
    int k=0;
    char aux[200]="";
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0'&&s[i]<='9'){
            aux[k++]=s[i];
        }
        else{
            if(strlen(aux)>strlen(maxNR)){
                strcpy(maxNR,aux);
            }
            k=0;
        }
    }
    cout<<maxNR;
}

int main()
{
    char s[200],rezultat[50];
    citire(s);
    afis(s);
    cout<<endl;
    secventaNrSir(s,rezultat);


    return 0;
}
