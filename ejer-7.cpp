#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

/* Escribe un programa que reciba una cadena de caracteres y elimina los caracteres
repetidos.
Ejemplo: se recibe bananas debe mostrar bans.*/

int main() 
{
    char cadena[20];
    cout << "Ingrese una palabra: ";
    cin >> cadena;

    int pal_1 = 1, pal_2 = 1;
    while (cadena[pal_2]) // Mientras la palabra 2 tenga caracteres
    {
        int repeticion = 0;
        while (repeticion < pal_2 && cadena[pal_1] != cadena[repeticion]) 
        {
            repeticion++;
        }
        if (repeticion == pal_2) // Copia el caracter de la palabra 1 a la palabra 2 y luego incrementa el índice de la palabra 2
		{
		 
            cadena[pal_2++] = cadena[pal_1]; 
        }
        pal_1++;
    }
    cadena[pal_2] = '\0';

    cout << "La cadena sin caracteres repetidos es: " << cadena << std::endl;

    return 0;
}
