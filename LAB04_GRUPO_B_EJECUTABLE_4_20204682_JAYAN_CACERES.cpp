#include <iostream>

using namespace std;
int main(){
int primos[25];
 for(int i=2;i<=100;i++){
        int cont=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
            cont++;
            break;
            }
        }
        if (cont<1){
        cout<<i<<endl;
        cin>>primos[i];
        }
    }
}
