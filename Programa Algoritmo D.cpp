#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int numero;

    cout << "Ingrese números enteros. Ingrese 0 para finalizar: " ;
    cin >> numero;

    while (numero != 0) {
        if (numero % 2 != 0) {
            suma += numero;
        }
        std::cin >> numero;
    }

    cout << "La suma de los números impares ingresados es: " << suma << endl;

    system("pause");

    return 0;
}
