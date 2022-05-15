//ejercicio 2
#ifndef NOTAS_H
#define NOTAS_H
#include <iostream>
using namespace std;
class notas
{
private:
    string nombre;
    int cui;
    float nota1;
    float nota2;
    float nota3;

    public:
        notas(string,int,float,float,float);
        ~notas();
        void mostrar_cui();
        void mostrar_nombre();
        void promedio();



};

#endif // NOTAS_H

//***************************************************
#include "notas.h"
#include "iostream"
#include "string"
#include <cmath>
using namespace std;

notas::notas(string _nombre,int _cui,float _nota1,float _nota2,float _nota3){
cui=_cui;
nombre=_nombre;
nota1=_nota1;
nota2=_nota2;
nota3=_nota3;
    //ctor
}
notas::~notas()
{
    //dtor
}
void notas::mostrar_cui(){
    cout<<"EL CUI DEL ALUMNO ES "<<cui<<endl;
}
void notas::mostrar_nombre(){
    cout<<"EL NOMBRE COMPLETO DEL ALUMNO ES"<<nombre<<endl;

}
void notas::promedio(){
    float pro;
    pro=(nota1+nota2+nota3)/3;
    cout<<"EL PROMEDIO DE SUS NOTAS ES "<<pro<<endl;
    if (pro>=10.5){
        cout<<"EL ALUMNO APROBO EXITOSAMENTE"<<endl;
    }
    else
        cout<<"EL ALUMNO REPROBO"<<endl;


}

