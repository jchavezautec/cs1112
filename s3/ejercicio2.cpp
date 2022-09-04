#include <iostream>
#include <string>

using namespace std;

void filtrarNota(int& nota){
    cout << "Ingrese la nota: ";
    cin >> nota;
    
    if (nota < 0 || nota > 20){
        cout << "Ingrese una nota en 0 y 20." << endl;
    }
}

string barraDeProgreso(float porcentaje){
    int barras   = (int) (porcentaje * 20);
    int espacios = 20 - barras;
    
    string resultado="";
    resultado += "0%";

    while (barras > 0){
        resultado += "||";
        barras--;
    }
    
    while (espacios > 0){
        resultado += "  ";
        espacios--;
    }
    resultado += to_string((int) (porcentaje * 100));
    resultado += "/100%";
    
    return resultado;
}

int main(){
    int nota;
    filtrarNota(nota);
    cout << "Mostrar Barra de Progreso:\n";
    float porcentaje = (float)nota / 20.;
    string barra = barraDeProgreso(porcentaje);

    cout << barra << endl;
    return 0;
}