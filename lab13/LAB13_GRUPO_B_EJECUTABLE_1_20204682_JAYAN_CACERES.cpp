#include <iostream>
using namespace std;
struct fecha{
    int dia;
    int mes;
    int anio;
};
struct persona{
        string nombre;
        string apellido;
        fecha cumple;
};



int main(){
    int n;
    cout<<"ingrese el numero de personas "<<endl;
    cin>>n;
    persona amigo[n];
    for (int i = 0; i < n; i++){
        cout <<"Escriba el Nombre "<<i+1<<":";
        cin >> amigo[i].nombre;
        cout <<"\nEscriba el Apellido "<<i+1<<":";
        cin >> amigo[i].apellido;
        cout<<"ingrese el dia de su cumpleanios "<<endl;
        cin>>amigo[i].cumple.dia;
        cout<<"ingrese el mes de su cumpleanios "<<endl;
        cin>>amigo[i].cumple.mes;
        cout<<"ingrese el anio de su cumpleanios "<<endl;
        cin>>amigo[i].cumple.anio;
        cout <<endl;

    }
    for(int i=0;i<n;i++){
        if(amigo[i].cumple.mes==6){
            cout<<"estas personas cumplen anios este mes "<<amigo[i].nombre<<endl;
        }
    }


   return 0;
}
