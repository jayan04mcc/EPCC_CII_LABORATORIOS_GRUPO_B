#include <iostream>
using namspace std;
void primos(int n){
    cout<<"n";
    cin>>n;
     for(int i=2;i<=n;i++){
        int cont=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
            cont++;
            break;
            }
        }
        if (cont<1){
           cout<<i<<endl;
        }
    }
}

int main(){
  int n;
  primos(n);
  
}
