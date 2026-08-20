#include <iostream>

using namespace std;

int main() {
    int numero1 = 5;
    int numero2 = 10;
    int numero3 = 15;
    int* puntero;

    puntero = &numero1;
    cout << *puntero << '\n';

    puntero = &numero2;
    cout << *puntero << '\n';

    puntero = &numero3;
    cout << *puntero << '\n';

    return 0;
}