#include <iostream>
#include <stack>
using namespace std;

class pilas_colas{
private:
    int numero_de_argollas;
  stack<int> origen;
  stack<int> destino;
  stack<int> auxiliar;

public:
    pilas_colas(stack<int>origen);
    void datos();
    void hanoi(int numero_de_argollas, stack<int> &origen, stack<int> &destino, stack<int> &auxiliar);
};
pilas_colas::pilas_colas(stack<int>origen){
    for (int i=0; i<numero_de_argollas; i++){
        origen.push(numero_de_argollas-i);
    }
}
void pilas_colas::hanoi(int numero_de_argollas, stack<int> &origen, stack<int> &destino, stack<int> &auxiliar){
    if (numero_de_argollas == 1){
      int top = origen.top();
      destino.push(top);
      origen.pop();

      cout<<"Mueva el bloque "<<numero_de_argollas<<" desde "<<&origen<<" hasta  "<<&destino<<endl;
      return;
  }
  else{
      pilas_colas::hanoi(numero_de_argollas-1, origen, auxiliar, destino);
      int top = origen.top();
      destino.push(top);
      origen.pop();
      cout<<"Mueva el bloque "<<numero_de_argollas<<" desde "<<&origen<<" hasta  "<<&destino<<endl;
      pilas_colas::hanoi(numero_de_argollas-1, auxiliar, destino, origen);
  }
  return;
}
int main(){
    int n;
    cout<<"Ingresa el numero de argollas :";
    cin>>n;
    stack<int>prueba;
    stack<int>prueba_auxiliar;
    stack<int>prueba_destino;
    for (int i=0; i<n; i++){
      prueba.push(n-i);
    }
    pilas_colas pp(prueba);

    pp.hanoi(n,prueba,prueba_auxiliar,prueba_destino);



}
