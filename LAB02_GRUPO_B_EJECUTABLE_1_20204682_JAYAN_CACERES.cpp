#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
int sum=0;
    for(int i=2;i<101;i++){
        if(i%2==0){
            sum=sum+i;
        }

    }
    cout<<"la suma total es "<<sum;
}
