#include "CAlumno.h"

int main()
{
    CAlumno* pAlumno = new CAlumno[3];
    
    pAlumno[0].setEdad(18);
    pAlumno[1].setEdad(19);
    pAlumno[2].setEdad(17);

    cout << "¿El primer alumno es mayor al segundo? -> ";
    std::cout << std::boolalpha;
    cout << pAlumno[0].esMayorDe(pAlumno[1]) << endl;

    cout << "¿El tercer alumno es mayor al segundo? -> ";
    std::cout << std::boolalpha;
    cout << pAlumno[2].esMayorDe(pAlumno[1]) << endl;

    cout << "¿El primer alumno es mayor al tercero? -> ";
    std::cout << std::boolalpha;
    cout << pAlumno[0].esMayorDe(pAlumno[2]) << endl;

    delete[] pAlumno;
    
    return 0;
}


