#include <iostream>

using namespace std;

float operacion(float* x, float* y, char op){
    switch (op){
        case '+':
            return (*x) + (*y);
        case '-':
            return (*x) - (*y);
        case '*':
            return (*x) * (*y);
        case '/':
            return (*x) / (*y);
        default:
            cout << "Ingrese un operador valido" << endl;
    }
}


int main(){
    float x = 3, y = 5;
    char op = '/';

    cout << operacion(&x,&y,op)<<endl;
    return 0;
}