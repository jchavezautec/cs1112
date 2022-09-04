#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int maximo(int v[], int length){
    if (length == 0)
        return v[length];
    else
        return max(v[length-1], maximo(v, length - 1)); 
}

int main(){
    int v[10] = {5,3,4,6,7,1,39,4,5,1};

    cout << "El maximo elemento es: " << maximo(v, 10) << endl;
    
    return 0;
}