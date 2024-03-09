#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;


 /*Problema 4. Haga una función que reciba una cadena de caracteres numéricos,
 * la convierta a un número entero y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123. */




int ent(char cd[]){
    int i=0,n=0;
    while(cd[i]!='\0'){
        n=10*n + (cd[i]-'0');
        i++;
}
return n;

}

int main(){

    char cd[]="123";
    int a=ent(cd);
    char nu=cd[0];
    cout<<"ingrese la cadena: ";cin>>nu;
    cout<<"El entero de la cadena "<<" es:"<<a<<endl;
    return 0;

}
                        //PROBLEMA #4 RESUELTO

