#include <iostream>
#include <cmath>
using namespace std;
int main(){
int suma=0,valor,media=0,a;
cout<<"cuantos valores va a tener su media";
cin>>a;
for(int x=0;x<a;x++){
    cout<<"ingrese el"<<x+1<<" valor :";
    cin>>valor;
    suma=suma+valor;

}
media=suma/a;
cout<<media;
}
