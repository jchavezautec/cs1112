#include <iostream>

const float tarifa_regular = 0.4522;
const float tarifa_especial = 0.7;

int main() {
  float consumo_kW, consumo_soles;

  std::cout << "Ingrese su consumo en kW: ";
  std::cin >> consumo_kW;

  consumo_soles = consumo_kW * tarifa_regular;

  // Si el consumo en kW es mayor a 100kW, se asigna una tarfica adicional
  if (consumo_kW - 100 > 0) {
    consumo_soles = consumo_soles + tarifa_especial * (consumo_kW - 100);
  }

  std::cout << "Recibo: " << consumo_soles << std::endl;

  return 0;
}