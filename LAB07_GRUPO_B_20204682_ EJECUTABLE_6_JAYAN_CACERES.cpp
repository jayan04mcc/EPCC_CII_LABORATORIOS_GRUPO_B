#ifndef AVE_H
#define AVE_H
using namespace std;
#include <iostream>

class ave
{
protected:
    string estructura_osea="vertebrado";
    string tipo_sangre="caliente";
    string clase="oviparo";
public:
    ave();
    ~ave();
    void caminar();

};

#endif // AVE_H
//********************************************************
#include "ave.h"

ave::ave()
{
    //ctor
}

ave::~ave()
{
    //dtor
}
void ave::caminar(){
cout<<"caminan...";
}
//****************************************
#define PATO_H
#include "ave.h"
using namespace std;
#include <iostream>
class pato : public ave
{
private:
    string color_plumas2;
    string capacidad_volar2;
    string habitad2;

public:
    pato(string,string,string);
    ~pato();
    void datos_pato();

};

#endif // PATO_H
//*******************************************
#include <iostream>
#include "ave.h"
pato::pato(string _color_plumas2,string _capacidad_volar2,string _habitad2)
{
    color_plumas2=_color_plumas2;
    capacidad_volar2=_capacidad_volar2;
    habitad2=_habitad2;
    //ctor
}

pato::~pato()
{
    //dtor
}
void pato::datos_pato(){

cout<<"caracteristicas generales "<<endl<<estructura_osea<<endl<<tipo_sangre<<endl<<clase<<endl;
cout<<"caracteristicas principales: "<<endl<<color_plumas2<<endl<<capacidad_volar2<<endl<<habitad2<<endl;
}
//*****************************************
#ifndef GANSO_H
#define GANSO_H
#include "ave.h"
using namespace std;
#include <iostream>

class ganso : public ave
{
private:
    string color_plumas1;
    string capacidad_volar1;
    string habitad1;
public:
    ganso(string,string,string);
    ~ganso();
    void datos_ganso();

};

#endif // GANSO_H
//**************************************
#include "ganso.h"
#include "ave.h"
using namespace std;
#include <iostream>
ganso::ganso(string _color_plumas1,string _capacidad_volar1,string _habitad1)
{
    color_plumas1=_color_plumas1;
    capacidad_volar1=_capacidad_volar1;
    habitad1=_habitad1;
    //ctor
}

ganso::~ganso()
{
    //dtor
}

void ganso::datos_ganso(){

cout<<"caracteristicas generales "<<endl<<estructura_osea<<endl<<tipo_sangre<<endl<<clase<<endl;
cout<<"caracteristicas principales: "<<endl<<color_plumas1<<endl<<capacidad_volar1<<endl<<habitad1<<endl;
}

//**********************************************
#ifndef GALLINA_H
#define GALLINA_H
using namespace std;
#include <iostream>
#include <ave.h>
class gallina : public ave
{
private:
    string color_plumas3;
    string capacidad_volar3;
    string habitad3;
public:
    gallina(string,string,string);
    ~gallina();
    void datos_gallina();

};

#endif // GALLINA_H
//**************************************
#include "gallina.h"
using namespace std;
#include <iostream>
#include "ave.h"
gallina::gallina(string _color_plumas3,string _capacidad_volar3,string _habitad3)
{
    color_plumas3=_color_plumas3;
    capacidad_volar3=_capacidad_volar3;
    habitad3=_habitad3;
    //ctor
}

gallina::~gallina()
{
    //dtor
}
void gallina::datos_gallina(){

cout<<"caracteristicas generales "<<endl<<estructura_osea<<endl<<tipo_sangre<<endl<<clase<<endl;
cout<<"caracteristicas principales: "<<endl<<color_plumas3<<endl<<capacidad_volar3<<endl<<habitad3<<endl;
}
//************************************
#include <iostream>
#include "pato.h"
#include "gallina.h"
#include "ganso.h"
#include "ave.h"
using namespace std;

int main()
{
    cout<<"caracteristicas de los gansos:"<<endl;
    ganso p1=ganso("plumaje_blanco","pueden_volar","habitad_tundra");
    p1.datos_ganso();
    cout<<endl;
    cout<<"caracteristicas de los patos:"<<endl;
    pato p2=pato("plumaje_amarillo","no_pueden_volar","habitad_lagos");
    p2.datos_pato();
    cout<<endl;
    cout<<"caracteristicas de las gallinas:"<<endl;
    gallina p3=gallina("plumaje_variados_en_cafe","no_pueden_volar","corrales_y_granjas");
    p3.datos_gallina();
    return 0;
}



