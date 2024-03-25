# include <iostream>

using namespace std;

// Función para calcular la suma de los divisores de un número
int sumDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
            cout << i << " "; // Mostrar el divisor encontrado
        }
    }
    return sum;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Los divisores de " << num << " son: ";
    int sum_divs1 = sumDivisors(num); // Calcular la suma de los divisores y mostrar los divisores

    cout << endl;
    cout << "La suma de los divisores de " << num << " es: " << sum_divs1 << endl;
    
    cout<<"los divisores de "<<sum_divs1<< " son: ";
    int sumDivs2 = sumDivisors(sum_divs1);
    cout << "La suma de los divisores de " << sum_divs1  << " es: " << sumDivs2 << endl;
    
    cout<<"El resultado de la suma es: "<<sum_divs1+sumDivs2;
    

    return 0;
}
