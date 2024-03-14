// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 12/03/2024

// Fecha modificaci�n: 12/03/2024

// Numero de ejericio: 3

// Problema planteado:Escribe un programa que se encargue de comprobar si un n�mero es o no primo. Hecho esto, imprime los n�meros primos entre 1 y 100.

#include <iostream>

using namespace std;

int main(){
    for (int i =2; i<= 100; ++i){
        bool Primo = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0){
                Primo = false;
                break;
            }
        }
            if (Primo){
            cout << i <<endl;
         }
    }
    cout << endl;
    return 0;
}

