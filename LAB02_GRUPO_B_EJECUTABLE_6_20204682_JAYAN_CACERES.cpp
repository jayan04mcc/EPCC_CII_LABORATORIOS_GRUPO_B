#include <iostream>
using namespace std;
int main(){
double val,ant,sig,sum;
	ant=0;
	sig=1;
	cout << "n?" <<endl;
	cin >> val;
		if (val==1){
		cout << val;
		}
		if (val==2){
		cout << ant  << sig;
		}
		if (val>=3){
		cout << ant<< sig;
		}
			for (int i=3;i<=val;i=i+1){
			cout<<" ";
			sum=ant+sig;
			cout << sum;
			ant=sig;
			sig=sum;
			}
}
