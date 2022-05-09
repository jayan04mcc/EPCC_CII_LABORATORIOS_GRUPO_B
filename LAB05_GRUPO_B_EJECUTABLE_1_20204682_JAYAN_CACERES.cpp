#include <iostream>
using namespace std;
int main(){
int numero1=8,numero2=6;
    int *puntero1;
    int *puntero2;
    puntero1=&numero1;
    puntero2=&numero2;
    int aux=*puntero1;
    *puntero1=*puntero2;
    *puntero2=aux;
    cout<<"el 1 puntero ahora apunta al num :"<<*puntero1<<endl;
    cout<<"el 2 puntero ahora apunta al num :"<<*puntero2<<endl;


    system("pause");
    return 0;
}
