#include <iostream>

using namespace std;

int main(){
    int numero{4096};
    // int *ptr = &numero;
    // int *ptr - declara a variável ponteiro de nome ptr
    // = &numero - coloca dentro da variável ptr o endereço de memória da variável numero

    // É uma simplificação de: 
    // Aqui é só declaração, pois tem o tipo
    int *ptr;
    int *ptr2;
    ptr = &numero;
    ptr2 = ptr;

    cout << "VALOR de número agora: " << numero << "\n \n";

    cout << "ENDEREÇO (valor) contido dentro de ptr: " << ptr << "\n";
    cout << "ENDEREÇO (valor) contido dentro de ptr2: " << ptr2 << "\n \n";

    cout << "ENDEREÇO de ptr na RAM: " << &ptr << "\n";
    cout << "ENDEREÇO de ptr2 na RAM: " << &ptr2 << "\n \n";

    cout << "Valor da variável APONTADA por ptr: " << *ptr << "\n";
    cout << "Valor da variável APONTADA por ptr2: " << *ptr2 << "\n \n";
    
    // O valor da variável apontada por ptr2 (4096) está recebendo ele mesmo + 10
    *ptr2 = *ptr2 + 10;
    cout << "VALOR de número agora: " << numero << "\n";

    return 0;
}