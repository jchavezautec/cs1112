#include <cmath>
#include <iostream>

int main() {
  float x1, y1, x2, y2, d;

  /*
  Los valores de x1 y y1 se deberen ingresar en la misma linea, 
  separados por un espacio. Al terminar de ingresar y1 se debe 
  presionar la tecla ENTER.
  */
  
  std::cout << "Ingrese el primer punto (x y) : ";
  std::cin >> x1 >> y1;

  std::cout << "Ingrese el segundo punto (x y): ";
  std::cin >> x2 >> y2;

  // Formula para calcular la distancia entre puntos

  d = pow((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2), 0.5);

  std::cout << "La distancia entre los puntos es: " << d << std::endl;

  return 0;
}