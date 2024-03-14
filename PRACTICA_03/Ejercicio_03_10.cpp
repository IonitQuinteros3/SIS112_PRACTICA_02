// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 14/03/2024

// Fecha modificación: 14/03/2024

// Numero de ejericio: 10

// Problema planteado:Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100, calcular y presentar 
//la sumatoria y promedio de estas N calificaciones. La entrada de valores es para las calificaciones, debe hacerlo mediante una función
//(realizar con vectores).

#include <iostream>
#include <vector>

using namespace std;

// Función para leer calificaciones
void leerCalificaciones(vector<int>& calificaciones, int N) {
    cout << "Ingrese las calificaciones:" << endl;
    for (int i = 0; i < N; ++i) {
        int calificacion;
        do {
            cout << "Calificación " << i + 1 << ": ";
            cin >> calificacion;
            if (calificacion < 1 || calificacion > 100) {
                cout << "La calificación debe estar en el rango de 1 a 100" << endl;
            }
        } while (calificacion < 1 || calificacion > 100);
        calificaciones.push_back(calificacion);
    }
}

int main() {
    int N;
    cout << "Ingrese el número de calificaciones: ";
    cin >> N;

    vector<int> calificaciones;
    leerCalificaciones(calificaciones, N);

    // Calcular la sumatoria de las calificaciones
    int sumatoria = 0;
    for (int calificacion : calificaciones) {
        sumatoria += calificacion;
    }

    // Calcular el promedio de las calificaciones
    float promedio = static_cast<float>(sumatoria) / N;

    cout << "La sumatoria de las calificaciones es: " << sumatoria << endl;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
