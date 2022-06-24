#include<iostream>
using namespace std;
struct datos{
    string nombre;
    char grupo;
};
struct notas{
    datos alum;
    float fase1;
    float fase2;
    float fase3;
    float pro_final;


};
int main(){
    int alu;
    cout<<"ingrese el num de alumnos "<<endl;
    cin>>alu;

     notas alumno[alu];
    for (int i = 0; i < alu; i++){
        cout<<"ingrese el nombre del alumno "<<i+1<<":";
        cin>>alumno[i].alum.nombre;
        cout<<"ingrese el grupo del alumno "<<i+1<<":";
        cin>>alumno[i].alum.grupo;
        cout <<"ingrese la nota de la 1 fase "<<i+1<<":";
        cin >> alumno[i].fase1;
        cout <<"ingrese la nota de la 2 fase "<<i+1<<":";
        cin >> alumno[i].fase2;
        cout <<"ingrese la nota de la 3 fase "<<i+1<<":";
        cin >> alumno[i].fase3;
        cout <<"ingrese la nota del proyecto final "<<i+1<<":";
        cin >> alumno[i].pro_final;

        cout <<endl;

    }
    for(int i=0;i<alu;i++){
        cout<<"la notas del del alumno :"<<alumno[i].alum.nombre<<endl;
        cout<<"1 fase"<<endl;
        cout<<alumno[i].fase1*0.15<<endl;
        cout<<"2 fase"<<endl;
        cout<<alumno[i].fase2*0.20<<endl;
        cout<<"3 fase"<<endl;
        cout<<alumno[i].fase3*0.25<<endl;
        cout<<"proyecto final"<<endl;
        cout<<alumno[i].pro_final*0.40<<endl;

    }



}
