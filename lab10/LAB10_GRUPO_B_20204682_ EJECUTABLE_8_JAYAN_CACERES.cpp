ejercicio 8:
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class nodo{
public:
int dato; // en este caso es un numero entero
nodo *siguiente;//este puntero va a apuntar al siguiente elemento .
public:

void agregar(int numero);
void mostrar2();
void agregar_final(int numero);
void mostrar3();
void eliminar_ultimo(int numero);
void ordenar_ascendente(int numero);
};
nodo *pi,*pa,*pf,*pa2,*nuevo_nodo;
void nodo::agregar(int numero){
if(pi == NULL){// en el caso que haya solo 1 nodo
pi = new nodo();
pi->dato= numero;
pf=pi;//el puntero final apunta a NULL
}else{
pa=new nodo();

pf->siguiente=pa;
pa->dato=numero;
pf=pa;
}
pf->siguiente=NULL;
}
void nodo::mostrar2(){
pa=pi;
while (pa!=NULL){
cout<<pa->dato<<"->";
pa=pa->siguiente;
}
}
void nodo::eliminar_ultimo(int numero){
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

void nodo::ordenar_ascendente(int numero){
nuevo_nodo= new nodo(); //crear espacio en memoria para almacenar un nuevo nodo
nuevo_nodo->dato=numero; //a nuestro nuevo nodo le asignamos un dato ya que es de
tipo nodo y puede acceder a esos valores
pa=pi; //como lista apunta o seniala a null aux1 tambien seniala a null

while ((pa!=NULL) && (pa->dato > numero)){
pa2=pa;
pa=pa->siguiente;
}
if (pi ==pa){//el elemento que queremos insertar es menor al elemento que ya tenemos
pi=nuevo_nodo;
}
else{
pa2->siguiente=nuevo_nodo;
}
nuevo_nodo->siguiente=pa;
cout<<"elemento "<<numero<< " fue ingresado correctamente"<<endl;

}
void menu(){
int opc,dat,dat2;
nodo *pp=new nodo();
do{
cout<<" MENU "<<endl;
cout<<" [1].inserar elementos en la lista "<<endl;
cout<<" [2].mostrar elementos de la lista "<<endl;
cout<<" [4].eliminar"<<endl;
cout<<" [5].ordenar "<<endl;
cout<<" [3].salir del programa "<<endl;
cin>>opc;
switch(opc){
case 1:
cout<<"ingrese el dato"<<endl;
cin>>dat;
pp->agregar(dat);
cout<<endl;
system("pause");
break;
case 2:
pp->mostrar2();
cout<<endl;
system("pause");
break;
case 4:
cout<<" ingrese el elemento a eliminar ";
cin>>dat2;
pp->eliminar_ultimo(dat2);
cout<<endl;

system("pause");
break;
case 5:
cout<<"ingrese el dato a ordenar"<<endl;
cin>>dat;
pp->ordenar_ascendente(dat);
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
}
