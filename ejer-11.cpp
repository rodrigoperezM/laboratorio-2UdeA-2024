#include <iostream>
#include<conio.h>

using namespace std;

const int FILAS = 15;
const int ASIENTOS_POR_FILA = 20;
char sala[FILAS][ASIENTOS_POR_FILA];

int main() 
{
    // Inicializar la sala de cine con todos los asientos disponibles
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < ASIENTOS_POR_FILA; ++j) 
		{
            sala[i][j] = '-';
        }
    }

    char opcion;
    do {
        // Mostrar men�
        cout << "\nMENU:\n";
        cout << "1. Mostrar sala\n";
        cout << "2. Reservar asiento\n";
        cout << "3. Cancelar reserva\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) 
		{
            case '1': 
			{
                // Mostrar la representaci�n de la sala de cine
                cout << "  ";
                for (int j = 1; j <= ASIENTOS_POR_FILA; ++j) {
                    cout << j << " ";
                }
                cout << endl;

                for (int i = 0; i < FILAS; ++i) {
                    cout << char('A' + i) << " ";
                    for (int j = 0; j < ASIENTOS_POR_FILA; ++j) {
                        cout << sala[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case '2': 
			{
                // Reservar 
                char fila;
                int numero;
                cout << "Ingrese la fila (letras A-O): ";
                cin >> fila;
                cout << "Ingrese el n�mero del asiento (1-20): ";
                cin >> numero;

                if (fila >= 'A' && fila <= 'O' && numero >= 1 && numero <= 20) 
				{
                    int indiceFila = fila - 'A';
                    int indiceAsiento = numero - 1;

                    if (sala[indiceFila][indiceAsiento] == '-') 
					{
                        sala[indiceFila][indiceAsiento] = '+';
                        cout << "�Asiento reservado con �xito!" << endl;
                    } else {
                        cout << "El asiento ya est� reservado." << endl;
                    }
                } else 
				{
                    cout << "Fila o n�mero de asiento inv�lido." << endl;
                }
                break;
            }
            case '3': {
                // Cancelar una reserva de asiento
                char fila;
                int numero;
                cout << "Ingrese la fila (letras A-O): ";
                cin >> fila;
                cout << "Ingrese el n�mero del asiento (1-20): ";
                cin >> numero;

                if (fila >= 'A' && fila <= 'O' && numero >= 1 && numero <= 20) 
				{
                    int indiceFila = fila - 'A';
                    int indiceAsiento = numero - 1;

                    if (sala[indiceFila][indiceAsiento] == '+') {
                        sala[indiceFila][indiceAsiento] = '-';
                        cout << "�Reserva cancelada con �xito!" << endl;
                    } else {
                        cout << "El asiento no est� reservado." << endl;
                    }
                } else 
				{
                    cout << "Fila o n�mero de asiento inv�lido." << endl;
                }
                break;
            }
            case '4':
                cout << "Saliendo del programa. �Hasta luego!" << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion != '4');

    return 0;
}
