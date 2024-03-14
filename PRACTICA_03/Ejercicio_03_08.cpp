// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 13/03/2024

// Fecha modificación: 13/03/2024

// Numero de ejericio: 8

// Problema planteado:Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void IngresoFecha(vector<int>&);
vector<int> RestoFechas(vector<int>, vector<int>);
void DesarrolloResto(vector<int>);
void DesarrolloVector(vector<int>);

int main()
{
    vector<int> nacimiento(3,0);
    vector<int> actual(3,0);
    vector<int> resto(3,0);
    do
    {
        system("cls");
        cout<<"Ingrese Fecha Actual"<<endl;
        cout<<"*"<<endl;
        IngresoFecha(actual);
        cout<<"Ingrese Fecha  de Nacimiento"<<endl;
        cout<<"*"<<endl;
        IngresoFecha(nacimiento);
        
    }
    while(!(nacimiento[0]<=actual[0]));
    resto=RestoFechas(nacimiento,actual);
    DesarrolloResto(resto);
    return 0;
}

void IngresoFecha(vector<int>& momento)
{
    do
    {
        cout<<"Ingrese el año: ";
        cin>>momento[0];
    }while(!(momento[0]>=1 ));
    do
    {
        cout<<"Ingrese el mes: ";
        cin>>momento[1];
    }while(!(momento[1]>=0 && momento[1]<=12 ));
    do
    {
        cout<<"Ingrese el dia: ";
        cin>>momento[2];
    }while(!(momento[2]>=0 && momento[2]<=30 ));

}
vector<int>RestoFechas(vector<int> momentoNacimiento, vector<int> momentoActual)
{
    vector<int> momentoResto(3,0);
    momentoResto[0]=momentoActual[0]-momentoNacimiento[0];
    //Sustraccion entre los meses el actual y el de nacimiento
    if (momentoNacimiento[1]<=momentoActual[1]){
        momentoResto[1]=momentoActual[1]-momentoNacimiento[1];
    }
    else
    {
        momentoResto[1]=(12-momentoNacimiento[1])+momentoActual[1];
        momentoResto[1]--;
    }
    //Sustraccion entre los dias actuales y de nacimiento
    if (momentoNacimiento[2]<=momentoActual[2]){
        momentoResto[2]=momentoActual[2]-momentoNacimiento[2];
    }
    else
    {
        momentoResto[2]=(30-momentoNacimiento[2])+momentoActual[2];
        momentoResto[2]--;
    }
    return momentoResto;
};

void DesarrolloResto(vector<int> resto)
{
    
    cout<<endl<<"La Edad que tiene es de: "<<endl;
    cout<<"******"<<endl;
    if(resto[0]==1){
        cout<<resto[0]<<" año"<<endl;
    }
    else
    {
        cout<<resto[0]<<" año(s)"<<endl;
    }
    if(resto[1]==1){
        cout<<resto[1]<<" mes"<<endl;
    }
    else
    {
        cout<<resto[1]<<" mes(es)"<<endl;
    }
    if(resto[2]==1){
        cout<<resto[2]<<" dia"<<endl;
    }
    else
    {
        cout<<resto[2]<<" dia(s)"<<endl;
    }
}
void DesarrolloVector(vector<int> momento)
{
    cout<<endl<<"Presentar Vector"<<endl;
    for(int i:momento)
    {
        cout<<"Elemento: "<<i<<endl;
    }
}
