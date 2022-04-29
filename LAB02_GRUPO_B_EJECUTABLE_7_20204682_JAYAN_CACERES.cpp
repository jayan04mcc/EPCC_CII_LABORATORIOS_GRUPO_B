#include <iostream>
using namespace std;
int main(){
int alum1[]={11,12,15};
int alum2[]={16,11,18};
int alum3[]={11,10,6};
    int suma1=0;
    int suma2=0;
    int suma3=0;

    for(int i=0;i<3;i++){
            suma1=suma1+alum1[i];
    }
    for(int i=0;i<3;i++){
            suma2=suma2+alum2[i];
    }
    for(int i=0;i<3;i++){
            suma3=suma3+alum3[i];
    }


    cout<<suma1/3 <<endl<<suma2/3 <<endl<<suma3/3;
  
  
}
