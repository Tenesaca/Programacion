#include <iostream>

using namespace std;

int main() {
    int n, num, suma = 0;

    cout << "Ingrese la cantidad de números a sumar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> num;
        suma += num;
    }

    cout << "La suma de los " << n << " números es: " << suma << endl;

    return 0;
}
