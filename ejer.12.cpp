#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(){

/*
    Problema 12. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números en
    cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante.
    Escriba un programa que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la
    matriz es un cuadrado mágico.
    Nota: un ejemplo de cuadrado mágico es el siguiente:
    4 	9 	2
    3 	5 	7
    8 	1 	6*/

    int tam,i,j,s,aux;
    int mtx[tam][tam],fila[tam],col[tam];

    cout<<"Ingrese el tamaño del cuadrado: ";cin>>tam;

    if (tam<3)
    {cout<<"El tamaño tiene que ser de 3 o mayor de 3";
        return 0;}

    cout<<"Ingrese los numeros de los espacios: ";
    s=(tam*(tam*tam+1))/2;//(muestra la suma que deben tener las filas y las columnas)
    cout<<"Cada fila y columna debe sumar...";
    cout<<s<<endl;

    for(i=0;i<tam;i++)
    { for(j=0;j<tam;j++)
        {mtx[i][j]=0; }}

    for(i=0;i<tam;i++)
    { fila[i]=0; }

    for(i=0;i<tam;i++)
    { for(j=0;j<tam;j++)
        { aux=0;

          cout<<"ingrese el valor de las filas : "<<endl;
          cout<<"fila:"<<i+1<<"valor:  ";
          cin>>aux;
          mtx[i][j]=aux; }}

    for(i=0;i<tam;i++)
    { for(j=0;j<tam;j++)
        { fila[i]=fila[i]+mtx[i][j];}}

    for(i=0;i<tam;i++)
    if(fila[i]==s)
            {cout<<"El cubo es magico"-i;}
    else
    {cout<<"El cubo no es magico"-i;}
        cout<<endl;

    for(i=0;i<tam;i++)

    { for(j=0;j<tam;j++)
    { cout<<mtx[i][j];}
    cout<<("\n");}
    return 0;
}

    //PROBLEMA #12 RESUELTO

