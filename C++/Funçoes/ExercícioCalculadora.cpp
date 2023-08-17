#include <iostream>

using namespace std;


// Protótipos das funções
float soma(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);


int main(){
    int numero1, numero2;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "O resultado da soma é: " << soma(numero1, numero2) << "\n";
    cout << "O resultado da subtração é: " << subtracao(numero1, numero2) << "\n";
    cout << "O resultado da multiplicação é: " << multiplicacao(numero1, numero2) << "\n";
    cout << "O resultado da divisão é: " << divisao(numero1, numero2) << "\n";
}


// Implementação das funções
float soma(float num1, float num2){
    return num1 + num2;
}

float subtracao(float num1, float num2){
    return num1 - num2;
}

float multiplicacao(float num1, float num2){
    return num1 * num2;
}

float divisao(float num1, float num2){
    return num1 / num2;
}