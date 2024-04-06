#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para encontrar el mínimo en una sucesión
double encontrarMinimoRecursivo(const vector<double>& sucesion, int indice) {
    if (indice == 0) {
        return sucesion[indice]; // Caso base: primer elemento
    }

    double minimoAnterior = encontrarMinimoRecursivo(sucesion, indice - 1);
    return min(sucesion[indice], minimoAnterior);
}

int main() {
    vector<double> sucesion = {5.2, 3.8, 7.1, 2.5, 4.9}; // Ejemplo de sucesión

    // Llamada inicial a la función recursiva
    double minimo = encontrarMinimoRecursivo(sucesion, sucesion.size() - 1);

    cout << "El mínimo de la sucesión es: " << minimo << endl;

    return 0;
}
