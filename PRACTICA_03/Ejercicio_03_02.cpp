// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 12/03/2024

// Fecha modificación: 12/03/2024

// Numero de ejericio: 2

// Problema planteado:Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Bool)según sean o no anagramas.
//- Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
//- NO hace falta comprobar que ambas palabras existan.
//- Dos palabras exactamente iguales no son anagrama.

#include <iostream>
#include <vector>

using namespace std;

bool SonAnagramas(const string& palabra1, const string& palabra2) {
  if (palabra1.length() != palabra2.length()) {
    return false;
  }

  vector<int> charCount(26, 0);

  for (char c : palabra1) {
    charCount[tolower(c) - 'a']++;
  }
  for (char c : palabra2) {
    charCount[tolower(c) - 'a']--;
  }

  for (int count : charCount) {
    if (count != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  string palabra1, palabra2;
  cout << "Ingrese la primera palabra: ";
  cin >> palabra1;
  cout << "Ingrese la segunda palabra: ";
  cin >> palabra2;

  if (SonAnagramas(palabra1, palabra2)) {
    cout << "Las palabras son anagramas." << endl;
  } else {
    cout << "Las palabras no son anagramas." << endl;
  }

  return 0;
}
