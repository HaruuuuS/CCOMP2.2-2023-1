
//Ejercicio 2.30
#include <iostream>
using namespace std;

int main(){ 
    int peso;
    float altura;
    int IMC(1);

    cout<<"Ingrese su peso en kilos"<<endl;
    cin>>peso;
    cout<<"Ingrese su altura en metros"<<endl;
    cin>>altura;

    IMC = peso/(altura*altura);

    if (IMC<18.5)
        cout<<"Usted tiene bajo peso"<<endl;

    else if (IMC>=18.5 and IMC <=24.9)
        cout<<"Usted tiene un peso normal"<<endl;

    else if (IMC>=25 and IMC<= 29.4)
        cout<<"Usted tiene sobrepeso"<<endl;
        
    else if (IMC >= 30)
        cout<<"Usted es obeso"<<endl;
    
    
    return 0;


}
