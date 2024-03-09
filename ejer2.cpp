#include <iostream>
#include <string> // Para usar el tipo string

using namespace std;

int main() 

{
    char tam[200];
    int letras = 0;

    cout << "Ingrese al menos 10 letras mayusculas (maximo 200):" << endl;
    while (letras < 10 && letras < 200) 
	{
        cout << "Letras " << letras + 1 << ": ";
        cin >> tam[letras];
        letras++;
    }
    cout << "letras :" << endl;//  letras ingresadas
    for (int i = 0; i < letras; ++i) {
        cout << tam[i];
    }
    cout << endl;

    cout << " letras repetidas :" << endl;// Calcula y muestra la frecuencia de cada letra
    for (char my = 'A'; my <= 'Z'; ++my) {
        int count = 0;
        for (int i = 0; i < letras; ++i) {
            if (tam[i] == my || tam[i] == my + 32) // considera letras mayúsculas y minúsculas
			{ 
                count++;
            }
        }
        if (count > 0) {
            cout << my << ": " << count << endl;
        }
    }

    return 0;
}
