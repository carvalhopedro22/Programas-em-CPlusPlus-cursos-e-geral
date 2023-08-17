#include <iostream>
#include "Matematica.h"

using namespace std;

int NumeroGlobal = 5; // variável global
// Podemos colocar ela em qualquer lugar, mas ela precisa ser declarada no .cpp respectivo
// Ou seja, ela é acessível a qualquer função

int main(){
    int numero1, numero2;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "O resultado da soma dos números digitados é: " << soma(numero1, numero2) << "\n";
    cout << "O resultado da subtração dos números digitados é: " << subtracao(numero1, numero2) << "\n";
    cout << "O resultado da multiplicação dos números digitados é: " << multiplicacao(numero1, numero2) << "\n";
    cout << "O resultado da divisão dos números digitados é: " << divisao(numero1, numero2) << "\n";
    cout << "O resultado da potenciação dos números digitados é: " << potencia(numero1, numero2) << "\n";
    cout << "O resultado da raiz quadrada do primeiro número digitado é: " << raizQuadrada(numero1) << "\n";
    cout << "O resultado da raiz quadrada do segundo número digitado é: " << raizQuadrada(numero2) << "\n";
}