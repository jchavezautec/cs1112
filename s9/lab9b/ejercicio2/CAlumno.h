#include <iostream>

using namespace std;

class CAlumno{
    private:
        string _nombre;
        string _apellido;
        int _edad;
        int _creditos;
    public:
        CAlumno(){
            _nombre = "";
            _creditos = 0;
        }
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

        int getCreditos(){
            return _creditos;
        }

        bool esMayorDe(CAlumno obj){
            if (_edad > obj.getEdad())
                return true;
            return false;
        }
};