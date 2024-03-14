// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 12/03/2024

// Fecha modificaci�n: 12/03/2024

// Numero de ejericio: 1

// Problema planteado: . Escribe un programa que muestre por consola los n�meros de 1 a 100 (ambos incluidos y con un salto de l�nea entre cada impresi�n), sustituyendo los siguientes:
//- M�ltiplos de 3 por la palabra "fizz".
//- M�ltiplos de 5 por la palabra "buzz".
//- M�ltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz"

#include <iostream>

using namespace std;

int main(){
	
    for (int i=1; i<=100; ++i){
        if (i % 3 == 0 && i % 5 == 0){
            cout << "fizzbuzz" << endl;
        }   else if (i % 3 == 0){
            cout << "fizz" << endl;
        }   else if (i % 5 == 0){
            cout << "buzz" << endl;
        }   else {
            cout << i << endl;
        }
        
    } return 0;
    
}
