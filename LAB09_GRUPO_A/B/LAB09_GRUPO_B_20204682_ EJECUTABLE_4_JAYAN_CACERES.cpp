#ifndef MAYOR_MENOR_VECTOR_H
#define MAYOR_MENOR_VECTOR_H
#include <iostream>
using namespace std;
template<class vec>
class mayor_menor_vector
{
private:
    vec n;

public:
    mayor_menor_vector(vec n=0);



vec m_n(){
    vec mayor=0;
   vec menor=0;
    cout<<"Valor de N: ";
    cin >> n;
    for (int i=0; i< n; i++){
        vec num;
       cout<<" Ingrese un valor"<<i+1<<":"<<endl;
       cin >> num;
        if (i==0){
            menor=num;
            mayor=num;
        }
        else{
            if(num>mayor)mayor=num;
            if(num<menor)menor=num;
        }


    }
    cout<<"El mayor es" <<mayor<<endl<<"el menor es "<<menor<<endl;

}
};
template<class vec>
mayor_menor_vector<vec>::mayor_menor_vector(vec n){

this ->n=n;
}

#endif // MAYOR_MENOR_VECTOR_H
//*****************************************************
#include <iostream>
#include <mayor_menor_vector.h>
using namespace std;

int main()
{
    mayor_menor_vector<int> p1(4);
    p1.m_n();

    return 0;
}
