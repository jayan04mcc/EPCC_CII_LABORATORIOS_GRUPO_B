#include "forma_principal.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>
#include <vector>
using namespace std;

void AREA_MAYOR_A(vector<Forma*> b){
	float a1,a2;
	Rectangulo* rectangulo=(Rectangulo*)b[0];
	Elipse* elipse=(Elipse*)b[1];
	a1=rectangulo->area();
	a2=elipse->area();
	cout<<"Elipse "<<a2<<endl;
	cout<<"Rectangulo"<<a1<<endl;
	if(a1>a2){
		cout<<"El mayor area es del rectangulo ";
		cout<<endl;
	}else{
		cout<<"El mayor area es de la elipse ";
	}
}

int main()
{
	Forma a("verde","Rectangulo",5,9);
	a.imprimir();
	cout<<"mandamos el color "<<a.getcolor()<<endl;
	a.cambiarCentro(7,3);
	cout<<endl;
	a.cambiarColor("mostaza");
	a.imprimir();
	cout<<endl;
	Rectangulo b("gris","Rectangulo",7,12,19,14);
	b.imprimir();
	cout<<endl;
	cout<<"su area es"<<b.area()<<endl;
	cout<<"su perimetro es "<<b.perimetro();
	b.escala(4);
	cout<<endl;
	b.imprimir();
	cout<<endl;
	circulo n("jade","circulo:",5,1,16,3);
	n.imprimir();
	cout<<"su area es "<<n.area()<<"pi"<<endl;
	cout<<endl;

	Elipse m("violeta "," elipse ",5,8,11,15);
	m.imprimir();
	cout<<endl;

	Cuadrado k("blanco","Cuadrado",19,14,12,11);
	k.imprimir();

	return 0;

	system("pause");

}

//***********************************************

#include <iostream>
#include <string>
using namespace std;
class Forma{
	private:
		string color;
		string nombre;
		pair<int,int> centro;
	public:
		Forma(string,string,int,int);
		void imprimir();
		string getcolor();
		void cambiarCentro(int,int);
		void cambiarColor(string);
		~Forma();
};
Forma::Forma(string _color,string _nombre,int centro_x,int centro_y){
	color=_color;
	nombre=_nombre;
	centro.first=centro_x;
	centro.second=centro_y;
}
void Forma::imprimir(){
	cout<<"su color es"<<color<<endl;
	cout<<"su nombre es "<<nombre<<endl;
	cout<<"su centro del poliedro es ["<<centro.first<<","<<centro.second<<"]"<<endl;
}
void Forma::cambiarCentro(int x,int y){
	centro.first=x;
	centro.second=y;
	imprimir();
}
string Forma::getcolor(){
	return color;
}
void Forma::cambiarColor(string cambio){
	color=cambio;
}
Forma::~Forma(){}
//****************************************88
#include <iostream>
#include <string>

using namespace std;
class Rectangulo:public Forma{
	private:
		float lado_menor;
		float lado_mayor;
	public:
		Rectangulo(string,string,int,int,float,float);
		virtual void imprimir();
		float area();
		int perimetro();
		void escala(float);
		~Rectangulo();
};
Rectangulo::Rectangulo(string Rectangulo1,string Rectangulo2,int Rectangulo3,int Rectangulo4,float _menor,float _mayor):Forma(Rectangulo1,Rectangulo2,Rectangulo3,Rectangulo4){
	lado_menor=_menor;
	lado_mayor=_mayor;
}
Rectangulo::~Rectangulo(){}
void Rectangulo::imprimir(){
	Forma::imprimir();
	cout<<"su lado mayor es "<<lado_mayor<<endl;
	cout<<"su lado menor es "<<lado_menor<<endl;
}
float Rectangulo::area(){
	return lado_menor*lado_mayor;
}
int Rectangulo::perimetro(){
	return (2*lado_menor)+(2*lado_mayor);
}
void Rectangulo::escala(float escala){
	lado_menor=lado_menor*escala;
	lado_mayor=lado_mayor*escala;	
}
//**************************************

#include <iostream>
#include <string>

using namespace std;
class Elipse:public Forma{
	private:
		float radio_menor,radio_mayor;
	public:
		Elipse(string,string,int,int,float,float);
		float area();
		virtual void imprimir();
		~Elipse();
};
Elipse::Elipse(string Elipse1,string Elipse2,int Elipse3,int Elipse4,float _radio_mayor,float _radio_menor):Forma(Elipse1,Elipse2,Elipse3,Elipse4){
	radio_mayor=_radio_mayor;
	radio_menor=_radio_menor;
}
Elipse::~Elipse(){
}
float Elipse::area(){
    float formula;
    formula=3.14*R*r;
	return formula;
}
void Elipse::imprimir(){
	Forma::imprimir();
	cout<<"su radio mayor es"<<radio_mayor<<endl;
	cout<<"su radio menor es "<<radio_menor<<endl;
}

//***************************************************
#include <iostream>
#include <string>

using namespace std;
class circulo:public Elipse{
	private:
		float Radio;
	public:
		circulo(string,string,int,int,float,float);
		void imprimir();
		~circulo();	
};

circulo::circulo(string circulo1,string circulo2,int circulo3,int circulo4,float circulo5,float _radio):Elipse(circulo1,circulo2,circulo3,circulo4,circulo5,_radio){
	Radio=_radio;
}
circulo::~circulo(){}
void circulo::imprimir(){
	Forma::imprimir();
	cout<<"Radio: "<<Radio<<endl;
}

//*************************************88
#include <iostream>
#include <string>

using namespace std;
class Cuadrado:public Rectangulo
{
	private:
		float lado_cuadrado;
	public:
		Cuadrado(string,string,int,int,float,float);
		void imprimir();
		~Cuadrado();
};
Cuadrado::Cuadrado(string Cuadrado1,string Cuadrado2,int Cuadrado3,int Cuadrado4,float Cuadrado5,float Cuadrado6):Rectangulo(Cuadrado1,Cuadrado2,Cuadrado3,Cuadrado4,Cuadrado5,Cuadrado6){
	lado_cuadrado=Cuadrado5;
}
Cuadrado::~Cuadrado(){}
void Cuadrado::imprimir(){
	Forma::imprimir();
	cout<<"su lado es"<<lado_cuadrado<<endl;
}


