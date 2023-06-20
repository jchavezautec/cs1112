#include <iostream>
using namespace std;

class Comp {
friend ostream& operator<<(ostream&, const Comp&);
friend Comp operator+(double, const Comp&);
private:
    double real;
    double imag;
public:
    Comp();
    Comp(double, double);
    double operator[](int) const;
    double& operator[](int);
    Comp operator+(const Comp&) const;
    Comp operator+(double) const;
};

Comp::Comp(): real(0), imag(0) {}
Comp::Comp(double r, double i): real(r), imag(i) {}

double Comp::operator[](int x) const {
    if (x == 0) return real;
    else if (x == 1) return imag;
    else throw "indice incorrecto";
}

double& Comp::operator[](int x) {
    if (x == 0) return real;
    else if (x == 1) return imag;
    else throw "indice incorrecto";
}

ostream& operator<<(ostream& s, const Comp& c) {
    s << c.real;
    if (c.imag >= 0) 
        s << "+";
    s << c.imag << "i";
    return s;
}

Comp Comp::operator+(const Comp& c) const {
    return Comp(real + c.real, imag + c.imag);
}

Comp Comp::operator+(double r) const {
    return Comp(real + r, imag);
}

Comp operator+(double r, const Comp& c) {
    return Comp(r + c.real, c.imag);
}

int main() {
    Comp c1(1,2);
    cout << "c1 = " <<c1 << endl;

    c1[0] = 3.;
    c1[1] = 4.;
    cout << "c1(mod) = "<< c1 << endl;

    Comp c2(5,6);
    cout << "c2 = " <<c2 << endl;

    Comp c3 = c1 + c2;
    cout << "c3 = " <<c3 << endl;

    Comp c4 = c1 + 7.5;
    cout << "c4 = " <<c4 << endl;

    Comp c5 = 7.5 + c1;
    cout << "c5 = " <<c5 << endl;

    return 0;
}