#include <iostream>
using namespace std;
int main(){
string con, confir;
    cout<<"Introduzca su contrasenia";
    getline(cin, con);
    do{
       cout<<"confirme su contrasenia";
       getline(cin, confir);
       if(confir==con){
           cout<<"Contrasenia Correcta"<<endl;
       }
       else {
           cout<<"Contrasenia Incorrecta"<<endl;
       }
     }while(con!=confir);
     cin.get();
}
