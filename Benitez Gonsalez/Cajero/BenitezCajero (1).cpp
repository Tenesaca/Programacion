#include <iostream> 

using namespace std; 

int main() {
    float x, y, z;
 
    cin >> x >> y; 
    z = x - y; 
    
    if (z > 0) { 
        cout << "Si hay saldo";
    } else {
        cout << "no hay saldo"; 
    }
    
    return 0;
}