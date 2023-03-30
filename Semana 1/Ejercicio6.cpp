
//Ejercicio 2.25
#include <iostream>
using namespace std;

int main(){ 
    int num1;
    int num2;
    int num3;
    cout<<"Ingrese el primer numero "<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero "<<endl;
    cin>>num2;
    cout<<"Ingrese el tercer numero "<<endl;
    cin>>num3;

    if ((num1*num2) % num3 == 0)
        cout<<"Los dos primeros numeros son factoriales del tercero";
    else
        cout<<"Los dos primeros numeros no son factoriales del tercero";

    return 0;

}

