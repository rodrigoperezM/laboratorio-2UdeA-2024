
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;




int main(){

   /* Problema 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas
    por mayúsculas, los demás caracteres no deben ser alterados.
    Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
    Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.

   */

    

    char cadp[]="";

    cout<<"Escriba una palabra: ";cin>>cadp;
    cout<<"Original: "<<cadp<<endl;
    strupr(cadp);//funcion que permite hacer el cambio de minusculas a mayusculas.
    cout<<"En mayusculas :"<<cadp<<endl;
    return 0;

 		
}
                           // PROGRAMA DEL PROBLEMA #6 RESUELTO

