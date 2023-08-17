#include <iostream>
#include <string>

int main(){
    
    // Podemos inicializar variáveis utilizando {} ou (). Também podem inicializar vetores
    int numeroInteiro {12}; 
    float numeroReal {34.56};
    char caractere {'c'};
    std::string Texto {"Aprendendo C++"};

    // %d - inteiros
    // %f - float e double
    // %lf - double
    // %c - caracteres
    // %s - strings
    std::printf("Valor Número Inteiro = %d\n", numeroInteiro);
    std::printf("Valor Número real: %.2f\n", numeroReal);
    std::printf("Valor do caractere: %c\n", caractere);
    std::printf("O valor do caractere digitado: %c na tabela ASCII é: %d\n", caractere, caractere);
    std::printf("Valor da string: %s\n", Texto.c_str()); // precisa da função c_str() para strings (apenas no printf, se fosse cout não precisaria)
    std::cout << "Texto: " << Texto << "\n";
}