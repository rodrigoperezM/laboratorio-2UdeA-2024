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
        // Mostrar menú
        cout << "\nMENU:\n";
        cout << "1. Mostrar sala\n";
        cout << "2. Reservar asiento\n";
        cout << "3. Cancelar reserva\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) 
		{
            case '1': 
			{
                // Mostrar la representación de la sala de cine
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
                cout << "Ingrese el número del asiento (1-20): ";
                cin >> numero;

                if (fila >= 'A' && fila <= 'O' && numero >= 1 && numero <= 20) 
				{
                    int indiceFila = fila - 'A';
                    int indiceAsiento = numero - 1;

                    if (sala[indiceFila][indiceAsiento] == '-') 
					{
                        sala[indiceFila][indiceAsiento] = '+';
                        cout << "¡Asiento reservado con éxito!" << endl;
                    } else {
                        cout << "El asiento ya está reservado." << endl;
                    }
                } else 
				{
                    cout << "Fila o número de asiento inválido." << endl;
                }
                break;
            }
            case '3': {
                // Cancelar una reserva de asiento
                char fila;
                int numero;
                cout << "Ingrese la fila (letras A-O): ";
                cin >> fila;
                cout << "Ingrese el número del asiento (1-20): ";
                cin >> numero;

                if (fila >= 'A' && fila <= 'O' && numero >= 1 && numero <= 20) 
				{
                    int indiceFila = fila - 'A';
                    int indiceAsiento = numero - 1;

                    if (sala[indiceFila][indiceAsiento] == '+') {
                        sala[indiceFila][indiceAsiento] = '-';
                        cout << "¡Reserva cancelada con éxito!" << endl;
                    } else {
                        cout << "El asiento no está reservado." << endl;
                    }
                } else 
				{
                    cout << "Fila o número de asiento inválido." << endl;
                }
                break;
            }
            case '4':
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != '4');

    return 0;
}
