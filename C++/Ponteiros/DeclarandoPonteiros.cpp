#include <iostream>

using namespace std;

int main(){
    // Declarando uma variável ponteiro
    // Não inicializou com nenhum valor, então haverá lixo de memória
    int *ponteiro; 

    // Ponteiro que não aponta para lugar nenhum
    // int *ponteiro{nullptr}; 
   
    int numero{101};

    // Colocar o endereço da variável numero dentro da variável ponteiro
    ponteiro = &numero;
    // Aqui trocamos o valor no endereço que ele está apontando, ou seja, onde tem 101 recebe 103
    *ponteiro = 103;

    // Endereço de memória da variável número
    cout << "Endereço de numero: " << &numero << "\n";

    // &ponteiro vai colocar na tela o endereço de memória alocado para variável ponteiro
    // ou seja, onde na memória RAM ele está alocado?
    cout << "Endereço de ponteiro: " << ponteiro << "\n";

    // *ponteiro - O valor da variável cujo endereço está armazenado em ponteiro
    // O apontado por
    cout << "Valor que o ponteiro aponta: " << *ponteiro << "\n";

    return 0;
}