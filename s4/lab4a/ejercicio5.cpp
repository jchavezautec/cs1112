#include <iostream>

using namespace std;

void tiempo_transcurrido(int* t_start, int* t_end){
    int dt = (*t_end) - (*t_start);

    int hor = dt / 3600;
    int min = (dt % 3600) / 60;
    int seg = (dt % 3600) % 60;

    cout << hor << ":" << min << ":" << seg << endl;
}


int main(){
    int x, y;
    cout << "t_start: ";
    cin >> x;
    cout << "t_end: ";
    cin >> y;
    tiempo_transcurrido(&x,&y);
    return 0;
}