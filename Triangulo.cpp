#ifndef TRIANGULO_H
#define TRIAMGULO_H

#include <iostream>
#include "Punto.cpp"
#include <cmath>
using namespace std;

class Triangulo
{
    private:
        Punto v1, v2, v3;

    public:
        Triangulo();
        Triangulo(Punto, Punto, Punto);
        void setVertice1(Punto);
        void setVertice2(Punto);
        void setVertice3(Punto);

        Punto getVertice1();
        Punto getVertice2();
        Punto getVertice3();

        double distancia(Punto, Punto);
        double Area();
        double Perimentro();
};

Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3)
{
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

void Triangulo::setVertice1(Punto _v1){
    v1 = _v1;
}
void Triangulo::setVertice2(Punto _v2){
    v2 = _v2;
}
void Triangulo::setVertice3(Punto _v3){
    v3 = _v3;
}
Punto Triangulo::getVertice1(){
    return v1;
}
Punto Triangulo::getVertice2(){
    return v2;
}
Punto Triangulo::getVertice3(){
    return v3;
}

//Others
double Triangulo::distancia(Punto vA, Punto vB){
    double xA = vA.getX();
    double xB = vB.getX();
    double dx = abs(xA-xB);

    double yA = vA.getY();
    double yB = vB.getY();
    double dy = abs(yA-yB);
    double dis = sqrt((pow(dx,2))+(pow(dy,2)));
    return dis;
};

//Perimetro
double Triangulo::Perimentro(){
    double d1 = distancia(v1,v2);
    double d2 = distancia(v2,v3);
    double d3 = distancia(v3, v1);
    double perimetro = d1 + d2 + d3;
    return perimetro;
};
//Area
double Triangulo::Area(){
    return 0.5*abs(((v1.getX()*v2.getY())+(v2.getX()*v3.getY())+(v3.getX()*v1.getY()))-
    ((v2.getX()*v1.getY())+(v3.getX()*v2.getY())+(v1.getX()*v3.getY())));
};


#endif // TRIANGULO_H

