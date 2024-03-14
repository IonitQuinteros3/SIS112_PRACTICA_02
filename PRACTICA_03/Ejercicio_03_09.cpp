// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 13/03/2024

// Fecha modificación: 13/03/2024

// Numero de ejericio: 9

// Problema planteado:Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente indicar cuál es el nombre de la persona 
//de menor edad, el promedio de las estaturas y el de los pesos. (realizar con vectores)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
    float estatura;
    float peso;
};

int main() {
    vector<Persona> personas(12);

    // Leer datos de las personas
    for (int i = 0; i < 12; ++i) {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Estatura en (m): ";
        cin >> personas[i].estatura;
        cout << "Peso en (kg): ";
        cin >> personas[i].peso;
    }

    // Encontrar la persona de menor edad
    int menorEdad = personas[0].edad;
    string nombreMenorEdad = personas[0].nombre;
    for (int i = 1; i < 12; ++i) {
        if (personas[i].edad < menorEdad) {
            menorEdad = personas[i].edad;
            nombreMenorEdad = personas[i].nombre;
        }
    }
    cout << "Persona de menor edad: " << nombreMenorEdad << endl;

    // Calcular promedio de edades
    float sumaEdades = 0;
    for (const auto& persona : personas) {
        sumaEdades += persona.edad;
    }
    float promedioEdades = sumaEdades / 12;
    cout << "Promedio de edades: " << promedioEdades << endl;

    // Calcular promedio de pesos
    float sumaPesos = 0;
    for (const auto& persona : personas) {
        sumaPesos += persona.peso;
    }
    float promedioPesos = sumaPesos / 12;
    cout << "Promedio de pesos: " << promedioPesos << endl;

    return 0;
}
