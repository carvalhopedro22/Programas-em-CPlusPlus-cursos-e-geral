#include <iostream>

using namespace std;

int main(){
    int numero{4096};
    // int *ptr = &numero;
    // int *ptr - declara a variável ponteiro de nome ptr
    // = &numero - coloca dentro da variável ptr o endereço de memória da variável numero

    // É uma simplificação de: 
    int *ptr;
    ptr = &numero;
    
    cout << "VALOR da variável numero: " << numero << "\n \n";
    cout << "VALOR da variável ptr: " << ptr << "\n \n";

    cout << "ENDEREÇO da variável numero: " << &numero << "\n \n";
    cout << "ENDEREÇO da variável ptr: " << &ptr << "\n \n";

    cout << "VALOR contido na variável APONTADA por ptr: " << *ptr << "\n \n";
    *ptr = 30963;
    cout << "VALOR contido na variável APONTADA por ptr: " << *ptr << "\n \n";
    // *ptr retorna o valor apontado pelo ponteiro

    return 0;
}