#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    /*Problema 18. Las permutaciones lexicogr�ficas son permutaciones ordenadas num�rica o alfab�ticamente, por 7
    ejemplo las permutaciones lexicogr�ficas de 0,1 y 2 son: 012, 021, 102, 120, 201, 210. Escribir un programa que
    reciba un n�mero n y halle la en�sima permutaci�n lexicogr�fica de los n�meros entre 0 y 9. Ejemplo: para n= 1000000,
    la permutaci�n lexicogr�fica es 2783915460.
    Nota: la salida del programa debe ser:
    La permutacion numero 1000000 es: 2783915460. */

    int n,x,r,y,j,p,k,i;

       cout<<"Ingrese la serie :";
       cin>>n;
       cout<<endl;
       cout<<"Ingrese numero a permutar: ";
       cin>>r;
       cout<<endl;
       x=1;
       //cout<<"\n Lista de elementos:\n ";
       for( i=1; i<=n; i++)
       {x=x*i;}

       y=n-r;

       k=1;
       for(j=1;j<=y++;j++)
       {k=k*j;}

       p=x/k;

       cout<<"La permutacion numero "<<r<<" es:  "<<p<<endl;

       return 0;
	   
}
