#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class nodo{
public:
int dato; // en este caso es un numero entero
nodo *siguiente; //este puntero va a apuntar al siguiente elemento .
public:
void agregar_final(int numero);
void mostrar2();

void insertar_posicion(int numero,int posicion);
};
nodo *pi,*pa,*pf,*pa2;
void nodo::agregar_final(int numero){
pa= new nodo();
pa->dato=numero;
pa->siguiente=pi;
pi=pa;
}
void nodo::insertar_posicion(int numero,int posicion){
pa=new nodo();
pa->dato=numero;
if(posicion==1){
pa->siguiente=pi;
pi=pa;
}
else
{
int x=0;
pa2=pi;
for(int i=0; pa2!=NULL;i++){
if(i==posicion+x){
pa->siguiente=pa2->siguiente;
pa2->siguiente=pa;
return;
}
pa2=pa2->siguiente;
}
}
cout<<" error posicion no encontrada "<<endl;
}
void nodo::mostrar2(){
pa=pi;
while (pa!=NULL){
cout<<pa->dato<<"->";
pa=pa->siguiente;
}
}
void menu(){
int opc,dat,pos;
nodo *pp=new nodo();

do{
cout<<" MENU "<<endl;
cout<<" [1].inserar elementos en la lista "<<endl;
cout<<" [2].mostrar elementos de la lista "<<endl;
cout<<" [4].insertar elemento en cierta posicion "<<endl;
cout<<" [3].salir del programa "<<endl;
cin>>opc;
switch(opc){
case 1:
cout<<"ingrese el dato"<<endl;
cin>>dat;
pp->agregar_final(dat);
cout<<endl;
system("pause");
break;
case 2:
pp->mostrar2();
cout<<endl;
system("pause");
break;
case 4:
cout<<"ingrese el valor a insertar "<<endl;
cin>>dat;
cout<<" ingrese la posicion "<<endl;
cin>>pos;
pp->insertar_posicion(dat,pos);
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
