// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 7/03/2024

// Fecha modificaci�n: 7/03/2024

// Numero de ejericio: 24

// Problema planteado: Leer una cadena en may�sculas y c�mbielas en min�scula.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    cout <<"Ingrese una cadena en mayusculas: ";
    cin>> cadena;
    // Convierte la cadena a minusculas
    for (char &c : cadena) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }
    cout <<"Cadena en minusculas: " <<cadena <<endl;
    return 0;
}

