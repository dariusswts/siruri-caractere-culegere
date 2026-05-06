#ifndef solutii.h
#define solutii.h
#include "functii.h"


/// ex 1

//A
void rez1A(){
    char s[100],lit;
    cin>>lit;
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    cout<<"Nr de apariti ale literei :"<<lit<<" "<<aparitiiLitera(s,lit);

}

//B
void rez1B(){
    char s[100],lit;
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    cout<<"Numarul de vocale este: "<<numarVocale(s);

}
//C
void rez1C(){
    char s[100],sil[50];
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    cin.getline(sil,50);
    cout<<endl;
    cout<<aparitiiSilaba(s,sil);
}



///ex 2
void rez2(){
    char s[100],sil[50];
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    stergePrimaLiter(s);
    cout<<"Dupa stergerea primei litere din tot sirul"<<endl;
    afisare(s);
}

///ex 3

void rez3(){
    char s[100],sil[50];
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    cout<<"eliminarea succesiva aprimei si ultimei litere a unui cuvant :"<<endl;
    eliminareSuccesiva(s);
}


///ex 5
void rez5(){
    char s[100];
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    transforma(s);
    afisare(s);

    cout<<s;

}

///6
void rez6(){
    int n=5;
    char s[100][100]={
       "mama",
       "arc",
       "conduce",
       "paine",
       "vine" };
    char v[100][100];
    char rez[100];
    cuvantMaxim(s,n);
}


#endif // solutii.h
