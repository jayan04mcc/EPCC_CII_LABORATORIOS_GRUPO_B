#include <iostream>
using namespace std;
int main(){
int num;
	do{
		cout<<"n? ";
		cin>>num;

	}while((num<1) || (num>20));

	for(int j=1; j<=12; j++){
		cout<<num<<" * "<<j<<" = "<<num * j<<endl;
	}

    return 0;
}
