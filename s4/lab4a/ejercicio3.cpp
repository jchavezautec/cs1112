#include <iostream>

using namespace std;

bool es_impar(int* n){
    return (*n) % 2;
}

int main(){
    int n1, n2;

    cout << "n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;

    if (es_impar(&n1))
        cout << "n1 es impar" << endl;
    else
        cout << "n1 es par" << endl;

    if (es_impar(&n2))
        cout << "n2 es impar" << endl;
    else 
        cout << "n2 es par" << endl;

    return 0;
}