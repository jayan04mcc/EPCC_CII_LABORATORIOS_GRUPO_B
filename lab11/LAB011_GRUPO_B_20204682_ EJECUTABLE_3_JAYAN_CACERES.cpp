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
    void buscar(int numero);
    void mostrar_pila();
};

nodo *pi,*pa,*pf;
void nodo::pilas(int numero){//el puntero auxiliar q apunte al pi para que lo
    pa= new nodo();          //lo recorra al revez
    pa->dato=numero;
    pa->siguiente=pi;
    pi=pa;
}
void nodo::buscar(int numero){
    pa=pi;
    int corredor=0;
    bool cont;
    while(pa!=NULL){
        if(pa->dato==numero){
            cout<<"numero encontrado en la posicion "<<corredor<<endl;
            cont=true;
        }
        pa=pa->siguiente;
        corredor++;
    }
    if(cont==false){
        cout<<"numero no encontrado"<<endl;
    }

}
void nodo::mostrar_pila(){
    pa=pi;
    while (pa!=NULL){
        cout<<pa->dato<<"->";
        pa=pa->siguiente;
    }
}
void menu(){
int opc,dat,bsc;
nodo *pp=new nodo();
    do{
    cout<<" MENU "<<endl;
    cout<<" [1].inserar elementos en la pila "<<endl;
    cout<<" [2].mostrar elementos de la pila "<<endl;
    cout<<" [3].buscar numero en la pila "<<endl;
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
        cout<<" ingrese el numero a buscar en la pila"<<endl;
        cin>>bsc;
        pp->buscar(bsc);
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
