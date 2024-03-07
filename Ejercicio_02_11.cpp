// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 6/03/2024

// Fecha modificación: 6/03/2024

// Numero de ejericio: 11

// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.

#include <iostream>
#include <cmath>

using namespace std;
const int tamArreglo = 100;
int main() {
    int edades[tamArreglo];
    int numEdades = 0;
    double sumaEdades = 0;
    cout <<"Ingrese las edades (ingrese -1 para finalizar):" <<endl;
    int edad;
    while (cin>> edad && edad != -1) {
        edades[numEdades] = edad;
        sumaEdades = sumaEdades + edad;
        ++numEdades;
    }
    // Calcula el promedio de edades
    double promedioEdades = sumaEdades / numEdades;
    double sumaDesviacionCuadrados = 0;
    // Calcula la suma de los cuadrados de las desviaciones
    for (int i = 0; i < numEdades; ++i) {
        double desviacion = edades[i] - promedioEdades;
        sumaDesviacionCuadrados = sumaDesviacionCuadrados + desviacion * desviacion;
    }
    // Calcula de desviacion tipica y muestra el resultado
    double desviacionTipica = sqrt(sumaDesviacionCuadrados / numEdades);
    cout << "La desviacion tipica de las edades es: " <<desviacionTipica <<endl;
    return 0;
}

