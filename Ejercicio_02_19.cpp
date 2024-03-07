// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 6/03/2024

// Fecha modificación: 6/03/2024

// Numero de ejericio: 19

// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior ordene los elementos de menor a mayor.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int N = 5;
    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> combinado(2 * N);
    cout <<"Ingrese " <<N <<" valores para el primer vector:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin>> vector1[i];
    }
    cout <<"Ingrese " <<N <<" valores para el segundo vector:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin>> vector2[i];
    }
    // Combina ambos vectores en el vector combinado
    for (int i = 0; i < N; ++i) {
        combinado[i] = vector1[i];
        combinado[i + N] = vector2[i];
    }
    cout << "Vector combinado:" <<endl;
    for (int i = 0; i < 2 * N; ++i) {
        cout <<combinado[i] << " ";
    }
    cout <<endl;
    return 0;
}

