#include <fstream>
#include <iostream>

using namespace std;

int main(){
    // Escribir un archivo con ifstream
    string archivo;
    cout << "Ingrese el nombre del archivo: ";
    cin >> archivo;
    ofstream archivo2;
    archivo2.open(archivo);

    // Leer N usuarios
    int n;
    cout << "Ingrese la cantidad de usuarios: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        string nombre;
        int salario;
        cout << "Ingrese el nombre del usuario " << i + 1 << ": ";
        cin >> nombre;
        cout << "Ingrese el salario del usuario " << i + 1 << ": ";
        cin >> salario;
        archivo2 << nombre << " " << salario << endl;
    }

    archivo2.close();
}