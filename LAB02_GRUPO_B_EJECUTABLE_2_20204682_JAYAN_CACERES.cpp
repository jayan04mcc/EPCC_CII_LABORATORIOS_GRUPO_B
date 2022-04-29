#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
for(int i=2;i<=50;i++){
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
