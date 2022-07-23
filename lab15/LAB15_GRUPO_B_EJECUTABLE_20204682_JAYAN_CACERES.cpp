#include <iostream>
#include <vector>
using namespace std;
class Producto1 {
public:

    vector<string> componentes;
    vector<string> colores;
void ListaComp()const {
    cout << "Componentes : "<<endl;
    for (size_t i = 0; i < componentes.size(); i++) {
        if (componentes[i] == componentes.back()) {
            cout << componentes[i]<<" "<<colores[i]<<endl;
        }
        else {
            cout << componentes[i]<<" "<<colores[i] <<endl;
        }
        }
            cout << "\n\n";
}
};
/* La interfaz de Builder especifica métodos para crear las diferentes partes
de los objetos Product. */
class IBuilder {
public:
virtual ~IBuilder() {}
virtual void ProducirParteA() const = 0;
virtual void ProducirParteB() const = 0;
virtual void ProducirParteC() const = 0;
virtual void ProducirParteD() const = 0;
virtual void ProducirParteE() const = 0;
virtual void ProducirParteF() const = 0;
virtual void ProducirColor1() const  = 0;
virtual void ProducirColor2() const  = 0;
virtual void ProducirColor3() const  = 0;
virtual void ProducirColor4() const  = 0;
};

/* Las clases de BuilderEspecifico siguen la interfaz de Builder y proporcionan
implementaciones específicas de los pasos de construcción. El programa puede
tener varias variaciones de Builders, implementadas de manera diferente. */

class BuilderEspecifico : public IBuilder {
private:
Producto1* product;
public:
BuilderEspecifico() {
this->Reset();
}
~BuilderEspecifico() {
delete product;
}
void Reset() {
this->product = new Producto1();
}
void ProducirParteA()const override {
this->product->componentes.push_back("puertas");
}
void ProducirParteB()const override {
this->product->componentes.push_back("llantas");
}
void ProducirParteC()const override {
this->product->componentes.push_back("espejos");
}
void ProducirParteD()const override {
this->product->componentes.push_back("asientos");
}
void ProducirParteE()const override {
this->product->componentes.push_back("motor");
}
void ProducirParteF()const override {
this->product->componentes.push_back("timon");
}
void ProducirColor1()const override {
this->product->colores.push_back("rojo");
}
void ProducirColor2()const override {
this->product->colores.push_back("verde");
}
void ProducirColor3()const override {
this->product->colores.push_back("amarillo");
}
void ProducirColor4()const override {
this->product->colores.push_back("azul");
}
Producto1* GetProducto() {
Producto1* resultado = this->product;
this->Reset();
return resultado;
}
};
/*El Director solo es responsable de ejecutar los pasos de construcción en una
secuencia particular. Es útil cuando se fabrican productos de acuerdo con un
pedido o configuración específicos. Estrictamente hablando, la clase Director
es opcional, ya que el cliente puede controlar directamente a los
constructores.*/
class Director {
private:
IBuilder* builder;
public:
void set_builder(IBuilder* builder) {
this->builder = builder;
}
void BuildProductoMin() {
this->builder->ProducirParteA();
}
};
/* El código del cliente crea un objeto constructor, se lo pasa al director y
luego inicia el proceso de construcción. El resultado final se recupera del
objeto constructor. */
void ClienteCode(Director& director){
BuilderEspecifico* builder = new BuilderEspecifico();
director.set_builder(builder);
Producto1* p = builder->GetProducto();
int opc,coll;
int matiz;
do{
    cout<<"<<<<<<MENU>>>>>>>>>"<<endl;
        cout<<"[1] agregar puertas "<<endl;
        cout<<"[2] agregar llantas "<<endl;
        cout<<"[3] agregar espejos "<<endl;
        cout<<"[4] agregar asientos "<<endl;
        cout<<"[5] agregar motor "<<endl;
        cout<<"[6] agregar timon"<<endl;
        cout<<"[1] rojo"<<endl;
        cout<<"[2] verde"<<endl;
        cout<<"[3] amarillo"<<endl;
        cout<<"[4] azul"<<endl;
        cout<<"[5] sin anadimientos"<<endl;
        cout<<"[7] mostrar "<<endl;

        cout<<"[9] salir del programa"<<endl;
        cin>>opc;

        switch(opc){

        case 1:
            cout<<"agregando unas puertas..."<<endl;
            builder->ProducirParteA();
            cout<<"color"<<endl;
            cin>>matiz;
            if(matiz==1){
                builder->ProducirColor1();
            }
            else if(matiz==2){
                builder->ProducirColor2();
            }
            else if(matiz==3){
                builder->ProducirColor3();
            }
            else if(matiz==4){
                builder->ProducirColor4();
            }
            else{
                cout<<"no hay cambios"<<endl;
            }

            system("pause");
            break;

        case 2:
            cout<<"agregando unas llantas..."<<endl;
            builder->ProducirParteB();
            cout<<"color"<<endl;
            cin>>matiz;
            if(matiz==1){
                builder->ProducirColor1();
            }
            else if(matiz==2){
                builder->ProducirColor2();
            }
            else if(matiz==3){
                builder->ProducirColor3();
            }
            else if(matiz==4){
                builder->ProducirColor4();
            }
            else{
                cout<<"no hay cambios"<<endl;
            }

            system("pause");
            break;

        case 3:
            cout<<"agregando unos espejos..."<<endl;
            builder->ProducirParteC();
            cout<<"color"<<endl;
            cin>>matiz;
            if(matiz==1){
                builder->ProducirColor1();
            }
            else if(matiz==2){
                builder->ProducirColor2();
            }
            else if(matiz==3){
                builder->ProducirColor3();
            }
            else if(matiz==4){
                builder->ProducirColor4();
            }
            else{
                cout<<"no hay cambios"<<endl;
            }


            system("pause");
            break;

        case 4:
            cout<<"agregando unas asientos..."<<endl;
            builder->ProducirParteD();
            cout<<"color"<<endl;
            cin>>matiz;
            if(matiz==1){
                builder->ProducirColor1();
            }
            else if(matiz==2){
                builder->ProducirColor2();
            }
            else if(matiz==3){
                builder->ProducirColor3();
            }
            else if(matiz==4){
                builder->ProducirColor4();
            }
            else{
                cout<<"no hay cambios"<<endl;
            }


            system("pause");
            break;

        case 5:
            cout<<"agregando unas motor..."<<endl;
            builder->ProducirParteE();
            cout<<"color"<<endl;
            cin>>matiz;
            if(matiz==1){
                builder->ProducirColor1();
            }
            else if(matiz==2){
                builder->ProducirColor2();
            }
            else if(matiz==3){
                builder->ProducirColor3();
            }
            else if(matiz==4){
                builder->ProducirColor4();
            }
            else{
                cout<<"no hay cambios"<<endl;
            }


            system("pause");
            break;

        case 6:
            cout<<"agregando unas timon..."<<endl;
            builder->ProducirParteF();
            cout<<"color"<<endl;
            cin>>matiz;
            if(matiz==1){
                builder->ProducirColor1();
            }
            else if(matiz==2){
                builder->ProducirColor2();
            }
            else if(matiz==3){
                builder->ProducirColor3();
            }
            else if(matiz==4){
                builder->ProducirColor4();
            }
            else{
                cout<<"no hay cambios"<<endl;
            }


            system("pause");
            break;

        case 7:
            cout<<"mostrando datos..."<<endl;
            p=builder->GetProducto();
            p->ListaComp();
            system("pause");
            break;


        }

        system("cls");

    }while(opc!=9);


delete builder;

}


int main(){
Director* director = new Director();
ClienteCode(*director);
delete director;
return 0;
}
