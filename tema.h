#ifndef tema.h
#define tema.h
#include <string.h>
#include <fstream>
using namespace std;

///8
void afisarePropozitii(char s[]){
    int n=strlen(s);
    char prop[256]="";
    int k=0;

    for(int i=0;i<n;i++){
        prop[k++]=s[i];

        if(s[i]=='.' || s[i]=='!'){
            prop[k]='\0';

            for(int j=0;j<k;j++){
                if(j==0 || prop[j-1]==' ')
                    if(prop[j]>='a' && prop[j]<='z')
                        prop[j]=prop[j]-32;
            }

            cout<<prop<<endl;
            k=0;
        }
    }
}
void rezolvare8(){
    char s[256];
    cin.getline(s,256);
    afisarePropozitii(s);
}

///9
bool esteFata(char s[]){
    int n=strlen(s);
    if(s[n-1]=='a') return true;
    return false;
}

void transformaMajuscule(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
}

void rezolvare9(){
    int n;
    cin>>n;
    char s[100][50];
    int fete=0;

    for(int i=0;i<n;i++){
        cin>>s[i];
        if(esteFata(s[i])){
            fete++;
        }
    }
}

///10
bool esteVocala(char c){
    return strchr("aeiou",c)!=NULL;
}



///12
bool esteNumar(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]<'0' || s[i]>'9'){
            return false;
        }
    }
    return true;
}

void rezolvare12(){
    char s[256];
    cin.getline(s,256);

    char *p=strtok(s," ");
    while(p){
        if(esteNumar(p))
            cout<<p<<" ";
        p=strtok(NULL," ");
    }
}



#endif // tema.h
