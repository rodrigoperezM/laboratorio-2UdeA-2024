#include <iostream>
#include <vector>
using namespace std;

/* Escribe un programa que reciba un n�mero n y calcula el n�mero de caminos posibles
en una cuadr�cula de nxn.
Nota: la salida del programa debe ser:
Para una malla de 2x2 puntos hay 6 caminos.*/

int main() 
{
    int n;
    cout << "Ingrese el tama�o de la cuadricula (nxn): ";
    cin >> n;

    // Creamos una matriz para almacenar el n�mero de caminos posibles para cada punto en la cuadr�cula
    /* esta l�nea de c�digo crea una matriz bidimensional llamada caminos con tama�o (n + 1) x (n + 1), 
	donde cada elemento est� inicializado con ceros. 
	Esta matriz se utiliza para almacenar el n�mero de caminos posibles para llegar a cada punto en una cuadr�cula de tama�o n x n.*/
    vector<vector<unsigned long long> > caminos(n + 1, vector<unsigned long long>(n + 1, 0));

    // creramos un ciclo for donde inicializamos los caminos para la primera fila y la primera columna
    for (int i = 0; i <= n; ++i) {
        caminos[0][i] = 1;
        caminos[i][0] = 1;
    }

    // otro for donde calculamos los caminos posibles para cada punto en la cuadr�cula
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            caminos[i][j] = caminos[i - 1][j] + caminos[i][j - 1];
        }
    }

    cout << "Para una malla de " << n << "x" << n << " puntos hay " << caminos[n][n] << " caminos." << endl;

    return 0;
}
