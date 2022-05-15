#include <iostream>
#include <vector>
using namespace std;
class datos
{
private:
    int numeros;
public:
    datos(){
    this->numeros=0;
    }
int retornarvalor(){

return this->numeros;
}
void insertar(int t){
this->numeros = t;

}
void mostrar(){

    cout<<"numero "<<this->numeros<<endl;
}
};
int main()
{

vector<datos> variables;
int opc;
do{
    system("cls");
    cout<<"1 ingresar"<<endl;
    cout<<"2 mostrar "<<endl;
    cout<<"3 eliminar "<<endl;
    cout<<"4 salir "<<endl;
    cin>>opc;
    if (opc==1){
        system("cls");
        int t;
        datos v = datos();
        cout<<"ingrese el num "<<endl;
        cin>>t;
        v.insertar(t);
        variables.push_back(v);
        system("pause");


    }
    else if (opc==2){
            system("cls");
        cout<<"estos son los numeros guardados"<<endl;
        for(int i=0;i<variables.size();i++){
            variables[i].mostrar();
        }
        system("pause");

    }
    else if (opc==3){
        system("cls");
        int valor;
        cout<<"ingrese el valor a eliminar"<<endl;
        cin>>valor;
        for(int i=0;i<variables.size();i++){
            if(variables[i].retornarvalor()==valor){
                variables.erase(variables.begin()+i);
                break;
            }
        }
        system("pause");

    }
}while(opc!=4);

}
