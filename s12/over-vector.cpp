#include <iostream>
using namespace std;

class Vector2D{
friend ostream& operator<<(ostream&, const Vector2D&);
private:
    double x;
    double y;
public:
    Vector2D();
    Vector2D(double, double);
    Vector2D operator+(const Vector2D&) const;
    double operator*(const Vector2D&) const;
};

/*
Nota: Un parametro de tipo const Vector2D& significa 
      que es una referencia a un objeto de tipo Vector2D
      que no puede ser modificado por la funcion.

      Esta declaracion se utiliza para evitar copiar el
      objeto al llamar la funcion. La copia podrian ocupar
      mucho tiempo y memoria.
*/

Vector2D::Vector2D(): x(0), y(0) {}
Vector2D::Vector2D(double x, double y): x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D& v) const {
    return Vector2D(x + v.x, y + v.y);
}

double Vector2D::operator*(const Vector2D& v) const {
    return x*v.x + y*v.y;
}

ostream& operator<<(ostream& s, const Vector2D& v) {
    s << "(" << v.x << "," << v.y << ")";
    return s;
}

int main() {
    Vector2D v1(1,2);
    Vector2D v2(3,4);
    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    Vector2D v3 = v1 + v2;
    cout << "v3 = v1 + v2 = " << v3 << endl;
    cout << "v1*v2 = " << v1*v2 << endl;
    return 0;
}