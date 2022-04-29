#include <iostream>
using namespace std;
int valor(int y){

cout<<"ingrese un valor comprendido entre en 0 y el 100";
cin>>y;

if (y>0 && y<100){
    return y;
}

}

bool validar(int y){

    if (valor(y)%2==0){
        cout<<"es un numero par"<<endl;
        return true;
    }
    else{
        cout<<"no es par";
        return false;

    }




}

void suma_impares(int y,bool resp){
    if (resp==true){
            int sum=0;
            for(int i=0;i<valor(y);i=i+2){
                sum=sum+i;
                return;

            }

    }
    else
        cout<<"no se puede preceder";




}

int main()
{
  
  int y;
  bool resp = validar((valor(y)));
suma_impares(valor(y),resp);
}
  
  
  
  
  
