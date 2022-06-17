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
    void eliminar(int numero);
    void mostrar_pila();
};

nodo *pi,*pa,*pf;
void nodo::pilas(int numero){//el puntero auxiliar q apunte al pi para que lo
    pa= new nodo();          //lo recorra al revez
    pa->dato=numero;
    pa->siguiente=pi;
    pi=pa;
}
void nodo::eliminar(int numero){
    nodo *ant;
    pa=pi;
    if(pi!=NULL){
        while(pa!=NULL){
            if(pa->dato==numero){
                if(pa==pi)
                    pi=pi->siguiente;
                else
                    ant->siguiente=pa->siguiente;
                    delete(pa);
                    return;
            }
        ant=pa;
        pa=pa->siguiente;
        }
    }
else
cout<<"la lista esta vacia "<<endl;
}
void nodo::mostrar_pila(){
    pa=pi;
    while (pa!=NULL){
        cout<<pa->dato<<"->"<<endl;
        pa=pa->siguiente;
    }
}
void menu(){
int opc,dat,elm;
nodo *pp=new nodo();
    do{
    cout<<" MENU "<<endl;
    cout<<" [1].inserar elementos en la pila "<<endl;
    cout<<" [2].mostrar elementos de la pila "<<endl;
    cout<<" [3].eliminar numero "<<endl;
    cout<<" [4].salir del programa "<<endl;
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
    case 3:
        cout<<" ingrese el numero a eliminar";
        cin>>elm;
        pp->eliminar(elm);

    }
        system("cls");
    }while(opc!=4);
}
int main(){

    menu();
    getch();
    return 0;
    system("pause");
}
