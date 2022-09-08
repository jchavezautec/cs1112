#include <iostream>

using namespace std;

void actualizaPuntosAzul(int *ptosAzul){
    int puntos;

    cout << "Ingrese puntos equipo azul: ";
    cin >> puntos;

    *ptosAzul += puntos;
}
void actualizaPuntosRojo(int *ptosRojo){
    int puntos;

    cout << "Ingrese puntos equipo rojo: ";
    cin >> puntos;

    *ptosRojo += puntos;
}

void imprimeTablaPuntos (int *ptosAzul, int *ptosRojo ){
    if ((*ptosAzul) > (*ptosRojo)){
        cout << "PRIMER PUESTO: EQUIPO AZUL con ";
        cout << *ptosAzul << endl;
        cout << "SEGUNDO PUESTO: EQUIPO ROJO con ";
        cout << *ptosRojo << endl;
    }
    else{
        cout << "PRIMER PUESTO: EQUIPO ROJO con ";
        cout << *ptosRojo << endl;
        cout << "SEGUNDO PUESTO: EQUIPO AZUL con ";
        cout << *ptosAzul << endl;
    }
}

void menu(){
    cout << "MENU" << endl;
    cout << "----" << endl;
    cout << "1. INGRESA PUNTOS AZUL" << endl;
    cout << "2. INGRESA PUNTOS ROJO" << endl;
    cout << "3. IMPRIMIR PUNTAJES" << endl;
    cout << "4. SALIR" << endl;
    cout << "\nIngrese opcion (1-4): ";
}

int main(){
    int ptosAzul = 0;
    int ptosRojo = 0;
    int opcion = -1;
    bool salir = false;

    while (true){
        menu();
        cin >> opcion;

        switch (opcion){
            case 1:
                actualizaPuntosAzul(&ptosAzul);
                break;
            case 2:
                actualizaPuntosRojo(&ptosRojo);
                break;
            case 3:
                imprimeTablaPuntos(&ptosAzul, &ptosRojo);
                break;
            case 4:
                salir = true;
                break;
            default:
                cout << "Ingrese una opción valida" << endl;
        }
        if (salir)
            break;

    }
    return 0;
}