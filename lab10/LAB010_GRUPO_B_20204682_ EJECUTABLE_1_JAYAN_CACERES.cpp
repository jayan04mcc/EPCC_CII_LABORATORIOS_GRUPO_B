//EJERCICIO 1
class nodo{
public:
int dato; // en este caso es un numero entero
nodo *siguiente;//este puntero va a apuntar al siguiente elemento .
public:
void agregar(int numero);
void mostrar2();
};
nodo *pi,*pa,*pf;
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
void menu(){
int opc,dat,dat2;
nodo *pp=new nodo();
do{
cout<<" MENU "<<endl;
cout<<" [1].inserar elementos en la lista "<<endl;
cout<<" [2].mostrar elementos de la lista "<<endl;
cout<<" [4].eliminar"<<endl;

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
}
system("cls");

}while(opc!=3);
}
int main(){
menu();
getch();
return 0;
}
