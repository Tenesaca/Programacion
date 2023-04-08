#include <iostream>

int main() {
  int a, b, c;
  
  std::cout << "Ingrese el primer número: ";
  std::cin >> a;
  
  std::cout << "Ingrese el segundo número: ";
  std::cin >> b;
  
  c = a + b;
  
  std::cout << "La suma de " << a << " y " << b << " es: " << c << std::endl;
  
  return 0;
}
