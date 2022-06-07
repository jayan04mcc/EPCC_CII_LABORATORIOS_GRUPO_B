#include <iostream>
#include <stdlib.h>
using namespace std;
void pedir();
void mostrar();
int n,*p1;
int main()
{
    pedir();
    mostrar();
    delete[] p1;

    return 0;
    system("pause");
}
void pedir(){
    //int n,*p1;
    cout<<"cuantos num desea agregar "<<endl;
    cin>>n;
    p1=new int[n];
    for(int i=n-1;i>=0;i--){
        cout<<"ingrese el num "<<endl;
        cin>>p1[i];
    }
}
void mostrar(){
    cout<<"estos  son los numeros ingresados"<<endl;
    for(int i=0;i<n;i++){
        cout<<p1[i]<<endl;
    }

}
