#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(){



    /*Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima,
     luego imprima la matriz rotada 90, 180 y 270 grados.
    Ejemplo:
    Matriz Original

    1 	2 	3 	4 	5
    6 	7 	8 	9 	10
    11 	12 	13 	14 	15
    16 	17 	18 	19 	20
    21 	22 	23 	24 	25

    Matriz Rotada 90°
    21 	16 	11 	6 	1
    22 	17 	12 	7 	2
    23 	18 	13 	8 	3
    24 	19 	14 	9 	4
    25 	20 	15 	10 	5*/


    int n[50][50],f,c,i,j,v;
    cout<<"ingrese numero de filas: ";cin>>f;
    cout<<"ingrese numero de columnas: ";cin>>c;

    for(i=0;i<f;i++)
    {for(j=0;j<c;j++)
        { cout<<"Dijite los numeros del 1 al 25: ";
            cin>>n[i][j];}}

    cout<<endl;
    cout<<" Matriz Original";

    cout<<endl;

    for(i=0;i<f;i++)
    {for(j=0;j<c;j++)
        {cout<<n[i][j]<<" ";}
    cout<<"\n";}
cout<<endl;

cout<<"Matriz Rotada 90°";
cout<<endl;
    for(j=c-1;j>=0;j--)
    {for(i=0;i<f;i++)
        {cout<<n[f-1-i][j]<<" ";}
    cout<<"\n";}
    
    cout << "Matriz Rotada 180°:" << endl;

for (i=f -1;i >= 0;i--) {
    for (j = c - 1; j >= 0; j--) {
        cout << n[f-1 - i][c-1-j] <<" ";
    }
    cout << endl;
}
cout << endl;

cout << "Matriz Rotada 270°:" << endl;

for (j=c-1;j >= 0; j--) {
    for (i = 0; i < f; i++) {
        cout << n[f-1-i][j] <<" ";
    }
    cout <<endl;
}
    return 0;
}
    //PROBLEMA #14 resuelto
