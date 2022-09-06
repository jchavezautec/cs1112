#include <iostream>

using namespace std;

int main(){
	int val = 3;	
	int *ptr; 		// 'ptr' puede apuntar a una direccion
					//  de memoria que almacene un numero
					//  entero.

	ptr = &val;		// El operador '&' indica que estamos asignando
					// la direccion de la variable 'val' al puntero
					// 'ptr'. En otras palabras '&' retorna la direccion
					// de una variable.
	
	/* 
	 * El tipo de dato de 'ptr' y 'val' debe de ser el mismo.	
	*/

	cout << "ptr = " << ptr << ", ";
	cout << "*ptr = " << *ptr << ", ";
	cout << "val = " << val << endl;
	
	// Cambiando el valor de 'val'
	
	*ptr = 4; 		// El operador '*' retorna el valor de la variable
					// localizada en la direccion especificada por el 
					// puntero 'ptr'.

	cout << "val = " << val << endl;

	return 0;
}
