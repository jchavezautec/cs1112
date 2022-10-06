#include <iostream>

using namespace std;

typedef int entero;
typedef int* array_entero;

class CVector
{
private:
    entero tamanio;
    array_entero elementos;
    entero maximo;
    void redimensionar();
public:
    //constructor vacio
    CVector();
    //constructor inicilizador
    CVector(entero _tamanio, entero _valor);
    //constructor copia
    CVector(const CVector &otro_vector);
    //destructor
    virtual ~CVector();
    //reemplazar elemento
    void setElemento(entero elemento, entero posicion);
    //insertar elemento
    void insertar(entero elemento, entero posicion);
    //agregar elemento
    void agregar(entero elemento);
    //getters
    entero getTamanio();
    entero getElemento(entero posicion);
};
