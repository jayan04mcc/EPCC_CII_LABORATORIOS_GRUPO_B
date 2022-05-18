#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using namespace std;
class persona
{
protected:
    string nombre="jayan";
    int edad=20;

public:
     persona();
    ~persona();
    void metodo();

};

#endif // PERSONA_H
//************************************
#include "persona.h"
using namespace std;
persona::persona()
{
    //ctor
}

persona::~persona()
{
    //dtor
}

void persona::metodo(){
    cout<<"el nombre de la persona es "<<nombre<<endl;
    cout<<"la edad de la persona es "<<edad;
}
//**************************************************
#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
#include <iostream>

class alumno :public persona
{
private:
    string nombre2;
    int edad2;

public:
    alumno(string,int);
    ~alumno();
    void metodo2();


};



#endif // ALUMNO_H
//*************************************
#include "alumno.h"
using namespace std;
alumno::alumno(string _nombre2,int _edad2)
{
    nombre2=_nombre2;
    edad2=_edad2;
    //ctor
}

alumno::~alumno()
{
    //dtor
}

void alumno::metodo2(){
    cout<<"el nombre del alumno es "<<nombre2<<" y de la persona es "<<nombre<<endl;
    cout<<"la edad del alumno es "<<edad2<<" y de la persona es "<<edad;



}
//********************************************************************************
#include <iostream>
#include "alumno.h"
#include "persona.h"
using namespace std;

int main()
{
    alumno p1=alumno("juan",12);
    p1.metodo2();
}
