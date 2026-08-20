#include <iostream>

using namespace std;


void escribirTablaMultiplicar(int numero) {
    cout << "=== Tabla de multiplicar del " << numero << " ===" << endl;
    
   
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    
    cout << "=================================" << endl << endl;
}

int main() {
    
    escribirTablaMultiplicar(3);
    
   

    return 0;
}
