#include <iostream>
#include <cstring>

using namespace std;

bool compararCadenas(const char* cadena1, const char* cadena2) {
    // Comprobando las longitudes de las cadenas
    if (strlen(cadena1) != strlen(cadena2))
        return false;
    
    // Comparando los caracteres uno por uno
    for (int i = 0; cadena1[i] != '\0'; ++i) 
	{
        if (cadena1[i] != cadena2[i])
            return false;
    }
    
    return true;
}

int main() 
{
    char cadena1[20]; 
    char cadena2[20]; 
    
    cout << "Escriba una cadena: ";
    cin >> cadena1;
    cout << "Escriba otra cadena: ";
    cin >> cadena2;
    
    // Llamar a la función compararCadenas y mostrar el resultado
    if (compararCadenas(cadena1, cadena2))
        cout << "Las cadenas son iguales." << endl;
    else
        cout << "Las cadenas son diferentes." << endl;
    
    return 0;
}
