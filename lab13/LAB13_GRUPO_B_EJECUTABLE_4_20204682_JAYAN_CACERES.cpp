#include <iostream>
using namespace std;

struct persona{
        string nombre;
        string sexo;
        float sueldo;

};



int main(){
    int per;
    cout<<"ingrese el numero de empleados "<<endl;
    cin>>per;
    persona empleados[per];
    for (int i = 0; i < per; i++){
        cout <<"Escriba el Nombre "<<i+1<<":";
        cin >> empleados[i].nombre;
        cout <<"ingrese el sexo de la persona"<<i+1<<":";
        cin >> empleados[i].sexo;
        cout <<"ingrese el sueldo de la persona"<<i+1<<":";
        cin >> empleados[i].sueldo;

        cout <<endl;

    }
    int mayor, menor;
	mayor = menor = empleados[0].sueldo;
    for (int i = 0;i <per;i++)
        {
            if (empleados[i].sueldo > mayor) mayor = empleados[i].sueldo;
            if (empleados[i].sueldo < menor) menor = empleados[i].sueldo;
        }
        cout<<" el sueldo mayor es "<<mayor<<endl;
        cout<<" el sueldo menor es  "<<menor<<endl;
}
