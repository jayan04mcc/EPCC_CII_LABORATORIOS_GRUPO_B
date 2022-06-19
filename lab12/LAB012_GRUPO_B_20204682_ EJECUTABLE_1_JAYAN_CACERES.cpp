//ejercicio 1

#include <iostream>
using namespace std;
#include <conio.h>
class nodo{
public:
    int dato; // en este caso es un numero entero
    nodo *siguiente;//este puntero va a apuntar al siguiente elemento .
};

class cola: public nodo{

public:
    nodo *delante;
    nodo *detras;
public:
    void encolar(cola &q,int val);
    int desencolar(cola &q);
    void muestracola(cola q);

};
void cola::encolar(cola &q,int val){
    nodo *aux=new nodo();

    aux->dato=val;
    aux->siguiente=NULL;

    if(q.delante==NULL){
        q.delante=aux;

    }
    else
        (q.detras)->siguiente=aux;

    q.detras=aux;

}
int cola::desencolar(cola &q){
    int num;
    nodo *aux;

    aux=q.delante;//que aux apunte al inicio de la cola
    num=aux->dato;//que el numero sea el dato al cual apunta el aux
    q.delante=q.delante->siguiente;
    delete(aux);
    return num;

}
void cola::muestracola(cola q){
        nodo *aux;
        aux=q.delante;
        while(aux!=NULL){
            cout<<" "<<aux->dato<<"->"<<endl;
            aux=aux->siguiente;
        }
}
void menu(){
int opc,dat;
cola q=cola ();
cola prueba=cola();
do{
cout<<" MENU "<<endl;
cout<<" [1].inserar elementos en la cola "<<endl;
cout<<" [2].mostrar elementos de la cola "<<endl;
cout<<" [3].desencolar elemento "<<endl;
cout<<" [4].salir del programa "<<endl;
cin>>opc;
switch(opc){
    case 1:
        cout<<"ingrese el dato"<<endl;
        cin>>dat;
        prueba.encolar(q,dat);
        cout<<endl;
        system("pause");
        break;
    case 2:
        prueba.muestracola(q);
        cout<<endl;
        system("pause");
        break;
    case 3:
        prueba.desencolar(q);
        cout<<endl;
        system("pause");
        break;
        }
        system("cls");
    }while(opc!=4);
}
int main(){
cola cola_main=cola ();
cola_main.delante=NULL;
cola_main.detras=NULL;
int val;
menu();

return 0;

}
