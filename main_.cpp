#include <iostream>
#include <cmath>
#include "Triangulo.cpp"
#include "Punto.cpp"
using namespace std;

int main()
{
    cout<<"Programa Triangulo"<<endl;
    cout<<"Test..."<<endl;
    Punto p1(0, 0), p2(0,3), p3(3,0);
    Triangulo t1(p1,p2,p3);
    cout<<"Area: " <<t1.Area()<<endl;
    cout<<"Perimetro: "<<t1.Perimentro()<<endl;

    Triangulo t(p1,p2,p3);
    Punto puntos[3] = {p1, p2, p3};
    Triangulo trian[3] = {t, t, t};
    double x, y;
    for(int i=0; i<3; i++)
    {
        cout<<"Triangulo "<<i+1<<": "<<endl;
        for(int e=0; e<3; e++)
        {
            cout<<"Vertice "<<e+1<<": "<<endl;
            cin>>x;
            cin>>y;
            puntos[e].setX(x);
            puntos[e].setY(y);
        }
        Triangulo t_(puntos[0], puntos[1], puntos[2]);
        trian[i] = t_;
        cout<<"Datos"<<endl;
        cout<<"Area: " <<trian[i].Area()<<endl;
        cout<<"Perimetro: "<<trian[i].Perimentro()<<endl;
    }
    return 0;
};