#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

class nodo{
public:
    int dato; // en este caso es un numero entero
    nodo *siguiente; //este puntero va a apuntar al siguiente elemento .
public:
    void pilas(int numero);
    void mostrar_pila();
};

nodo *pi,*pa,*pf;
void nodo::pilas(int numero){//el puntero auxiliar q apunte al pi para que lo
    pa= new nodo();          //lo recorra al revez
    pa->dato=numero;
    pa->siguiente=pi;
    pi=pa;
}
void nodo::mostrar_pila(){
    pa=pi;
    while (pa!=NULL){
        cout<<pa->dato<<"->";
        pa=pa->siguiente;
    }
}
void menu(){
int opc,dat;
nodo *pp=new nodo();
    do{
    cout<<" MENU "<<endl;
    cout<<" [1].inserar elementos en la pila "<<endl;
    cout<<" [2].mostrar elementos de la pila "<<endl;
    cout<<" [3].salir del programa "<<endl;
    cin>>opc;
    switch(opc){
    case 1:
        cout<<"ingrese el dato"<<endl;
        cin>>dat;
        pp->pilas(dat);
        cout<<endl;
        system("pause");
        break;
    case 2:
        pp->mostrar_pila();
        cout<<endl;
        system("pause");
        break;
    }
        system("cls");
    }while(opc!=3);
}
int main(){

    menu();
    getch();
    return 0;
    system("pause");
}
