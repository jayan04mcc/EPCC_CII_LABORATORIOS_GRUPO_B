#include <iostream>
#include <stdlib.h>
using namespace std;

class ejercicio1{

private:
    int n;
    int *p1;
public:
    ejercicio1(int n);
    void pedir();
    void mostrar();

};

ejercicio1::ejercicio1(int _n){
    n=_n;
}

void ejercicio1::pedir(){


    p1=new int[n];
    for(int i=0;i<n;i++){
        cout<<"ingrese el numero "<<endl;
        cin>>p1[i];
    }

}
void ejercicio1::mostrar(){
    cout<<"estos  son los numeros ingresados"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<p1[i]<<" ";
    }

}

int main(){
    int j;
    cout<<"cuantos numeros desea agregar "<<endl;
    cin>>j;
    ejercicio1 pp1(j);
    pp1.pedir();
    pp1.mostrar();



}
