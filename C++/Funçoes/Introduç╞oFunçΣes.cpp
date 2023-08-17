#include <iostream>

using namespace std;

// 1) Tipo de retorno da função
// 2) Nome da Função
// 3) Parâmetros
int FuncaoDeSoma(int num1, int num2){ // variáveis locais
    int soma = num1 + num2;
    return soma;
}

// void - sem retorno, sem parâmetros
void Mensagem(){
    cout << "Mensagem do além..." << "\n";
    return; // sai automaticamente da função ao encontrar um return
}

int main(){
    Mensagem();

    int num, numASerSomado, RetornoFunc;

    cout << "Digite o primeiro número: ";
    cin >> num;

    cout << "Digite o segundo número: ";
    cin >> numASerSomado;

    cout << "A soma do número: " << num 
         << " com o número: " << numASerSomado 
         << " é: " << FuncaoDeSoma(num, numASerSomado) << "\n";
         // num equivale ao parâmetro num1
         // numASerSomado equivale ao parâmetro num2
    
    RetornoFunc = FuncaoDeSoma(100, 98);
    cout << "O retorno vale: " << RetornoFunc << "\n";

    cout << "A chamada da função dentro da função vale: " 
         << FuncaoDeSoma(num, FuncaoDeSoma(150, 30)) << "\n";

    return 0;
}