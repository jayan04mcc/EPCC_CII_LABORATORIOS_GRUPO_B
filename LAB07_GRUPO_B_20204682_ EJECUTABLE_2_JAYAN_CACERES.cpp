#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;
class color
{
protected:
    string color1="rojo";
    string color2="azul";
    string color3="amarillo";

    public:
        color();
        ~color();

};

#endif // COLOR_H
//****************************************
#include "color.h"

color::color()
{
    //ctor
}

color::~color()
{
    //dtor
}
//**************************************
#ifndef MATERIAL_H
#define MATERIAL_H
#include <iostream>
using namespace std;
class material
{
protected:
    string material1="madera";
    string material2="plastico";
    string material3="vidrio";


    public:
        material();
        ~material();


};

#endif // MATERIAL_H
//***************************************
#include "material.h"

material::material()
{

    //ctor
}

material::~material()
{
    //dtor
}

//****************************************
#ifndef OBJETO_H
#define OBJETO_H
#include "material.h"
#include "color.h"

class objeto : public color,material
{
protected:
    string obj1;
    string obj2;
    string obj3;

public:
    objeto(string,string,string);
    ~objeto();
    void describir();


};

#endif // OBJETO_H
//*******************************************
#include "objeto.h"
#include "color.h"
#include "material.h"
objeto::objeto(string _obj1,string _obj2,string _obj3)
{
    obj1=_obj1;
    obj2=_obj2;
    obj3=_obj3;
    //ctor
}

objeto::~objeto()
{
    //dtor
}
void objeto::describir(){
    cout<<"la "<<obj1<<" es de color "<<color1<<" y de material de "<<material1<<endl;
    cout<<"la "<<obj2<<" es de color "<<color2<<" y de material de "<<material2<<endl;
    cout<<"la "<<obj3<<" es de color "<<color3<<" y de material de "<<material3<<endl;

}
//*********************************************
#include <iostream>
#include "material.h"
#include "objeto.h"
using namespace std;

int main()
{
    objeto p1=objeto("mesa","carro","plato");
    p1.describir();

    system("pause");

}
