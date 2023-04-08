#include <iostream>

using namespace std;

int main() {
    int num1, den1, num2, den2, numRes, denRes;

    cout << "Ingrese el numerador de la primera fracción: ";
    cin >> num1;

    cout << "Ingrese el denominador de la primera fracción: ";
    cin >> den1;

    cout << "Ingrese el numerador de la segunda fracción: ";
    cin >> num2;

    cout << "Ingrese el denominador de la segunda fracción: ";
    cin >> den2;

    // Realizar la suma de las fracciones
    numRes = num1 * den2 + num2 * den1;
    denRes = den1 * den2;

    // Simplificar la fracción resultante
    int gcd, a, b;
    a = numRes;
    b = denRes;

    while (b != 0) {
        gcd = b;
        b = a % b;
        a = gcd;
    }

    numRes /= gcd;
    denRes /= gcd;

    cout << "La suma de las fracciones es " << numRes << "/" << denRes << endl;

    return 0;
}
