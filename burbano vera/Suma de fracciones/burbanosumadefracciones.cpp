#include <iostream>

using namespace std;

int main() {
    int n1, d1, n2, d2, nRes, dRes;

    cout << "Ingrese el numerador de la primera fracción: ";
    cin >> n1;

    cout << "Ingrese el denominador de la primera fracción: ";
    cin >> d1;

    cout << "Ingrese el numerador de la segunda fracción: ";
    cin >> n2;

    cout << "Ingrese el denominador de la segunda fracción: ";
    cin >> d2;

    // Realizar la suma de las fracciones
    nRes = n1 * d2 + n2 * d1;
    dRes = d1 * d2;

    // Simplificar la fracción resultante
    int gcd, a, b;
    a = nRes;
    b = dRes;

    while (b != 0) {
        gcd = b;
        b = a % b;
        a = gcd;
    }

    nRes /= gcd;
    dRes /= gcd;

    cout << "La suma de las fracciones es " << nRes << "/" << dRes << endl;

    return 0;
}
