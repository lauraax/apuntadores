#include <iostream>

// Funci�n que modifica el valor a trav�s de un apuntador (paso por referencia)
void modificarPorReferencia(int* ptr) {
    *ptr = 10;
}

// Funci�n que modifica una copia del valor (paso por valor)
void modificarPorValor(int valor) {
    valor = 20;
}

int main() {
    int numero = 5;

    std::cout << "Valor original de 'numero': " << numero << std::endl;

    modificarPorValor(numero); // Paso por valor
    std::cout << "Despu�s de modificar por valor: " << numero << std::endl;

    modificarPorReferencia(&numero); // Paso por referencia (apuntador)
    std::cout << "Despu�s de modificar por referencia: " << numero << std::endl;

    return 0;
}
