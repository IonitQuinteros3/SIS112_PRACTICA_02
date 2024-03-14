// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 12/03/2024

// Fecha modificaci�n: 12/03/2024

// Numero de ejericio: 4

// Problema planteado:Crea una �nica funci�n (importante que s�lo sea una) que sea capaz de calcular y retornar el �rea de un pol�gono.
//- La funci�n recibir� por par�metro s�lo UN pol�gono a la vez.
//- Los pol�gonos soportados ser�n Tri�ngulo, Cuadrado y Rect�ngulo.
//- Imprime el c�lculo del �rea de un pol�gono de cada tipo.

#include <iostream>

using namespace std;

float calcularArea(int TIPO, float LADO1, float LADO2 = 0) {
  if (TIPO == 1) {
    return (LADO1 * LADO2) / 2;
  } else if (TIPO == 2) {
    return LADO1 * LADO1;
  } else if (TIPO == 3) {
    return LADO1 * LADO2;
  } else {
    return -1;
  }
}

int main() {
  float LADO1, LADO2;
  int TIPO;

  // Seleccionar tipo de pol�gono
  cout << "Seleccione el tipo de pol�gono:" << endl;
  cout << "1. Tri�ngulo" << endl;
  cout << "2. Cuadrado" << endl;
  cout << "3. Rect�ngulo" << endl;
  cin >> TIPO;


  switch (TIPO) {
    case 1:
      cout << "Introduzca la base del tri�ngulo: ";
      cin >> LADO1;
      cout << "Introduzca la altura del tri�ngulo: ";
      cin >> LADO2;
      break;
    case 2:
      cout << "Introduzca el lado del cuadrado: ";
      cin >> LADO1;
      break;
    case 3:
      cout << "Introduzca la base del rect�ngulo: ";
      cin >> LADO1;
      cout << "Introduzca la altura del rect�ngulo: ";
      cin >> LADO2;
      break;
  }


  float AREA = calcularArea(TIPO, LADO1, LADO2);
  if (AREA != -1) {
    cout << "El �rea del pol�gono es: " << AREA << endl;
  } else {
    cout << "Tipo de pol�gono no v�lido." << endl;
  }

  return 0;
}
