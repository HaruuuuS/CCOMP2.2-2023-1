/*//Ejercicio 2.20 
#include <iostream>

using namespace std;

int main (){
    int radio;

    cout <<"ingrese el radio de su circulo: " , cin >> radio;

    cout << "el area del circulo es: " << 3.14159 * (radio*radio) <<endl;
    cout << "la circunferencia del circulo es: " << 23.14159*radio <<endl;
    cout << "el diametro del circulo es: " << 2*radio <<endl;

    return 0;


}
*/

/*
//Ejercicio 2.21
#include <iostream>

using namespace std;

int main(){

    cout << "   ccc         +           +"<<endl;
    cout << "  c            +           +"<<endl;
    cout << " c          +++++++     +++++++"<<endl;
    cout << "  c            +           +"<<endl;
    cout << "   ccc         +           +"<<endl;


}

*/
/*
//Ejercicio 2.22
#include <iostream>

using namespace std;

int main(){ 
    cout<<"*****\n*****\n***\n **\n*\n" << endl;
    return 0;

}
*/
/*
//Ejercicio 2.23
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5, max, min;

    cout << "Ingrese cinco números enteros: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Encontrar el número mayor
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    if (num5 > max) {
        max = num5;
    }

    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }
    if (num5 < min) {
        min = num5;
    }


    cout << "El número mayor es: " << max << endl;
    cout << "El número menor es: " << min << endl;

    return 0;
}
*/
/*
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
*/
/*
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

    if ((num1*num2) % num3 == 1)
        cout<<"Los dos primeros numeros son factoriales del tercero";
    else
        cout<<"Los dos primeros numeros no son factoriales del tercero";

    return 0;

}

*/
/*
//Ejercicio 2.26
#include <iostream>
using namespace std;

int main(){ 
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;

    cout<<"////////////////////////"<<endl;

    cout<<"* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n"<<endl;
    return 0;

}
*/
/*
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
*/
/*
//Ejercicio 2.28
#include <iostream>
using namespace std;
 
int main (){
    int num;
    cout << "Ingrese un numero de cuatro digitos: ", cin >> num;

    int var1, var2, var3, var4;
    var1 = num / 1000;
    num = num % 1000;
    var2 = num / 100;
    num = num % 100;
    var3 = num / 10;
    num = num %10;
    var4 = num;

    cout << var4 << " "<<var3 << " "<<var2 << " "<<var1;

    return 0;

}
*/
/*
//Ejercicio 2.29
#include <iostream>
using namespace std;

int main(){
    int lado0(0);
    int lado1(1);
    int lado2(2);
    int lado3(3);
    int lado4(4);

    cout<<"Face  Surface  Volume"<<endl;
    cout<<lado0<<"\t"<<6*(lado0*lado0)<<"\t"<<lado0*lado0*lado0<<endl<<lado1<<"\t"<<6*(lado1*lado1)<<"\t"<<lado1*lado1*lado1<<endl<<lado2<<"\t"<<6*(lado2*lado2)<<"\t"<<lado2*lado2*lado2<<endl<<lado3<<"\t"<<6*(lado3*lado3)<<"\t"<<lado3*lado3*lado3<<endl<<lado4<<"\t"<<6*(lado4*lado4)<<"\t"<<lado4*lado4*lado4<<endl;

    return 0;
}
*/
/*
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
*/
/*
//Ejercicio 2.31
#include <iostream>
using namespace std;

int main(){
    float media_de_galon_km, precio_galon, km, tarifa_del_dia, peaje;

    float coste_diario;

    cout << "Ingrese la cantidad de km que recorrió de su casa a su trabajo: ", cin >> km;

    cout << "Ingrese el coste de galón: ",cin >> precio_galon;

    cout << "Ingrese la tarifa diaria de aparcamiento: ",cin >> tarifa_del_dia;

    cout << "Ingrese el coste del peaje: ",cin >> peaje;
  
    media_de_galon_km = km/precio_galon;

    coste_diario = media_de_galon_km + tarifa_del_dia + peaje;

    cout << "\nEl costo total a diario es: " << coste_diario << " soles" << endl;

  return 0;
}

*/
/*
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
*/





