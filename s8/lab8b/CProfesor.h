#include<iostream>

using namespace std;

class CProfesor{
    private:
        string _nombre;
        string _apellido;
        int _edad;
    public:
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
};