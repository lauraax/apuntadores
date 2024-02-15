#include <iostream>
using namespace std;

int main() {
    int numero = 42;
    int* ptrNumero = &numero; // Declaraci�n de un apuntador y asignaci�n de la direcci�n de 'numero'

    cout << "Valor de 'numero': " << numero << endl;
    cout << "Direcci�n de 'numero': " << &numero << endl;
    cout << "Valor de 'ptrNumero' (direcci�n): " << ptrNumero << endl;
    cout << "Valor al que apunta 'ptrNumero': " << *ptrNumero << endl;

    // Modificando el valor al que apunta el apuntador
    *ptrNumero = 100;

    cout << "\nDespu�s de modificar el valor a trav�s del apuntador:" << endl;
    cout << "Valor de 'numero': " << numero << endl;
    cout << "Valor al que apunta 'ptrNumero': " << *ptrNumero << endl;

    return 0;
}
