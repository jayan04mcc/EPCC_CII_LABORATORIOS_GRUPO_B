#ifndef PRODUCTOS_BANCARIOS_H
#define PRODUCTOS_BANCARIOS_H
#include <iostream>
using namespace std;

class productos_bancarios
{
protected:
    double saldo=2000;
    string cliente="pedro";
    int numproductos=40;
public:
    productos_bancarios();
    ~productos_bancarios();
    void imprimir();


};

#endif // PRODUCTOS_BANCARIOS_H
//****************************************
#include "productos_bancarios.h"

productos_bancarios::productos_bancarios()
{
    //ctor
}

productos_bancarios::~productos_bancarios()
{
    //dtor
}
//************************************
#ifndef CUENTA_H
#define CUENTA_H
#include "productos_bancarios.h"
#include <iostream>
using namespace std;
class cuenta :public productos_bancarios
{
public:
    cuenta();
    ~cuenta();
    void imprimir();


};

#endif // CUENTA_H
//************************************
#include "cuenta.h"

cuenta::cuenta()
{
    //ctor
}

cuenta::~cuenta()
{
    //dtor
}
//****************************
#ifndef CUENTA_JOVEN_H
#define CUENTA_JOVEN_H
#include "cuenta.h"
#include <iostream>
using namespace std;
class cuenta_joven :private cuenta
{
public:
    cuenta_joven();
    ~cuenta_joven();
    void imprimir();

};

#endif // CUENTA_JOVEN_H


//**************************************
#include "cuenta_joven.h"

cuenta_joven::cuenta_joven()
{
    //ctor
}

cuenta_joven::~cuenta_joven()
{
    //dtor
}
void cuenta_joven::imprimir(){
    cout<<"el saldo es :"<<saldo<<endl;
    cout<<"el cliente es :"<<cliente<<endl;
    cout<<"el num de productos es :"<<numproductos<<endl;
}



//*******************************************

#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "productos_bancarios.h"
#include <iostream>
using namespace std;
class prestamo :protected productos_bancarios
{
public:
    prestamo();
    ~prestamo();
    void imprimir();

};

#endif // PRESTAMO_H
//****************************
#include "prestamo.h"

prestamo::prestamo()
{
    //ctor
}

prestamo::~prestamo()
{
    //dtor
}
//*********************************
#ifndef HIPOTECA_H
#define HIPOTECA_H
#include "prestamo.h"
#include <iostream>
using namespace std;
class hipoteca :public prestamo
{
public:
    hipoteca();
    ~hipoteca();
    void imprimir();

};

#endif // HIPOTECA_H
//********************************
#include "hipoteca.h"

hipoteca::hipoteca()
{
    //ctor
}

hipoteca::~hipoteca()
{
    //dtor
}
void hipoteca::imprimir(){
    cout<<"el saldo es :"<<saldo<<endl;
    cout<<"el cliente es :"<<cliente<<endl;
    cout<<"el num de productos es :"<<numproductos<<endl;
}
//*******************************************************
#include <iostream>
#include "productos_bancarios.h"
#include "cuenta.h"
#include "cuenta_joven.h"
#include "prestamo.h"
#include "hipoteca.h"
using namespace std;

int main()
{
    cuenta_joven p1=cuenta_joven();
    p1.imprimir();
    cout<<endl;
    hipoteca p2=hipoteca();
    p2.imprimir();


    system("pause");
}


