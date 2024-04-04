#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int filasA, columnasA, filasB, columnasB;
    int resultado = 1; // Se inicializa como 1, asumiendo que las matrices son iguales por defecto

    // Lectura de dimensiones de las matrices
    cout << "Ingrese el numero de filas de la matriz A: ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas de la matriz A: ";
    cin >> columnasA;
    cout << "Ingrese el numero de filas de la matriz B: ";
    cin >> filasB;
    cout << "Ingrese el numero de columnas de la matriz B: ";
    cin >> columnasB;

    // Declaración de matrices A y B
    int A[filasA][columnasA];
    int B[filasB][columnasB];

    // Lectura de elementos de la matriz A
    cout << "Ingrese los elementos de la matriz A:\n";
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasA; ++j) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Lectura de elementos de la matriz B
    cout << "Ingrese los elementos de la matriz B:\n";
    for (int i = 0; i < filasB; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cout << "Ingrese el elemento B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Verificación de dimensiones de las matrices
    if (filasA != filasB || columnasA != columnasB) {
        cout << "Las dimensiones de las matrices no son iguales." << endl;
        return 0;
    }

    // Comparación de elementos de las matrices
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasA; ++j) {
            if (A[i][j] != B[i][j]) {
                resultado = 0; // No son iguales
                break;
            }
        }
        if (resultado == 0) {
            break;
        }
    }

    // Impresión del resultado
    cout << " >> El resultado de la comparacion es: " << resultado << " (1 es igual / 0 es distinto)" << endl;

    // Pausa antes de cerrar la consola
    system("pause");
    return 0;
}
