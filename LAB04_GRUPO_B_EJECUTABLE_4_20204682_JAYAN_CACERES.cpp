#include <iostream>

using namespace std;
int main(){
  int matriz[5][3];
int sum=0;
for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        cout<<"posicion ["<<i<<"]["<<j<<"]"<<endl;
        cin>>matriz[i][j];
        if(i%2==0){
            sum=sum+matriz[i][j];

        }
    }
}
cout<<"la suma es"<<sum;
}
