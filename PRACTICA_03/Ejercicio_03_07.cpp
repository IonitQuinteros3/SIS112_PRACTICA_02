// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 13/03/2024

// Fecha modificaci�n: 13/03/2024

// Numero de ejericio: 7

// Problema planteado:Lee por teclado un a�o y calcula y muestra si es bisiesto.

#include <iostream>

using namespace std;

int main()
{
    int lapso;
    
    cin>>lapso;
    
    if(lapso%4!=0||(lapso%100==0 && lapso%400!=0))
    {
        cout<<"El a�o no es bisiesto"<<endl;
    }
    else{
        cout<<"El a�o es bisiesto"<<endl;
    }

    return 0;
}
