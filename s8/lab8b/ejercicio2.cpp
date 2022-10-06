#include "CVector.h"

CVector::CVector(entero _tamanio, entero _valor){
    tamanio = _tamanio;
    elementos = new entero[_tamanio];
    for (int i = 0; i < _tamanio; i++)
        elementos[i] = _valor;
}

CVector::CVector(const CVector &otro_vector){
    tamanio = otro_vector.tamanio;
    elementos = new entero[tamanio];
    for (int i = 0; i < tamanio; i++){
        elementos[i] = otro_vector.elementos[i];
    }
}

CVector::~CVector(){
    delete[] elementos;
}

int CVector::getTamanio(){
    return tamanio;
}

entero CVector::getElemento(entero posicion){
    return elementos[posicion];
}

void CVector::setElemento(entero elemento, entero posicion){
    elementos[posicion] = elemento;
}

void CVector::redimensionar(){
    array_entero tmp = new entero[tamanio+1];
    for (int i=0; i<tamanio; i++)
        tmp[i] = elementos[i];

    delete[] elementos;
    elementos = tmp;
    tamanio = tamanio + 1;
}
void CVector::insertar(entero elemento, entero posicion){
    redimensionar();
    entero t = elementos[posicion];
    for (int i=posicion; i < tamanio-1; i++){
        t = elementos[i + 1];
        elementos[i + 1] = elementos[i];
    }
    elementos[posicion] = elemento;
}
void CVector::agregar(entero elemento){
    redimensionar();
    elementos[tamanio-1] = elemento;
}

int main()
{
    //vector sin inicializar
    CVector vector1();

    //vector inicializado con tamaño 5 y elementos inicializados con 1
    CVector vector2(5, 1);

    //vector inicializado a partir de otro vector
    CVector vector3(vector2);//[1,1,1,1,1]

    //reemplazar el valor de un elemento
    vector3.setElemento(20, 0);//[20,1,1,1,1]
    //insertar elemento en una posicion especifica
    vector3.insertar(25, 4);//[20,1,1,1,25,1]
    //agregar elemento al final del vector
    vector3.agregar(10);//[20,1,1,1,25,1,10]

    //obtener el tamaño actual del vector
    entero n = vector3.getTamanio();//n = 7
    for(int i=0; i<n; i++)
        cout<<vector3.getElemento(i)<<endl;

    return 0;
}
