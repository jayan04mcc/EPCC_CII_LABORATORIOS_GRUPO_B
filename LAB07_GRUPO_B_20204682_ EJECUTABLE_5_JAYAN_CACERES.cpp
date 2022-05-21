#ifndef OPERACION_BASE_H
#define OPERACION_BASE_H
using namespace std;
#include <iostream>

class operacion_base
{
protected:
    int operador;
public:
    operacion_base();
    ~operacion_base();
    void setoperador();
    int getoperador();

};

#endif // OPERACION_BASE_H
//************************************
#include "operacion_base.h"

operacion_base::operacion_base()
{
    //ctor
}

operacion_base::~operacion_base()
{
    //dtor
}

//******************************************
#ifndef OPERACION_FACTORIAL_H
#define OPERACION_FACTORIAL_H
#include "operacion_base.h"
using namespace std;
#include <iostream>
class operacion_factorial :public operacion_base
{
private:
    int operador;
public:
    operacion_factorial();
    ~operacion_factorial();
    void setoperador(int);
    int getoperador();
    int devolverfactorial();

};

#endif // OPERACION_FACTORIAL_H
//******************************************
#include "operacion_factorial.h"
using namespace std;
#include <iostream>
operacion_factorial::operacion_factorial()
{
    //ctor
}

operacion_factorial::~operacion_factorial()
{
    //dtor
}
void operacion_factorial::setoperador(int _operador){
    operador=_operador;
}
int operacion_factorial::getoperador(){
    return operador;
}

int operacion_factorial::devolverfactorial(){
    int aux=1;
    for(int i=1;i<=getoperador();i++){
            aux=aux*i;
    }
    cout<<"el factorial del numero "<<getoperador()<<" es "<<aux;
    return aux;


}
//*********************************
#include <iostream>
#include "operacion_base.h"
#include "operacion_factorial.h"
using namespace std;

int main()
{
    operacion_factorial p1;
    p1.setoperador(5);
    p1.devolverfactorial();
    return 0;


    }

