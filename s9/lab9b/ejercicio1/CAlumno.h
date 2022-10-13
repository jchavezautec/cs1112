#include "CCurso.h"

class CAlumno{
    private:
        string _nombre;
        string _apellido;
        int _edad;
        int _creditos;
    public:
        CAlumno(string nombre, int creditos){
            _nombre = nombre;
            _creditos = creditos;
        }
        void setNombre(string nombre){
            _nombre = nombre;
        }
        void setApellidos(string apellido){
            _apellido = apellido;
        }
        void setEdad(int edad){
            _edad = edad;
        }

        string getNombre(){
            return _nombre;
        }
        string getApellidos(){
            return _apellido;
        }
        int getEdad(){
            return _edad;
        }

        void aprobar(CCurso* obj){
            _creditos += obj->getCreditos();
        }

        int getCreditos(){
            return _creditos;
        }
};