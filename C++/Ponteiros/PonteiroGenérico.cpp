#include <iostream>

using namespace std;

int main(){
    int numero{4890};
    char Letra{'E'};

    // Esse ponteiro não possui um tipo para apontar
    // Útil para funções
    // Não se sabe que tipo de dados será retornado
    void *ptrG;

    // ptrG aponta para a variável Letra pois recebeu seu endereço de memória
    ptrG = &Letra;

    // Se não identificar o tipo dará erro
    // Precisamos então fazer um cast
    cout << "Valor de letra via ptrG = " << *(char*)ptrG << "\n";
    //*(cast para o tipo desejado)nome do Ponteiro - *(int*)ptrG, *(char*)ptrG...

    ptrG = &numero;
    cout << "Valor de numero via ptrG = " << *(int*)ptrG << "\n";

    // o * antes do parêntese indica que queremos o valor apontado pelo ponteiro
    return 0;
}