#include <iostream>
using namespace std;

void corrigeNota(float* notaPtr, float puntos) {
    *notaPtr = *notaPtr + puntos;
}
    
int main() {
    float notaPc1; float puntos;
    cout<<"Ingrese nota PC1: ";
    cin>>notaPc1;
    cout<<"Ingrese puntos : ";
    cin>>puntos;

    corrigeNota(&notaPc1, puntos);
    cout<<"Resultado = "<<notaPc1<<"\n";
    return 0;
}
