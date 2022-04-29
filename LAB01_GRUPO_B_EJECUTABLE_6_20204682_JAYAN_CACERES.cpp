 #include <iostream>
#include <cmath>
using namespace std;  
int main(){
  int v[50], x, i=0;
	cout<<"ingrese un num para pasarlo a binario que este entre 100 y 1000 ";
	cin>>x;
	do{
		v[i]=x%2;
		x=x/2;
		i++;
	} while(x!=0);
	for (int t=i;t<50;t++){
		v[t]=9;
	}
	for (i=49;i>=0;i--){
		if(v[i]==0)cout<<v[i];
		if(v[i]==1)cout<<v[i];
	}
}
