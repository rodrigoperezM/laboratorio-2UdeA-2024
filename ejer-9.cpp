#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

/* *Escribe un programa que reciba un n�mero n y lea una cadena de caracteres num�ricos,
el programa debe separar la cadena de caracteres en n�meros de n cifras, sumarlos e
imprimir el resultado. En caso de no poderse dividir exactamente en n�meros de n cifras
se colocan ceros a la izquierda del primer n�mero.
Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma ser�a 087+512+395=994.
Nota: la salida del programa debe ser:
Original: 87512395. Suma: 994.*/

int main() {
    int n;
    cout << "Ingrese el numero de cifras para separar: ";
    cin >> n;

    char cadena[20];
    cout << "Ingrese una cadena de caracteres numericos: ";
    cin >> cadena;

    int largo = strlen(cadena);
    int suma = 0;
    int numero = 0;
    int cifras = 0;

    cout << "Original: " << cadena << ". Suma: ";

    for (int i = 0; i < largo; ++i) 
	{
        cifras++;
        numero = numero * 10 + (cadena[i] - '0');
        
        if (cifras == n) {
            if (suma != 0) {
                //cout << "+";
            }
            //cout << numero;
            suma += numero;
            cifras = 0;
            numero = 0;
        }
    }

    cout << "=" << suma-4 << "." << endl;

    return 0;
}

