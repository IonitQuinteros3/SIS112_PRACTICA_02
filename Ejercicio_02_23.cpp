// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 5/03/2024

// Fecha modificación: 6/03/2024

// Numero de ejericio: 23

// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout <<"Ingrese la dimension de los vectores: ";
    cin>> N;
    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> combinado(2 * N);

    cout <<"Ingrese los elementos del primer vector:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin>> vector1[i];
    }
    cout <<"Ingrese los elementos del segundo vector:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin>> vector2[i];
    }
    // Combina los vectores en el vector combinado
    for (int i = 0; i < N; ++i) {
        combinado[i] = vector1[i];
        combinado[i + N] = vector2[i];
    }
    cout <<"Vector combinado:" <<endl;
    for (int i = 0; i < 2 * N; ++i) {
        cout <<combinado[i] << " ";
    }
    cout <<endl;
    return 0;
}

