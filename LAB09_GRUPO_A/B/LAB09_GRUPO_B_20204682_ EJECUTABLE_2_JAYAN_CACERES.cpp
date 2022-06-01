#ifndef OPERACIONES_H
#define OPERACIONES_H
#include <iostream>
using namespace std;
template<class op>
class operaciones
{
private:
    op num1;
    op num2;
public:
    operaciones(op num1=0,op num2=0);


op suma(){

    return num1 +num2;




}
op resta(){
    return num1-num2;


}
op multiplicacion(){
    return num1*num2;

}
op division(){
    return num1/num2;



}



};
template<class op>
operaciones<op>::operaciones(op num1,op num2){
this ->num1=num1;
this ->num2=num2;

}


#endif // OPERACIONES_H
//**********************************************
#include <iostream>
#include <operaciones.h>
using namespace std;

int main()
{
    operaciones<int> p1(8,2);
    cout <<"la suma es"<<p1.suma()<<endl;
    cout <<"la resta es"<<p1.resta()<<endl;
    cout <<"la multiplicacion es"<<p1.multiplicacion()<<endl;
    cout <<"la division es"<<p1.division()<<endl;
    return 0;
}
