#include <iostream>
#include <conio.h>
using namespace std;

// Función para la interseccion
void inter_rectangulos(const int rect_A[], const int rect_B[], int rect_C[]) {
    
	// Coordenadas del rectángulo A
    int ax1 = rect_A[0];
    int ay1 = rect_A[1];
    int ax2 = ax1 + rect_A[2];
    int ay2 = ay1 + rect_A[3];

    // Coordenadas del rectángulo B
    int bx1 = rect_B[0];
    int by1 = rect_B[1];
    int bx2 = bx1 + rect_B[2];
    int by2 = by1 + rect_B[3];

    // Coordenadas de la intersección
    int cx1 = max(ax1, bx1);
    int cy1 = max(ay1, by1);
    int cx2 = min(ax2, bx2);
    int cy2 = min(ay2, by2);

    // Verificar si hay intersección
    if (cx1 < cx2 && cy1 < cy2) {
        // Calcular el rectángulo intersección C
        rect_C[0] = cx1;
        rect_C[1] = cy1;
        rect_C[2] = cx2 - cx1;
        rect_C[3] = cy2 - cy1;
    } else {
        // Si no hay intersección, establecer rectángulo C como vacío
        rect_C[0] = rect_C[1] = rect_C[2] = rect_C[3] = 0;
    }
}

int main() {
    // Definir los rectángulos A y B con entrada de usuario
    int rect_A[4], rect_B[4];
    
    cout << "Ingrese las coordenadas del rectangulo A (x y ancho alto): ";
    for (int i = 0; i < 4; ++i) {
        cin >> rect_A[i];
    }

    cout << "Ingrese las coordenadas del rectangulo B (x y ancho alto): ";
    for (int i = 0; i < 4; ++i) {
        cin >> rect_B[i];
    }

    // Calcular la intersección y mostrar el resultado
    int rect_C[4];
    inter_rectangulos(rect_A, rect_B, rect_C);
    cout << "El rectangulo interseccion C es: {" << rect_C[0] << ", " << rect_C[1] << ", "
         << rect_C[2] << ", " << rect_C[3] << "}" << endl;

    return 0;
}
