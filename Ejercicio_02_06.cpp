// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 5/03/2024

// Fecha modificación: 5/03/2024

// Numero de ejericio: 6

// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.

#include <iostream>

using namespace std;
int main() {
    const int tam = 5;  // Tama~no de los arreglos
    int arreglo1[tam] = {1, 2, 3, 4, 5};
    int arreglo2[tam] = {10, 20, 30, 40, 50};
    int arregloInter[tam * 2];  // Arreglo para almacenar los elementos intercalados

    // Genera el arreglo intercalado
    for (int i = 0; i < tam; ++i) {
        arregloInter[i * 2] = arreglo1[i];
        arregloInter[i * 2 + 1] = arreglo2[i];
    }
    cout <<"Arreglo intercalado: ";
    for (int i = 0; i < tam * 2; ++i) {
        cout <<arregloInter[i] << " ";
    }
    cout <<endl;
    return 0;
}


