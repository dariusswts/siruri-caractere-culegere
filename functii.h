#ifndef functii.h
#define functii.h
#include <string.h>
#include <fstream>
using namespace std;

void citireDinfisier(char s[]){
    ifstream citire("data.txt");
    citire.getline(s,500);
}

void afisare(char s[]){
    cout<<s;
}


/// ex 1

//a)

int aparitiiLitera(char s[],char lit){
    int cnt=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==lit){
            cnt++;
        }
    }
    return cnt;
}

void rez1(){
    char s[100],lit;
    cin>>lit;
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    cout<<"Nr de apariti ale literei :"<<lit<<" "<<aparitiiLitera(s,lit);

}

//b)

int numarVocale(char s[]){
    int cnt=0;
    for(int i=0;i<strlen(s);i++){
        if(strchr("aeiouAEIOU",s[i])){
            cnt++;
        }
    }
    return cnt;
}

void rez2(){
    char s[100],lit;
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    cout<<"Numarul de vocale este: "<<numarVocale(s);

}

//c)
// Ina are multe mere
// 2 re
//functie ce verifica daca intr-un cuvant exista alt cuvant are re

int contine(char s[],char sil[]){
    if(strstr(s,sil)!=NULL){
        return 1;
    }
    return 0;
}

int aparitiiSilaba(char s[],char sil[]){
    int cnt=0;
    char*p=strtok(s," ,.");
    while(p!=NULL){
        if(contine(p,sil)){
            cnt++;
        }
        p=strtok(NULL," ");
    }
    return cnt;
}


///2

void stergePrimaLiter(char s[]){
    char prima=s[0];
    int k=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=prima){
            s[k]=s[i];
            k++;
        }
    }
    s[k]='\0';
}


///3

void eliminareSuccesiva(char s[]){
    int st=0;
    int dr=strlen(s);
    while(st<=dr){
        for(int i=st;i<=dr-1;i++){
            cout<<s[i];
        }
        cout<<endl;
        st++;
        dr--;
    }
}
///4
/*
void afisMaxPeLinii(char a[100][100],int n,int m){
    for(int i=0;i<n;i++){
        int Max=0;
        int poz=0;
        for(int j=0;j<m;j++){
            if(strlen(a[i][j]>Max)){
                Max=strlen(a[i][j]);
                poz=j;
            }
        }
        cout<<a[i][poz]<<endl;
    }
}
*/





///5

void transforma(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        else
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
}

///6
void cuvantMaxim(char v[100][100], int n){
    char rez[100];
    int Max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            char aux[100];
            strcpy(aux,v[i]);
            strcat(aux,v[j]);
            if(strlen(aux)>Max){
                Max=strlen(aux);
                strcpy(rez,aux);
            }
        }
    }
    cout<<rez;
}

///7

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






#endif // functii.h
