#ifndef Triangulo_hpp
#define Trianglo_hpp

#include <stdio.h>
#include "Punto.hpp"

class Triangulo {
    private:
        Punto v1, v2, v3;
public:
    Triangulo();
    Triangulo(Punto _v1, Punto _v2, Punto _v3);

    Punto getVertice1();
    Punto getVertice2();
    Punto getVertice3();

    void setVertice1(Punto _v1);
    void setVertice2(Punto _v2);
    void setVertice3(Punto _v3);

    double perimetro();
    double area();
    std::string str();
};


#endif /* Triangulo_hpp */