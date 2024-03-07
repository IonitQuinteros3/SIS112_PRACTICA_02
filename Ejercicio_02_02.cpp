// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 5/03/2024

// Fecha modificación: 5/03/2024

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, 
//determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>
using namespace std;

int main() {
    int arreglo[10] = {8, -10, 198, -38, 79, 20, -46, 79, -2, 34};
    int paresPositivos = 0, imparesNegativos = 0;

    for (int i = 0; i < 10; ++i) {
        if (arreglo[i] % 2 == 0 && arreglo[i] > 0) {
            paresPositivos++;
        } else if (arreglo[i] % 2 == 1 && arreglo[i] < 0) {
            imparesNegativos++;
            
        }
    }
    double porcentajeParesPositivos = (paresPositivos * 100.0) / 10;
    double porcentajeImparesNegativos = (imparesNegativos * 100.0) / 10;
    cout <<"Porcentaje de numeros pares positivos: " <<porcentajeParesPositivos <<"%" <<endl;
    cout <<"Porcentaje de numeros impares negativos: " <<porcentajeImparesNegativos <<"%" <<endl;
    return 0;
}

