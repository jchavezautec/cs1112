#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    int *p = new int[n];

    for (int i = 0; i < n; i++)
        p[i] = i * 10;

    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
    cout << endl;

    return 0;
}