#ifndef DATOS_CORREO_H
#define DATOS_CORREO_H
template<class dat>

class datos_correo
{
private:
    dat inicial;
    dat nombre;

public:
    datos_correo(dat inicial="",dat nombre=" ");

dat getinicial(){

    return inicial;


}
dat getnombre(){
    return nombre;

}
};
template<class dat>
datos_correo<dat>::datos_correo(dat inicial,dat nombre){
this ->inicial=inicial;
this ->nombre=nombre;
}

#endif // DATOS_CORREO_H
//***************************************************
#include <iostream>
#include <datos_correo.h>
using namespace std;

int main()
{
    datos_correo<string> p1("j","cacerescu");
    cout<<"mi correo es "<<endl;
    cout<<p1.getinicial()<<p1.getnombre()<<"@unsa.edu.pe"<<endl;

    return 0;
}
