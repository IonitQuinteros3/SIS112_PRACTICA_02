// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 5/03/2024

// Fecha modificación: 5/03/2024

// Numero de ejericio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro arreglo contiene los nombres 
// de los mismos y un tercer arreglo contiene la sigla de la carrera. Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>

using namespace std;
const int numEstudiantes = 5;
int main() {
    string nombres[numEstudiantes] = {"ANDY", "ADEMAR", "PABLO", "SARA", "WARA"};
    string carreras[numEstudiantes] = {"INB", "SIS", "IBB", "IMT", "INC"};
    double calificaciones[numEstudiantes] = {80.5, 71.2, 95.0, 60.8, 90.9};
    double sumaCalificaciones = 0;
    double promedio;
    double maxCalificacion = -1;
    double minCalificacion = 101;
    string nombreMax;
    string nombreMin;
    
    for (int i = 0; i < numEstudiantes; ++i) {
        sumaCalificaciones += calificaciones[i];
        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
            nombreMax = nombres[i];
        }
        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
            nombreMin = nombres[i];
        }
    }
    promedio = sumaCalificaciones / numEstudiantes;
    cout <<"El estudiante con la mayor calificacion es: " <<nombreMax <<" con " <<maxCalificacion <<" puntos." <<endl;
    cout <<"El estudiante con la menor calificacin es: " <<nombreMin <<" con " <<minCalificacion <<" puntos." <<endl;

    // Verifica la carrera con mejor desempe~no en relacion al promedio del curso
    string mejorCarrera;
    double mejorPromedioCarrera = 0;
    for (int i = 0; i < numEstudiantes; ++i) {
        double sumaCalificacionesCarrera = 0;
        int numEstudiantesCarrera = 0;
        for (int j = 0; j < numEstudiantes; ++j) {
            if (carreras[j] == carreras[i]) {
                sumaCalificacionesCarrera += calificaciones[j];
                ++numEstudiantesCarrera;
            }
        }
        double promedioCarrera = sumaCalificacionesCarrera / numEstudiantesCarrera;
        if (promedioCarrera > mejorPromedioCarrera) {
            mejorPromedioCarrera = promedioCarrera;
            mejorCarrera = carreras[i];
        }
    }
    cout <<"La carrera con mejor desempe~no en relacion al promedio del curso es: " <<mejorCarrera <<endl;
    return 0;
}




