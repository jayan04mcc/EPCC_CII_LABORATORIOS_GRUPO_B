#include <iostream>
#include <stdio.h>
using namespace std;

float suma(float i,float j){
    return i+j;
}
float resta(float i,float j){
    return i-j;
}
float multiplicacion(float i,float j){
    return i*j;
}
float division(float i,float j){
    return i/j;
}
int main(){
int desicion;
float(*punt_func[])(float,float)={suma,resta,multiplicacion,division};
cout<<"para sumar oprima 0"<<endl<<"para restar oprima 1"<<endl<<"para multiplicar oprima 2"<<endl<<"para dividir oprima 3";
cin>>desicion;
cout<<"introduzca los 2 numeros a evaluar";
float a,b;
cin>>a>>b;
cout<<"el resultado es "<<(punt_func[desicion])(a,b);


}
