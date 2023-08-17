// signed - números com sinal
// unsigned - números sem sinal
// long - aumentar a capacidade de armazenamento
// short - diminuir a capacidade de armazenamento
// sizeof - retorna o tamanho em bytes que um tipo de dados ocupa na memória

#include <iostream>
#include <limits>

// using namespace std;

int main(){
    std::cout << "Tamanho char: " << sizeof(char) << "\n";
    std::cout << "Tamanho int: " << sizeof(int) << "\n";
    std::cout << "Tamanho short int: " << sizeof(short int) << "\n";
    // long int, float, long float, double, long double, wchar_t

    // \t - tabulação
    std::cout << "Tipo\t\t Mínimo\t\t Máximo\n\n";
    
    std::cout << "bool\t\t"
         << +std::numeric_limits<bool>::min() << '\t' << '\t'
         << +std::numeric_limits<bool>::max() << '\n'; 
}