#include <iostream>
using namespace std;
void potencia(int a,int b){
    int x=1;
    cout<<"ingrese la base y el exponete";
    cin>>a>>b;

    for(int i=0;i<b;i++){

        x=x*a;
    }
    cout<<x;
}
int main(){
int a,b;
potencia(a,b);
  
}
  
