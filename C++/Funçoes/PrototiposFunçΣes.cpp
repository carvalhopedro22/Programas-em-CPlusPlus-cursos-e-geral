#include <iostream>

using namespace std;

float soma(float num1, float num2){ // num1 e num2 são os parâmetros
    return num1 + num2;
}

int main(){
    // A execução do programa é feita de cima para baixo
    // Nesse caso, a função soma tem que estar antes da main
    // Se estiver em baixo teremos erro
    cout << soma(100, 500) << "\n"; // 100 e 500 são os argumentos
    return 0;
}

// Podemos colocar o cabeçalho da funçao acima da main e o restante dela abaixo
// Assim não teremos erro.
// São os chamados protótipos. Por exemplo:
// float soma(float num1, float num2);