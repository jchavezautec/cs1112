#include <iostream>
#include <cmath>

using namespace std;

int sum(int num){
    if (num == 1)
        return 1;
    else
        return num * num + sum(num-1);
}


int main(){
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    cout << "La suma de cuadrados hasta " << num << " es: " << sum(num) << endl;
    
    return 0;
}