#include <iostream>

using namespace std;

int al_cuadrado1(int n){
	cout << "Direccion de 'n' en 'al_cuadrado1()': ";
	cout << &n << endl;

	return n * n;
}

void al_cuadrado2(int& n){
	cout << "Direccion de 'n' en 'al_cuadrado2(): '";
	cout << &n << endl;
	
	n = n * n;
}

void al_cuadrado3(int* n){
	cout << "Direccion de 'n' en 'al:cuadrado3()': ";
	cout << n << endl;

	*n = (*n) * (*n);
}

int main(){

	cout << "\nPaso por valor" << endl;
	cout << "--------------------------------------------------" << endl;
	
	int n1 = 3;
	cout << "Direccion de 'n1' en 'main()': " << &n1 << endl;
	cout << al_cuadrado1(n1) << " es el cuadrado de 'n1'" << endl;
    cout << "Al final 'n1' es igual a " << n1 << endl;

	cout << "\nPaso por referencia, usando &" << endl;
	cout << "--------------------------------------------------" << endl;
	
	int n2 = 3;
	cout << "Direccion de 'n2' en 'main()': " << &n2 << endl;
	al_cuadrado2(n2);
	cout << n2  <<  "es el cuadrado de 'n2'" << endl;
    cout << "Al final 'n2' es igual a " << n2 << endl;

	cout << "\nPaso por referencia, usando *" << endl;
	cout << "--------------------------------------------------" << endl;
	
	int n3 = 3;
	cout << "Direccion de 'n3' en 'main()': " << &n3 << endl;
	al_cuadrado3(&n3);
	cout << n3 << " es el cuadrado de 'n3'" << endl;
    cout << "Al final 'n3' es igual a " << n3 << endl;
    
	return 0;
}
