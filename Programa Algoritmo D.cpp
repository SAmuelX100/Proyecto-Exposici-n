#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int numero;

    cout << " >> Ingrese numeros enteros. Ingrese 0 para finalizar: " ;
    cin >> numero;

    while (numero != 0) {
        
        if (numero % 2 != 0) {
            suma += numero;
        }

        cout << " >> Ingrese numeros enteros. Ingrese 0 para finalizar: " ;
        cin >> numero;
    }

    cout << " >> La suma de los numeros impares ingresados es: " << suma << endl;

    system("pause");

    return 0;
}
