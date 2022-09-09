#include <iostream>

using namespace std;

void invertir(int* p){
   int temp = *p;
   *p = *(p+3);
   *(p+3) = temp;
   temp = *(p+2);
   *(p+2) = *(p+1);
   *(p+1) = temp;
}
void sumar1(int* p){
    *(p) += 1;
    *(p+1) += 1;
    *(p+2) += 1;
    *(p+3) += 1;
}
int main() {
    int arr[] = {1,5,7,9};
    cout << "size(arr) = " << sizeof(arr)/sizeof(arr[0])<< endl;
    int *p = &arr[0];
    cout << *p <<endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;
    cout << *(p+3) << endl;
    cout << "--------" << endl;
    sumar1(&arr[0]);
    cout << *p <<endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;
    cout << *(p+3) << endl;
    return 0;
}
