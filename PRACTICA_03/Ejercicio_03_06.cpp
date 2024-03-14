// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 12/03/2024

// Fecha modificaci�n: 12/03/2024

// Numero de ejericio: 6

// Problema planteado:Crea un programa que cuente cuantas veces se repite cada palabra y que muestre el recuento final de todas ellas.
//- Los signos de puntuaci�n no forman parte de la palabra.
//- Una palabra es la misma, aunque aparezca en may�sculas y min�sculas.
//- No se pueden utilizar funciones propias del lenguaje que lo resuelvan autom�ticamente.

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map> 

using namespace std;

void Minuscula(string &texto)
{
    for(char& c : texto)
    {
        c=tolower(c);
    }
}

int main() {
    string texto, palabra;
    unordered_map<string, int> repeticiones;
    
    cout << "Ingrese un texto: ";
    getline(cin,texto);
    
    Minuscula(texto);
    
    stringstream ss(texto);
    
    return 0;
}
