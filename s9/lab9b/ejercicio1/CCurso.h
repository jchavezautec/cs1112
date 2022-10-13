#ifndef CCURSO_H
#define CCURSO_H


#include <iostream>

using namespace std;

class CCurso{
    private:
        string _nombre;
        int _creditos;
    public:
        CCurso(string nombre, int creditos){
            _nombre = nombre;
            _creditos = creditos;
        }
        string getNombre(){
            return _nombre;
        }
        int getCreditos(){
            return _creditos;
        }    
};

#endif
