#include <iostream>
#include "functii.h"
#include <string.h>
using namespace std;


int main()
{
    char s[100],sil[50];
    citireDinfisier(s);
    afisare(s);
    cout<<endl;
    eliminareSuccesiva(s);


    return 0;
}
