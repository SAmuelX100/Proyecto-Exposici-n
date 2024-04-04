#include <iostream>

int main() {
    int suma = 0;
    int numero;

    std::cout << "Ingrese números enteros. Ingrese 0 para finalizar." << std::endl;
    std::cin >> numero;

    while (numero != 0) {
        if (numero % 2 != 0) {
            suma += numero;
        }
        std::cin >> numero;
    }

    std::cout << "La suma de los números impares ingresados es: " << suma << std::endl;

    return 0;
}
