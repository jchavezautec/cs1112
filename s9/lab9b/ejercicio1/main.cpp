#include "CAlumno.h"
#include "CCurso.h"

int main()
{
    CAlumno* pAlumno = new CAlumno("Jorge", 50);
    CCurso* pCurso = new CCurso("POO1", 4);

    cout<<"Creditos antes de llevar "<<pCurso->getNombre()
        <<": "<<pAlumno->getCreditos()<<endl;
    
    pAlumno->aprobar(pCurso);

    cout<<"Creditos despues de aprobar "<<pCurso->getNombre()
        <<": "<<pAlumno->getCreditos()<<endl;

    delete pAlumno; delete pCurso;
    
    return 0;
}


