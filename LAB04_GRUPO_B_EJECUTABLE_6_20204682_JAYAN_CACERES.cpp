#include <iostream>
using namespace std;
int main(){
int matriz2[3][3];
int sum[3];
int contador=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"posicion ["<<i<<"]["<<j<<"]"<<endl;
        cin>>matriz2[i][j];

    }
}
for(int i=0;i<3;i++){
   int con=0;
   for(int j=0;j<3;j++){
        con+=matriz2[i][j];
   }
  cout<<"LA SUMA DE LA FILA "<<i<<" ES "<<con<<endl;
 }
}
