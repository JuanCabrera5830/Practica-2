#include <iostream>

int main() {
    const int N = 8;  // Definimos el tamaño del arreglo como 8
    int numeros[N];   // Declaramos el arreglo de enteros con tamaño N
    int suma = 0;     // Variable para almacenar la suma de los números

    // Solicitamos al usuario que ingrese 8 números
    std::cout << "Ingrese 8 numeros enteros:\n";
    for (int i = 0; i < N; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
        suma += numeros[i];  // Acumulamos la suma de los números ingresados
    }

    // Imprimimos los valores almacenados en el arreglo
    std::cout << "\nLos valores ingresados en el arreglo son:\n";
    for (int i = 0; i < N; i++) {
        std::cout << "numeros[" << i << "] = " << numeros[i] << std::endl;
    }

    // Imprimimos la suma de los números
    std::cout << "\nLa suma de los numeros es: " << suma << std::endl;

    return 0;
}