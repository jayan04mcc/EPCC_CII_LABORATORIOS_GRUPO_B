#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
using namespace std;
#include <iostream>

class multimedia
{
    protected:
    int capacidad=30;
    string marca="sony";
    string color="violeta";

    public:
        multimedia();
        ~multimedia();
        void imprimir();

};

#endif // MULTIMEDIA_H
//****************************************
#include "multimedia.h"

multimedia::multimedia()
{
    //ctor
}

multimedia::~multimedia()
{
    //dtor
}

//*****************************************
#ifndef DISCO_H
#define DISCO_H
#include "multimedia.h"
#include <iostream>
using namespace std;

class disco :public multimedia
{
    private:
    string tema;
    string genero;
    public:
        disco(string,string);
        virtual ~disco();
        void imprimirdisco();


};

#endif // DISCO_H
//*********************************************
using namespace std;
#include <iostream>
disco::disco(string _tema,string _genero)
{
    tema=_tema;
    genero=_genero;
    //ctor
}

disco::~disco()
{
    //dtor
}

void disco::imprimirdisco(){

cout<<"mi disco es de la marca "<<marca<< " y tiene una capacidad de "<<capacidad<<" gb y tiene un color "<<color<<endl;
cout<<" tambien tiene mayormente temas "<<tema<<" y de genero del "<<genero;
}
//*****************************************
#include <iostream>
#include "multimedia.h"
#include "disco.h"
using namespace std;

int main()
{
    disco p1=disco("acustico","rock");
    p1.imprimirdisco();
    return 0;
    system("pause");
}
