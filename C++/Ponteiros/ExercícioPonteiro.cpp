#include <iostream>

using namespace std;

int main(){
    int numero{234};

    int *ponteiro;
    // Inicializando o ponteiro com o endereço da variável numero
    ponteiro = &numero;

    // Trocando o valor da variável que é apontada pelo ponteiro
    *ponteiro = 1456;

    int *outroPtr;
    // outroPtr = ponteiro e ponteiro = &numero, então outroPtr = &numero
    outroPtr = ponteiro;

    cout << "O novo VALOR de número é: " << *ponteiro << "\n";

    cout << "O ENDEREÇO DA RAM de numero é: " << &numero << "\n";
    cout << "O ENDEREÇO DA RAM de ponteiro é: " << &ponteiro << "\n";

    *ponteiro = *ponteiro + 200;

    cout << "O novo VALOR de número é: " << *outroPtr << "\n";
}