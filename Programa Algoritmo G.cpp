#include <iostream>
#include <vector>

using namespace std;

// Definición de la estructura Empleado
struct Empleado {
    int numeroSeguroSocial;
    int edad;
    double salario;
};

int main() {
    // Crear un vector para almacenar los empleados
    vector<Empleado> fabrica;

    // Inicializar datos de empleados (puedes ingresarlos manualmente o mediante algún método)

    // Ejemplo de datos de empleados
    fabrica.push_back({12345, 35, 50000.0});
    fabrica.push_back({67890, 28, 45000.0});
    fabrica.push_back({54321, 42, 60000.0});

    double sumaEdades = 0.0;
    double sumaSalarios = 0.0;
    int contadorEmpleados = 0;
    int contadorMayores30 = 0;

    // Procesar los empleados
    for (const Empleado& empleado : fabrica) {
        if (empleado.edad > 30) {
            cout << "Número de Seguridad Social: " << empleado.numeroSeguroSocial << endl;
            contadorMayores30++;
        }

        sumaEdades += empleado.edad;
        sumaSalarios += empleado.salario;
        contadorEmpleados++;
    }

    if (contadorEmpleados > 0) {
        double edadPromedio = sumaEdades / contadorEmpleados;
        cout << "Edad promedio de empleados: " << edadPromedio << endl;
        cout << "Número de empleados mayores a 30 años: " << contadorMayores30 << endl;
        cout << "Salario total de empleados: " << sumaSalarios << endl;
    } 
    else {
        cout << "No hay empleados en la fábrica." << endl;
    }

    // Pausar la ejecución antes de cerrar la consola
    system("pause");
    return 0;
}
