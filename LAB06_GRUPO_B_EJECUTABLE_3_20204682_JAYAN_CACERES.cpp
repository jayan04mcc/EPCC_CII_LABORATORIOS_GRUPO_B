//ejercicio3
#include <iostream>
#include "edad.h"
using namespace std;

int main()
{
    edad ej1=edad("jayan",4,8,2002,14,5,2022);
    ej1.mostrar_edad_y_nombre();
    return 0;
}

//********************************************
#ifndef EDAD_H
#define EDAD_H
#include <iostream>
using namespace std;
class edad
{
private:
    string apodo;
    int nac_dia;
    int nac_mes;
    int nac_anio;
    int hoy_dia;
    int hoy_mes;
    int hoy_anio;

    public:
        edad(string,int ,int,int,int,int,int);
        ~edad();
        void mostrar_edad_y_nombre();



};
//*******************************************************************
#include "edad.h"
#include "iostream"
edad::edad(string _apodo,int d_nac,int m_nac,int a_nac,int d_hoy,int m_hoy,int a_hoy)
{
    apodo=_apodo;
    nac_dia=d_nac;
    nac_mes=m_nac;
    nac_anio=a_nac;
    hoy_dia=d_hoy;
    hoy_mes=m_hoy;
    hoy_anio=a_hoy;
    //ctor
}

edad::~edad()
{
    //dtor
}
void edad::mostrar_edad_y_nombre(){

    if (hoy_mes>=nac_mes){
            int ed1;
            ed1=hoy_anio-nac_anio;
            cout<<"el nombre de la persona es "<<apodo<<" y su edad es "<<ed1<<endl;

    }
    else{
    int ed2;
    ed2=hoy_anio-nac_anio-1;
    cout<<"el nombre de la persona es "<<apodo<<" y su edad es "<<ed2<<endl;
    }
}

