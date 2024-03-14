// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 13/03/2024

// Fecha modificación: 13/03/2024

// Numero de ejericio: 7

// Problema planteado:Lee por teclado un año y calcula y muestra si es bisiesto.

#include <iostream>

using namespace std;

int main()
{
    int lapso;
    
    cin>>lapso;
    
    if(lapso%4!=0||(lapso%100==0 && lapso%400!=0))
    {
        cout<<"El año no es bisiesto"<<endl;
    }
    else{
        cout<<"El año es bisiesto"<<endl;
    }

    return 0;
}
