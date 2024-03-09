#include<iostream>
#include<conio.h>
using namespace std;


int main()

{
	int valor, cant;
    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};//contiene los valores de cada billete.
    const int num_billetes = sizeof(billetes) / sizeof(billetes[0]);

    cout << "Ingrese el valor: ";
    cin >> valor;

    for (int i = 0; i < num_billetes; ++i)// iterar sobre cada billete en el arreglo  
	{
        cant = valor / billetes[i];
        valor %= billetes[i];//actualiza valor con el residuo de la división.
        cout << billetes[i] << ": " << cant << endl;
    }

    cout << "Faltante: " << valor << endl;

    return 0;
}
