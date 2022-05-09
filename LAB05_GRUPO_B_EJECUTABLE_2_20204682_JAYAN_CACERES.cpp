#include <iostream>
using namespace std;
int main(){    
    float *vector1=NULL;
    float *vector2=NULL;

    int n;
    cout<<"cuantos valores va a tener sus vectores"<<endl;
    cin>>n;

    vector1=new float[n];
    vector2=new float[n];

    cout<<"ingrese los numeros de los respectivos vectores"<<endl;
    for(int i=0;i<n;i++){
        cout<<"numero "<<i+1<<"del vector 1"<<endl;
        cin>>vector1[i];
        cout<<"numero "<<i+1<<"del vector 2"<<endl;
        cin>>vector2[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+vector1[j]*vector2[j];
    }
    cout<<"el producto punto de estos vectores es "<<sum<<endl;

    delete vector1;
    delete vector2;


    vector1=NULL;
    vector2=NULL;
    system("pause");
    return 0;
}
