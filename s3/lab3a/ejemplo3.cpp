#include <iostream>

using namespace std;

int invertir(int n){
    int result;

    while (n != 0){
        result = result * 10 + n % 10;
        n = n / 10;
    }
    return result;
}

bool es_capicua(int n){
    return n == invertir(n);
}

int main (){ 
    for( int i =1; i <= 10;i++){
        int n;
        cout << "Ingrese un numero: ";
        cin >> n;
        bool result = es_capicua(n);
        if(result)
            cout<< n << " es capicua." << endl;        
    }
    return 0;
}
