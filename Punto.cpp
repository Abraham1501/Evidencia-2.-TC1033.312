#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
using namespace std;

class Punto
{
    private:
        double x, y;
    public:
        Punto();
        Punto(double,double);
        double getX();
        double getY();
        void setX(double);
        void setY(double);
};

Punto::Punto()
{
    x = 0;
    y = 0;
}

Punto::Punto(double _x, double _y)
{
    x = _x;
    y = _y;
}
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}
void Punto::setX(double _x){
    x = _x;
}
void Punto::setY(double _y){
    y = _y;
}

#endif // PUNTO_H
