#ifndef Punto_h
#define Punto_h

#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

class Punto{
private:
    double x;
    double y;


public:
    Punto();
    Punto(double _x, double _y);

    double getX();
    double getY();

    void setX(double _x);
    void setY(double _y);

    double calculaDistancia(Punto p2);
    string str();
};
#endif