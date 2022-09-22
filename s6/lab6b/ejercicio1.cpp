#include <iostream>

using namespace std;

void generar_matriz_aleatoria(int** matriz, int filas, int columas){
    for (int i=0; i < filas; i++)
        for (int j=0; j < columas; j++)
            matriz[i][j] = rand()%400;
}

void mostrar_matriz(int** matriz, int filas, int columas){
    cout << endl;
    for (int j=0; j < columas; j++){
        cout.width(3);
        cout << (char)(j + 65) << " ";
    }
    cout << endl;

    for (int i=0; i < filas; i++){
        for (int j=0; j < columas; j++){
            cout.width(3);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void reporte_total(int** matriz, int filas, int columas){
    int resane = 0;
    for (int i=0; i < filas; i++){
        for (int j=0; j < columas; j++){
            if (matriz[i][j] >= 100 and matriz[i][j] < 200)
                resane++;
        }
    }
    cout << "Total sectores que necesitan resane: ";
    cout << resane << endl;
}

void reporte_fila_sector(int** matriz, int fila, char sector){
    /*
        El caracter 'A' representa el numero 65 en la tabla ASCII
        'A' - 'A' = 0
        'B' - 'A' = 1
        'C' - 'A' = 2
    */
    int columna = sector - 'A';
    int numero_sector  = matriz[fila][columna];

    cout << "Este sectore contiene: ";
    cout <<  numero_sector << endl;

    switch(numero_sector){
        case 0 ... 99:
            cout << "No requiere mantenimiento" << endl;
            break;
        case 100 ... 199:
            cout << "Requiere resanado" << endl;
            break;
        case 200 ... 299:
            cout << "Requiere pintado" << endl;
            break;
        case 300 ... 399:
            cout << "Requiere arrego de pasto" << endl;
            break;
    }
}

void mostrar_menu(){
    cout << "MENU" << endl;
    cout << "----" << endl;
    cout << "1. Reporte total por necesidad de resane" << endl;
    cout << "2. Reporte por sector especifico" << endl;
    cout << "3. Reporte por letra/columna" << endl;
    cout << "4. Salir" << endl;
}

void menu_bucle(int**matriz, int filas, int columas){
    int opcion;
    do{
        mostrar_menu();
        cout << "Elija opcion (1-4): ";
        cin >> opcion;
        switch(opcion){
            case 1:
                reporte_total(matriz, filas, columas);
                break;
            case 2:
                char sector;
                int fila;

                cout << "Ingrese el sector (A-J): ";
                cin >> sector;
                cout << "Ingrese la fila (0-7): ";
                cin >> fila;
                reporte_fila_sector(matriz, fila, sector);
                break;
            case 3:
                //report_por_letras(matriz, filas, columnas);
                break;
            case 4:
                break;
            default:
                cout << "Ingrese un opcion valida..." << endl;
        }
    }while(opcion != 4);
}

int main(){
    int filas = 8;
    int columas = 10;

    int** matriz = new int*[filas];

    for (int i=0; i < filas; i++)
        matriz[i] = new int[columas];

    generar_matriz_aleatoria(matriz, filas, columas);
    mostrar_matriz(matriz, filas, columas);
    menu_bucle(matriz, filas, columas);

    for (int i=0; i < filas; i++)
        delete[] matriz[i];
    delete[] matriz;
}