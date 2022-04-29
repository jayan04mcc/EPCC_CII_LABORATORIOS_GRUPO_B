#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"ingrese 2 numeros ";
cin>>a>>b;
  if(a<b){
    for(int i=a;i<=b;i++){
      int cont=0;
      for(int j=a;j<=i/2;j++){
         if(i%j==0){
           cont++;
           break;
        }
      }
      if (cont<1){
        cout<<i<<endl;
      }
    }
    cout<<endl;

 }
  else if(a>b){
    for(int i=a;i<=b;i++){
    int cont=0;
      for(int j=a;j<=i/2;j++){
        if(i%j==0){
        cont++;
        break;
    }
    int l;
    int cad[l];
    if (cont<1){
      for( l=0;l<=b;l++){
          cin>>cad[l];
          cout<<cad[0];
        }
    }
  }
  }
}
}
