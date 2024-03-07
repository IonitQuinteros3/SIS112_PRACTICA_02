// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 7/03/2024

// Fecha modificación: 7/03/2024

// Numero de ejericio: 25

// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 eindique el mayor elemento, el menor elemento y el promedio.

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    int N;
    cout <<"Ingrese la cantidad de elementos del vector: ";
    cin>> N;
    vector<int> vectorNumeros(N);
    // Genera numeros aleatorios entre 1 y 100
    for (int i = 0; i < N; ++i) {
        vectorNumeros[i] = rand() % 100 + 1;
    }
    int maximo = vectorNumeros[0];
    int minimo = vectorNumeros[0];
    int suma = 0;
    // Encuentra el maximo, minimo y calcular la suma
    for (int i = 0; i < N; ++i) {
        if (vectorNumeros[i] > maximo) {
            maximo = vectorNumeros[i];
        }
        if (vectorNumeros[i] < minimo) {
            minimo = vectorNumeros[i];
        }
        suma = suma + vectorNumeros[i];
    }
    // Calcula el promedio
    double promedio = static_cast<double>(suma) / N;
    cout <<"Vector de numeros generados:" <<endl;
    for (int i = 0; i < N; ++i) {
        cout <<vectorNumeros[i] <<" ";
    }
    cout <<endl;
    cout <<"Mayor elemento: " <<maximo <<endl;
    cout <<"Menor elemento: " <<minimo <<endl;
    cout <<"Promedio: " <<promedio <<endl;
    return 0;
}
 
