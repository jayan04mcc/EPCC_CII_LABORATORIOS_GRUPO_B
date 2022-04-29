#include <iostream>
#include <cmath>
using namespace std;
int main(){
int cad[10],sum;

for(int b=0;b<10;b++){

    cout<<"ingrese el "<<b+1<<" numero";
    cin>>cad[10];
}


for(int a=0;a<10;a++){

    if (cad[a]<0){
        sum=sum+a;
    }
}

cout<<"la suma de los negativos seria "<<sum;
}
