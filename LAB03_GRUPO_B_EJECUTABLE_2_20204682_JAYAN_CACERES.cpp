#include <iostream>
using namespace std;
void bisiesto(int anio){
    cout<<"ingrese el anio a comprobar";
    cin>>anio;

    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0){ //Condición de año bisiesto
      cout << " si es un anio Bisiesto" << endl;
      return;
    }
   else
      cout << "No es  anio bisiesto" << endl;


}
int main(){
 int anio;
  
  bisiesto(anio);
}
