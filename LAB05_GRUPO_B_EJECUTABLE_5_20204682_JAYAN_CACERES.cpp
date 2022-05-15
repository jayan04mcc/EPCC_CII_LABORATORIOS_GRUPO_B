#include <iostream>
#include <time.h>
using namespace std;

class Clase
{
private:
	int x;
public:
	Clase()
	{
		x=1+rand()%(10-1);
	}
	int GetX()
	{
		return x;
	}
	void SetX(int x)
	{
		this->x = x;
	}
};

class Arreglo
{
private:
	Clase** A;
	int cant;
public:
	Arreglo()
	{
		cant = 0;
		A = new Clase*[cant];
	}
	void AgregarElemento()
	{
		Clase** B = new Clase*[cant + 1];

		for (int i = 0; i < cant; i++)
			B[i] = A[i];

		B[cant] = new Clase();

		cant++;
		A = B;
	}
	void buscarelemento(){
	    cout<<"ingrese el num a buscar"<<endl;
	    int nn;
	    cin>>nn;
	    int contador=0;
	    for(int i=0;i<cant;i++){
            if(A[i]->GetX()==nn){
                contador++;
            }
	    }
	    if(contador==0){
           cout<<"no se encuentra ese valor"<<endl;
	    }
	    else
            cout<<"ese valor si se encuentra y esta en la posicion "<<contador<<endl;



	}

	void MostrarElementos()
	{
		cout << "---------------------" << endl;

		for (int i=0;i<cant;i++)
		{

			cout <<"["<<i<<"]"<<"="<< A[i]->GetX() << endl;
		}
	}


	Clase* GetObjeto(int i)
	{
		return A[i];
	}
};

int main()
{
	srand(time(NULL));
	Arreglo* arreglo = new Arreglo();

	for (int i = 0; i < 9; i++)
	{
		arreglo->AgregarElemento();
	}
	arreglo->MostrarElementos();

	arreglo->buscarelemento();



	system("pause");
	return 0;
}
