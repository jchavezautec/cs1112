#include <iostream>

using namespace std;

/*

Recordemos que:

  1 + 2 + 3 + ... + n = n(n+1)/2

Entonces:

  1                   = 1 x 2 / 2
  1 + 2               = 2 x 3 / 2
  1 + 2 + 3           = 3 x 4 / 2
  ...
  1 + 2 + 3 + ... + n = n x (n + 1) / 2

*/

int calcularAltura(int n){
  int altura = 0;

  while (true){
    altura++;
    n = n - altura * (altura + 1) / 2;
    if (n < 0){
      altura--;
      break;
    }
  }
  return altura;
}

void totalCubosXAltura(int& totalCubos, int altura){
  int i = 1;
  while (i <= altura){
    totalCubos += i * (i + 1) / 2;
    i++;
  }
}

void imprimirCubos(int n){
  int altura = calcularAltura(n);
  int base;
  int i = 1;
  cout << "\nPiramide:\n" << endl;

  while (i <= altura and n > 0){
    base = i * (i + 1) / 2;
    while (base > 0){
      cout << "*";
      base--;
    }
    cout << endl;
    i++;
  }
}

int main(){
  int numero, altura, cubos = 0;
  cout << "Ingrese numero de cubos: ";
  cin >> numero;

  altura = calcularAltura(numero);
  totalCubosXAltura(cubos, altura);

  cout << "La altura es: " << altura << endl;
  cout << "Cubos sobrantes: " << numero - cubos << endl;
  imprimirCubos(numero);

  return 0;
}