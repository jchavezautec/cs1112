#include <iostream>

using namespace std;

int potencia(int x, int n){
    if (n == 0)
        return 1;
    else{
        return x * potencia(x, n - 1); 
    }
}

int main(){
    int x, n;

    cout << "Ingrese X: ";
    cin >> x;
    cout << "Ingrese n: ";
    cin >> n;

    cout << "X^n = " << potencia(x,n) << endl;
    
    return 0;
}