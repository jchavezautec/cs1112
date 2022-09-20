#include <iostream>
#include <random>
#include <time.h>

using namespace std;

void generar_matriz_aleatoria(int **matriz, int filas, int columnas) {
  srand(time(NULL));

  for (int i = 0; i < filas; i++)
    for (int j = 0; j < columnas; j++)
      matriz[i][j] = rand() % 101 + 100;
}

void mostrar_matriz(int **matriz, int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    cout << "| ";
    for (int j = 0; j < columnas; j++) {
      cout.width(3);
      cout << matriz[i][j] << " ";
    }
    cout << "|" << endl;
  }
}

void mostrar_pares(int **matriz, int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    cout << "| ";
    for (int j = 0; j < columnas; j++) {
      cout.width(3);
      if (matriz[i][j] % 2 == 0)
        cout << matriz[i][j] << " ";
      else
        cout << 0 << " ";
    }
    cout << "|" << endl;
  }
}

void mostrar_impares(int **matriz, int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    cout << "| ";
    for (int j = 0; j < columnas; j++) {
      cout.width(3);
      if (matriz[i][j] % 2 == 1)
        cout << matriz[i][j] << " ";
      else
        cout << 0 << " ";
    }
    cout << "|" << endl;
  }
}

void transpuesta(int **matriz1, int **matriz2, int filas, int columnas) {
  for (int i = 0; i < filas; i++)
    for (int j = 0; j < columnas; j++)
      matriz2[i][j] = matriz1[j][i];
}

void multiplicar_matrices(int **matriz1, int **matriz2, int filas, int columnas, int dim) {
  int sum;
  for (int i = 0; i < filas; i++) {
    cout << "| ";
    for (int j = 0; j < columnas; j++) {
      sum = 0;

      for (int k = 0; k < dim; k++) {
        sum += matriz1[i][k] * matriz2[k][j];
      }
      cout.width(3);
      cout << sum << " ";
    }
    cout << "|" << endl;
  }
}

void obtener_datos(int& filas, int& columnas){
  cout << "Ingrese la cantidad de filas: ";
  cin >> filas;
  cout << "Ingrese la cantidad de columnas: ";
  cin >> columnas;
}

void rotar_matriz(int** matriz1, int filas1, int columnas1){
  int *temp;
  for (int i=0; i < filas1-1; i++){
	temp = matriz1[i];
	matriz1[i] = matriz1[i+1];
    matriz1[i+1] = temp;	
  }
}

void menu(
  int** matriz1, 
  int** matriz2, 
  int filas1, 
  int columnas1, 
  int filas2,
  int columnas2)
  {
  int op = -1;
  bool matriz1_creada = false;
  bool matriz2_creada = false;

  while (op != 7) {
    cout << "\n MENU:" << endl;
    cout << "-------\n" << endl;
    cout << "1. Generar la matriz aleatoria" << endl;
    cout << "2. Mostrar solo pares" << endl;
    cout << "3. Mostrar solo impares" << endl;
	cout << "4. Generar la segunda matriz" << endl;
    cout << "5. Multiplicar matrices" << endl;
	cout << "6. Rotar matriz" << endl;
	cout << "7. Salir" << endl;
    cout << "\nIngrese una opcion[1-4]: ";
    cin >> op;
    switch (op) {
    case 1:
	  if (!matriz1_creada){
  	  	obtener_datos(filas1, columnas1);

 		matriz1 = new int *[filas1];
  		for (int i = 0; i < filas1; i++)
    		matriz1[i] = new int[columnas1];
		generar_matriz_aleatoria(matriz1, filas1, columnas1); 	
	  	matriz1_creada = true;
	  }
	  else
		cout << "La matriz es:";
	  cout << endl;
	  mostrar_matriz(matriz1, filas1, columnas1); 	 
      break;
    case 2:
      cout << endl;
      mostrar_pares(matriz1, filas1, columnas1);
      break;
    case 3:
      cout << endl;
      mostrar_impares(matriz1, filas1, columnas1);
      break;
	case 4:
	  if (!matriz2_creada){
  	  	obtener_datos(filas2, columnas2);
  		matriz2 = new int *[filas2];
  		for (int i = 0; i < filas2; i++)
    		matriz2[i] = new int[columnas2];
		generar_matriz_aleatoria(matriz2, filas2, columnas2);	
		matriz2_creada = true;
	  }
	  else
		cout << "La matriz es:";
	  cout << endl;
	  mostrar_matriz(matriz2, filas2, columnas2);
	  break;
	case 5:
	  if (matriz2_creada){
		if (columnas1 == filas2){
		  cout << endl;
	  	  multiplicar_matrices(matriz1, matriz2, filas1, columnas2, columnas1);
	  	}
		else
		  cout << "Las dos matrices no pueden multiplicarse (columnas1 != filas2)"<<endl;
	  }
	  else
		cout << "Primero tiene que crear la segunda matriz..."<<endl;
      break;
	case 6:
	  rotar_matriz(matriz1, filas1, columnas1);
	  mostrar_matriz(matriz1, filas1, columnas1);
	  break;
	case 7:
      for (int i = 0; i < filas1; i++)
    	delete[] matriz1[i];
  	  delete[] matriz1;
  
  	  for (int j = 0; j < filas2; j++)
    	delete[] matriz2[j];
  	  delete[] matriz2;
	  break;
    default:
      cout << "Ingrese una opción válida..." << endl;
    }
  }
}
int main() {
  int filas1, filas2;
  int columnas1, columnas2;

  int** m1;
  int** m2;

  cout << endl;
  menu(m1, m2, filas1, columnas1, filas2, columnas2);
	
  return 0;
}
