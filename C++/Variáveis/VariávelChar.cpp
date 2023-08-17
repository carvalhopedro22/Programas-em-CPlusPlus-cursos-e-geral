#include <iostream>
#include <iomanip>

int main(){
    char caractere = '3';
    char caractere2 = 'k';

    std::cout << "Valor Caractere: " << caractere << "\n";
    std::cout << "Tamanho da variável Caractere: " << sizeof(caractere) << "Bytes" << "\n";
    std::cout << "Endereço carregado na memória: " << &caractere << "\n";
}