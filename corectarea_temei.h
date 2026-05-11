#ifndef corectarea_temei.h
#define corectarea_temei.h
#include <string.h>
#include <fstream>
using namespace std;


void citire(char s[]){
    ifstream citire("data.txt");
    citire.getline(s,500);
}

void afis(char s[]){
    cout<<s;
}

///10
/// se considera 2 cuvinte ce contin numai litere mici .Consideram ca ultima silaba a unui cuvant esste subsirul care incepe cu ultima lui vocala .
///Veriuficati daca aceste cuvinte rimeaza (daca a ultima silaba indentica) .Daca un cuvant nu contine vocale,atunci ultima silaba este intregul.
///ex armat si erificat sa se afiseze "Rimeaza" .


bool esteVocala(char c){
    return strchr("aeiou",c)!=NULL;
}

int ultimaVocala(char  s[]){
    for(int i=strlen(s);i>=0;i--){
        if(esteVocala(s[i])){
            return s[i];
        }
    }
    return 0;
}

void ultimaSilaba(char s[],char rez[]){
    int poz=-1;
    for(int i=strlen(s);i>=0;i--){
        if(esteVocala(s[i])){
            poz=i;
            break;
        }
    }
    if(poz==-1){
        strcpy(rez,s);
    }
    else{
        strcpy(rez,s+poz);
    }
}

void verificare10(){
    char s1[200],s2[200];
    char r1[100],r2[100];
    cin>>s1;
    cin>>s2;
    ultimaSilaba(s1,r1);
    ultimaSilaba(s2,r2);
    cout<<r1<<endl;
    cout<<r2<<endl;
    if(strcmp(r1,r2)==0){
        cout<<"Rimeaza";
    }
    else{
        cout<<"Nu rimeaza";
    }
}

///11
///De la tastatura se citeste un text codificat dupa regula urmatoare : in fata fiecariu caracter este scris un numar ce reprezinta numarul e apariti consecutive al acestuia .
///Realizati un program ce decodifica textul .Numarul ce apare in fata va fi mai mic su egal cu 20
///1G11o1L ...   GoooooooooooL.
void decodific(char s[],char rezultat[]){
    int k=0;
    for(int i=0;i<strlen(s);){
        int nr=s[i]-'0';
        char c=s[i+1];
          for(int j=1;j<=nr;j++){
             rezultat[k++]=c;
          }
        i+=2;
    }


}
///1G9o1L
/*
  i      strelen(s)    nr=s[i]-'0'   c=s[i+1]   j=0  j<=nr;   rezultat++=c   j++   i+=2
  0        da             nr=1          G        0    da        G            1
                                                 1    nu                           2
  2        da             nr=9          o        0    da        G            1
                                                 1    da        Go           2
                                                 2    da        Goo          3
                                                 3    da        Gooo         4
                                                 4    da        Goooo        5
                                                 5    da        Gooooo       6
                                                 6    da        Goooooo      7
                                                 7    da        Gooooooo     8
                                                 8    da        Goooooooo    9
                                                 9    da        Gooooooooo   10
                                                 10   nu                           4
 4       da               nr=1          L        0    da        Gooooooooo   1
                                                 1    da        GoooooooooL  2
                                                 2    nu

            afisare GoooooooooL
  */

void verificare11(){
    char s[200],rezultat[50];
    citire(s);
    afis(s);
    decodific(s,rezultat);
    cout<<endl;
    cout<<rezultat;
}


///13

///Se citeste de la tastatura un sir de caractere .Realizati un program care determinba cea mai lunga secventa de cifre alaturate din sir
///a23bw001234mcv34























#endif // corectarea_temei.h
