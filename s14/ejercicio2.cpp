#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    // Leer un archivo con ifstream
    ifstream archivo2;
    archivo2.open("archivo.txt");
    string linea;
    int k = 1;
    while(getline(archivo2, linea)){
        cout << k << ". ";
        cout << linea << endl;
        for(int j = 0; j < linea.length(); j++){
            switch(linea[j]){
                case 'a':
                    a++;
                    break;
                case 'e':
                    e++;
                    break;
                case 'i':
                    i++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'u':
                    u++;
                    break;
            }
        }
        k++;
    }
    archivo2.close();
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
}