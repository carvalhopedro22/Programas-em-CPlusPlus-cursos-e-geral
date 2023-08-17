// Implementação das Funções

#include "Matematica.h"
#include <cmath>

int soma(int num1, int num2){
    int numeroLocal = 10; // Variável local, acessível apenas nesta função
    return num1 + num2;
}

int subtracao(int num1, int num2){
    return num1 - num2;
}

int multiplicacao(int num1, int num2){
    return num1 * num2;
}

int divisao(int num1, int num2){
    // Fazendo um cast (troca de tipos)
    return (float)num1 / (float)num2;
}   

int potencia(int num1, int num2){
    return pow(num1, num2);
}

int raizQuadrada(int num){
    return sqrt(num);
}