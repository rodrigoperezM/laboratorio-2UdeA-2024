#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

/* Haz una función que reciba un número entero (int) y lo convierta a cadena de caracteres.
Usa parámetros por referencia para retornar la cadena. Escribe un programa de prueba.
Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.*/

void enteroACadena(int numero, char cd[]) {
    sprintf(cd, "%d", numero); // Utilizando sprintf para convertir el entero a cadena
}

int main() {
    char cd[20]; 
    
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    // Convertir el número entero a cadena de caracteres
    enteroACadena(numero, cd);
    
    // cadena resultante
    cout << "La cadena es: " << "(cd)"<< endl;
    
    return 0;
}
