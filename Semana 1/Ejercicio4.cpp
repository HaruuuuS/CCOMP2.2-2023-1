
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
