#ifndef MAYOR_MENOR_H
#define MAYOR_MENOR_H
#include <iostream>
using namespace std;
template<class tipo>
class mayor_menor
{
private:
    tipo num1;
    tipo num2;
    tipo num3;

public:
    mayor_menor(tipo num1=0 ,tipo num2=0 ,tipo num3=0);





tipo imprimir_mayor(){
    if(num1>num2 && num1>num3){
    return num1;
    }
    if(num2>num3 && num2>num1){
    return num2;
    }
    if(num3>num2 && num3>num1){
    return num3;
    }

}
tipo imprimir_menor(){
    if(num1<num2 && num1<num3){
    return num1;
    }
    if(num2<num3 && num2<num1){
    return num2;
    }
    if(num3<num2 && num3<num2){
    return num3;
    }
}
};
template<class tipo>
mayor_menor<tipo>::mayor_menor(tipo num1,tipo num2,tipo num3){

this ->num1=num1;
this ->num2=num2;
this ->num3=num3;
}

#endif // MAYOR_MENOR_H
//*************************************
#include <iostream>
#include <mayor_menor.h>
using namespace std;

int main()
{
    mayor_menor<int> p1(4,12,6);
    mayor_menor<int> p2(4,12,6);

    cout<<"el mayor numero es "<<p1.imprimir_mayor()<<endl;
    cout<<" el menor numero es "<<p1.imprimir_menor()<<endl;

    return 0;
    system("pause");
}
