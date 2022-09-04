#include <iostream>
#include <vector>

using namespace std;

const float TASA = 0.08;

float f_interes(int t){
    if (t == 0)
        return 0;
    else
        return TASA + f_interes(t - 1);
}

int main(){
    float monto;
    int t;

    cout << "Ingrese el monto: ";
    cin >> monto;
    cout << "Ingrese el t (entero): ";
    cin >> t;

    cout << "El capital es: " << monto / (1 + f_interes(t)) << endl;
    
    return 0;
}