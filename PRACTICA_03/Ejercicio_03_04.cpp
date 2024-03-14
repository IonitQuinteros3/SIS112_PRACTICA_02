// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 12/03/2024

// Fecha modificación: 12/03/2024

// Numero de ejericio: 4

// Problema planteado:Crea una única función (importante que sólo sea una) que sea capaz de calcular y retornar el área de un polígono.
//- La función recibirá por parámetro sólo UN polígono a la vez.
//- Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
//- Imprime el cálculo del área de un polígono de cada tipo.

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

  // Seleccionar tipo de polígono
  cout << "Seleccione el tipo de polígono:" << endl;
  cout << "1. Triángulo" << endl;
  cout << "2. Cuadrado" << endl;
  cout << "3. Rectángulo" << endl;
  cin >> TIPO;


  switch (TIPO) {
    case 1:
      cout << "Introduzca la base del triángulo: ";
      cin >> LADO1;
      cout << "Introduzca la altura del triángulo: ";
      cin >> LADO2;
      break;
    case 2:
      cout << "Introduzca el lado del cuadrado: ";
      cin >> LADO1;
      break;
    case 3:
      cout << "Introduzca la base del rectángulo: ";
      cin >> LADO1;
      cout << "Introduzca la altura del rectángulo: ";
      cin >> LADO2;
      break;
  }


  float AREA = calcularArea(TIPO, LADO1, LADO2);
  if (AREA != -1) {
    cout << "El área del polígono es: " << AREA << endl;
  } else {
    cout << "Tipo de polígono no válido." << endl;
  }

  return 0;
}
