#include <iostream>

int main(){

    // Declaração de Variáveis -> Tipo - Nome - Valor
    int NumVidas = 5;
    int Score = 1350;
    
    std::cout << "*******INICIO DO JOGO*******" << std::endl;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Pontuação: " << Score << std::endl;
    std::cout << "Endereço que NumVidas Ocupa na Memória: " << &NumVidas << std::endl;
    std::cout << "Endereço que Pontuação Ocupa na Memória: " << &Score << std::endl;
    std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
    std::cout << "Tamanho da Variável Pontuação: " << sizeof(Score) << "Bytes" << "\n";
    std::cout << "****************************" << std::endl;

    std::cout << "*******DURANTE O JOGO*******" << std::endl;
    Score = Score + 150;
    NumVidas = NumVidas - 1;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Pontuação: " << Score << std::endl;
    std::cout << "****************************" << std::endl;
    return 0;
}