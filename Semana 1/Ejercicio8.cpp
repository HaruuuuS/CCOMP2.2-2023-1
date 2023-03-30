
//Ejercicio 2.27
#include <iostream>
using namespace std;

int main(){ 
    char caracter;
    cout<<"Escriba un caracter "<<endl;
    cin>>caracter;

    cout<<"Este es su caracter "<< caracter<< endl;
    cout<<"Este es su equivalencia en entero "<<static_cast<int>(caracter)<<endl;
}
