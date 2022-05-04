#include <iostream>
using namespace std;
int main(){
string dat_pers[3];
int doc_iden[3];
cout << "INGRESAR LOS DATOS:"<<endl;
for(int i=0;i<3; i++){
  cout << "DATOS PERSONALES"<<endl;
  cin>>dat_pers[i];
  cout << "DNI "<<endl;
  cin>>doc_iden[i];
}

for(int j=0;j<3;j++){
    cout<<"el dato de la "<<j+1<<" es"<<endl;
    cout<<dat_pers[j]<<endl;
    cout<<doc_iden[j]<<endl;
}
}
