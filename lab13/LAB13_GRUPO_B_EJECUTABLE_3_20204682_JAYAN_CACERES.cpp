#include <iostream>
using namespace std;

struct persona{
        string nombre;
        int edad;
        float talla;
};



int main(){

    persona jugadores[5];
    for (int i = 0; i < 5; i++){
        cout <<"Escriba el Nombre "<<i+1<<":";
        cin >> jugadores[i].nombre;
        cout <<"ingrese la edad de la persona"<<i+1<<":";
        cin >> jugadores[i].edad;
        cout <<"ingrese la talla de la persona"<<i+1<<":";
        cin >> jugadores[i].talla;

        cout <<endl;

    }
    for(int i=0;i<5;i++){
        if((jugadores[i].edad<20) && (jugadores[i].talla<1.70)){
            cout<<"estas personas no cumplen con los requisitos "<<jugadores[i].nombre<<endl;
        }

    }


   return 0;
}
*/
