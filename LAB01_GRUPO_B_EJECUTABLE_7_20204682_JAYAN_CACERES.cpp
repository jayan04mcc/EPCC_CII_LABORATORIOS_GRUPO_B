#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b;
cout<<"ingrese 2 numeros"<<endl;
cin>>a>>b;

if(a<b){
    if (b%a==0)
        cout<< "es un numero divisor";
    else
            cout<<"no es divisor";

}
else if(a%b==0)
    cout<<"es un num divisor";
    else
        cout<<"no es divisor";
}
