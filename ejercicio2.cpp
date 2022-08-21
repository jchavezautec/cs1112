#include <cmath>
#include <iostream>

int main() {
  int g1, m1, s1, g2, m2, s2;

  /*
  Los valores en grados, minutos y segundos se deberen ingresar
  en la misma linea, separados por un espacio. Al terminar de ingresar
  los segundos se debe presionar la tecla ENTER.
  */

  std::cout << "Ingrese el primer angulo (g1 m1 s1) : ";
  std::cin >> g1 >> m1 >> s1;

  std::cout << "Ingrese el segundo angulo (g1 m1 s1): ";
  std::cin >> g2 >> m2 >> s2;

  // Formula para calcular la distancia entre puntos

  int suma_g, suma_m, suma_s;

  suma_s = (s1 + s2) % 60;
  suma_m = (m1 + m2) % 60 + (s1 + s2) / 60;
  suma_g = (g1 + g2) + (m1 + m2) / 60;

  std::cout << "La suma de los dos angulos es: ";
  std::cout << suma_g << "° ";
  std::cout << suma_m << "\' ";
  std::cout << suma_s << "\"" << std::endl;

  return 0;
}