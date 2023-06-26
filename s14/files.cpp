#include <fstream>
#include <iostream>

using namespace std;

int main(){
    // Escribir un archivo con ofstream
    ofstream archivo;
    archivo.open("archivo.txt");
    archivo << "Hola mundo" << endl;
    archivo.close();

    // Leer un archivo con ifstream
    ifstream archivo2;
    archivo2.open("archivo.txt");
    string linea;
    while(getline(archivo2, linea)){
        cout << linea << endl;
    }
    archivo2.close();

    // Modificar un archivo con fstream
    fstream archivo3;
    archivo3.open("archivo.txt", ios::in | ios::out);
    archivo3 << "Hola mundo 2" << endl;
    archivo3.close();
}