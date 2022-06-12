//EJERCICIO 1
#include <iostream>
using namespace std;
class Nodo{
public:
    int dato;
    Nodo *siguiente;
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};

class agregar_ultimo{
private:
    void agregar1(Nodo *n, int dato);
    void agregar_inicio1(Nodo *n,int dato);
    void imprimir1(Nodo *n);
public:
    Nodo *cabeza;
    void agregar2(int dato);
    void imprimir2();
};
void agregar_ultimo::agregar1(Nodo *n, int dato){
    if (n->siguiente == NULL)
        {
            n->siguiente = new Nodo(dato);
        }
        else
        {
            this->agregar1(n->siguiente, dato);
        }

}
void agregar_ultimo::agregar_inicio1(Nodo *n,int dato){


}
void agregar_ultimo::imprimir1(Nodo *n){
    if (n != NULL){
        cout <<" "<< n->dato <<" ";
        this->imprimir1(n->siguiente);
    }
    cout<<endl;
}

void agregar_ultimo::agregar2(int dato){

    if (this->cabeza == NULL){

        this->cabeza = new Nodo(dato);
    }
    else{

        this->agregar1(this->cabeza, dato);
    }
}
void agregar_ultimo::imprimir2(){

    cout << "DATOS :" <<endl;

    this->imprimir1(this->cabeza);


}

int main(){
int val,cant;
agregar_ultimo *p1=new agregar_ultimo();
cout<<"cuantos valores desea ingresar a la lista dinamica "<<endl;
cin>>cant;
for(int i=0;i<cant;i++){
    cout<<"ingrese el "<<i+1<<" valor en la posicion " <<i<<endl;
    cin>>val;
    p1->agregar2(val);
}
    p1->imprimir2();

}

