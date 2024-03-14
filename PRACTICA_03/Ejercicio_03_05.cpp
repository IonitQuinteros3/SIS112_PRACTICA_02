// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 12/03/2024

// Fecha modificación: 12/03/2024

// Numero de ejericio: 5

// Problema planteado:Crea un programa que invierta el orden de una cadena de texto sin usar funciones propias del lenguaje que lo hagan de forma automática.
//- Si le pasamos "Hola mundo" nos retornaría "odnum aloH"

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cadena[]= "Hola Mundo";
    cout <<"Mensaje original: "<< cadena << endl;
    int longitud = strlen(cadena);

    for(int i = 0; i < longitud / 2; i++)
    {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }

    cout <<"Mensaje invertido: "<< cadena << endl;

    return 0;
}
