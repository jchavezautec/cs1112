#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class Conjunto {
template <typename T1>
friend ostream& operator<<(ostream& os, const Conjunto<T1>& c);
private:
    vector<T> elementos;
public:
    Conjunto();
    Conjunto(vector<T>);
    void insertar(T);
    Conjunto<T>& operator<<(T);
    Conjunto<T> operator+(const Conjunto<T>&) const;
    Conjunto<T> operator-(const Conjunto<T>&) const;
    Conjunto<T> operator&(const Conjunto<T>&) const;
};

template <typename T>
Conjunto<T>::Conjunto() {}

template <typename T>
Conjunto<T>::Conjunto(vector<T> v) {
    for(int i = 0; i < v.size(); i++) {
        insertar(v[i]);
    }
}

template <typename T>
void Conjunto<T>::insertar(T elemento) {
    auto it = find(elementos.begin(), elementos.end(), elemento);
    if (it == elementos.end()) {
        elementos.push_back(elemento);
    }
}

template <typename T>
Conjunto<T>& Conjunto<T>::operator<<(T elemento) {
    insertar(elemento);
    return *this;
}

template <typename T>
Conjunto<T> Conjunto<T>::operator+(const Conjunto<T>& c) const {
    Conjunto<T> resultado;
    for (int i = 0; i < elementos.size(); i++) {
        resultado.insertar(elementos[i]);
    }
    for (int i = 0; i < c.elementos.size(); i++) {
        resultado.insertar(c.elementos[i]);
    }
    return resultado;
}

template <typename T>
Conjunto<T> Conjunto<T>::operator-(const Conjunto<T>& c) const {
    Conjunto<T> resultado;
    for (int i = 0; i < elementos.size(); i++) {
        resultado.insertar(elementos[i]);
    }
    for (int i = 0; i < c.elementos.size(); i++) {
        auto it = find(resultado.elementos.begin(), resultado.elementos.end(), c.elementos[i]);
        if (it != resultado.elementos.end()) {
            resultado.elementos.erase(it);
        }
    }
    return resultado;
}

template <typename T>
Conjunto<T> Conjunto<T>::operator&(const Conjunto<T>& c) const {
    Conjunto<T> resultado;
    for (int i = 0; i < elementos.size(); i++) {
        auto it = find(c.elementos.begin(), c.elementos.end(), elementos[i]);
        if (it != c.elementos.end()) {
            resultado.insertar(elementos[i]);
        }
    }
    return resultado;
}

template <typename T>
ostream& operator<<(ostream& os, const Conjunto<T>& c) {
    os << "{";
    for (int i = 0; i < c.elementos.size(); i++) {
        os << c.elementos[i];
        if (i < c.elementos.size() - 1) {
            os << ", ";
        }
    }
    os << "}";
    return os;
}


int main() {
    Conjunto<int> s1;
    s1.insertar(1);
    s1.insertar(2);
    s1<<3;
    s1.insertar(3);
    s1<<3;
    s1<<1;
    s1<<5;
    cout << "s1 = " << s1 << endl;
    
    vector<int> v = {2,4,4,2};
    Conjunto<int> s2(v);
    cout << "s2 = " << s2 << endl;

    Conjunto<int> s3 = s1 + s2;
    Conjunto<int> s4 = s1 - s2;
    Conjunto<int> s5 = s1 & s2;

    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;
}