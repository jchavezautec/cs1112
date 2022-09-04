#include <iostream>

using namespace std;

int prod(int a, int b){
    if (b == 1)
        return a;
    else{
        return a + prod(a, b - 1); 
    }
}

int main(){
    int a, b;

    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;

    cout << "A . B = " << prod(a,b) << endl;
    
    return 0;
}