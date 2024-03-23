#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;




int main(){



   /* Problema 8. Escriba un programa que reciba una cadena de caracteres y separe los números
    del resto de caracteres, generando una cadena que no tiene números y otra con los números
    que había en la cadena original.

    Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
    Nota: la salida del programa debe ser:
    Original: abc54rst.
    Texto: abcrst. Numero: 54. */

   //isdigit ("f");//funcion que lee el valor del parentesis, devuelve true o false dependiendo del valor


    char LN[10];//problema 8
    string num,letra;//problema 8
    int i=0;

    cout<<"Ingrese letras y numeros: ";cin>>LN;
    cout<<endl;
    while(i<sizeof(LN)-1)
    {

   if (isdigit(LN[i]))
   {num=num+LN[i];}

   else
    {letra=letra+LN[i];}
   i++;
}
    cout<<"Original: "<<LN<<endl;
    cout<<endl;
    cout<<"Texto: "<<letra<<". "<<endl;
    cout<<endl;
    cout<<"Numero: "<<num<<endl;
    cout<<endl;
    gets(LN);

return 0;
}

                //PREBLEMA #8 RESUELTO

