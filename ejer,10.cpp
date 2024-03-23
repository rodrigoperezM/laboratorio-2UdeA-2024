#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;




int main(){



    /*Problema 10. Escribir un programa que permita convertir un número en el sistema romano al sistema
     arábigo usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano
     y su equivalente arábigo:
    M: 1000
    D: 500
    C: 100
    L: 50
    X: 10
    V: 5
    I: 1
    Los números romanos se forman usando estos caracteres en base a dos reglas:
    Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
    Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.
    Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
    Nota: la salida del programa debe ser:
    El número ingresado fue: DCLXVI
    Que corresponde a: 666. */


    char r[100];
    int n,num=0,i,val[100];

    cout<<"Ingrese un numero romano :  ";cin>>r;
    //gets(r);

    n=strlen(r);

    for(i=0;i<n;i++)

    {if (r[i]=='I' || r[i]=='i')
            val[i]=1;

        if (r[i]=='V' || r[i]=='v')
            val[i]=5;

        if (r[i]=='X' || r[i]=='x')
                    val[i]=10;
        if (r[i]=='L' || r[i]=='l')
                    val[i]=50;
        if (r[i]=='C' || r[i]=='c')
                    val[i]=100;
        if (r[i]=='D' || r[i]=='d')
                    val[i]=500;
        if (r[i]=='M' || r[i]=='m')
                    val[i]=1000;}

    for(i=0;i<n;i++)
    {if(i==n+1)
        {num+=val[i];}

        else
            if (val[i]>=val[i])
                num+=val[i];
        else
                num-=val[i];}

        cout<<"El numero ingresado fue: "<<r<<endl;
        cout<<"Que corresponde a: "<<num<<endl;
        
        return 0;
    }



        // PROBLEMA #10 RESUELTO
