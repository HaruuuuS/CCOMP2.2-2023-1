
//Ejercicio 2.24
#include <iostream>

using namespace std;

int main(){ 
    int num1;
    int num2;
    int resultado;
    cout<<"Escriba el primer número"<<endl;
    cin>>num1;
    cout<<"Escriba el segundo número"<<endl;
    cin>>num2;

    if ((num1 + num2) % 2 == 0)
        cout<<"Es numero par"<<endl;
    else
        cout<<"Es numero impar"<<endl;

    return 0;
}
