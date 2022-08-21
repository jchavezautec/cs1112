#include <iostream>

const float PI = 3.14159;

int main() {
  float radianes;
  float grados_sexadecimales;
  
  std::cout << "Ingrese un numero en radianes: ";
  std::cin >> radianes;

  // Conversion: radianes --> grados sexadecimales
  grados_sexadecimales = radianes * 180. / PI;

  std::cout << radianes << " rad equivale a ";
  std::cout << grados_sexadecimales << "°" << std::endl;

  return 0;
}