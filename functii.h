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
void maximConcatenare(char v[100][100], int n){
    for(int i=0;i<n;i++){

    }






#endif // functii.h
