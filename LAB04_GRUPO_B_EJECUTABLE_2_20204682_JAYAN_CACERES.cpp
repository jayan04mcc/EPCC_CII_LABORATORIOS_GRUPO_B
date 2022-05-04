#include <iostream>
using namespace std;
int main(){
  int numeros[8]={1,2,3,4,5,6,7,8};
int num;
cout<<"ingrese un num a buscar";
cin>>num;
for(int i=0;i<8;i++){
    if (num==numeros[i]){
        cout<<"si";
    }
    else
        cout<<"no";
}
}
