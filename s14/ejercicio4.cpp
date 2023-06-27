// Contador de palabras para el archivo 'archivo.txt'

#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main() {
    // Leer un archivo con ifstream
    ifstream archivo2;
    archivo2.open("archivo.txt");
    string linea;
    int k = 1;

    map<string, int> contador;
    while (getline(archivo2, linea)) {
        cout << k << ". ";
        cout << linea << endl;
        string palabra = "";
        for (int j = 0; j < linea.length(); j++) {
            if (linea[j] == ' ') {
                if (contador.find(palabra) == contador.end())
                    contador[palabra] = 1;
                else
                    contador[palabra]++;
                palabra = "";
            }
            else {
                palabra += linea[j];
            }
        }
        k++;
    }

    archivo2.close();

    for (auto it = contador.begin(); it != contador.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}