
//Ejercicio 2.32
#include <iostream>

using namespace std;

int main (){
    int edad;

    cout << "Ingrese su edad: ", cin >> edad;

    float MHR;
    float MHR2001; 
    float MHR2007;
    float MHR2012;

    MHR = 220 - edad;
    MHR2001 = 208 -0.7*(edad);
    MHR2007 = 207 -0.7*(edad);
    MHR2012 = 211 - 0.64*(edad);

    cout << "Segun los estudios su MHR puede ser: "<<endl;

    cout << "En general: "<<MHR<<endl;
    cout << "Segun el 2001: "<<MHR2001<<endl;
    cout << "Segun el 2007: "<<MHR2007<<endl;
    cout << "Segun el 2012: "<<MHR2012<<endl;

    return 0;



}

