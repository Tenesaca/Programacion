#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2 << endl;
    } else if (num1 < num2) {
        cout << num2 << " es mayor que " << num1 << endl;
    } else {
        cout << num1 << " y " << num2 << " son iguales" << endl;
    }

    return 0;
}
