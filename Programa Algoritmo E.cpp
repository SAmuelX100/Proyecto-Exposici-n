#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int a, b, c;

    // Lectura de valores desde el teclado
    cout << " >> Ingrese el valor de a: ";
    cin >> a;
    cout << " >> Ingrese el valor de b: ";
    cin >> b;
    cout << " >> Ingrese el valor de c: ";
    cin >> c;

    // Ordenamiento de los valores
    if (a >= b && a >= c) {
        if (b >= c) {
            cout << " >> El orden de los numeros es:  "<< a << " " << b << " " << c << endl;
        } else {
            cout << " >> El orden de los numeros es:  "<< a << " " << c << " " << b << endl;
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            cout << " >> El orden de los numeros es:  "<<  b << " " << a << " " << c << endl;
        } else {
            cout << " >> El orden de los numeros es:  "<<  b << " " << c << " " << a << endl;
        }
    } else {
        if (a >= b) {
            cout << " >> El orden de los numeros es:  "<<  c << " " << a << " " << b << endl;
        } else {
            cout << " >> El orden de los numeros es:  "<<  c << " " << b << " " << a << endl;
        }
    }

    system("pause");
    return 0;
}
