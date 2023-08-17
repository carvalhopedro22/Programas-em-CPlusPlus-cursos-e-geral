#include <iostream>

using namespace std;

int main(){
    int numero{1024};
    char letra{'A'};

    int &Ref = numero;

    cout << "VALOR de numero usando Ref: " << Ref << "\n";
    cout << "VALOR Endereço de numero: " << &numero << "\n";
    // Referência não tem endereço na RAM
    cout << "VALOR Endereço de Ref: " << &Ref << "\n";

    int *ptr = &numero;

    cout << "VALOR Endereço de ptr na RAM: " << &ptr << "\n";
    cout << "VALOR de numero usando ptr: " << *ptr << "\n";
    cout << "VALOR Endereço contido dentro de ptr: " << ptr << "\n";
    return 0;
}