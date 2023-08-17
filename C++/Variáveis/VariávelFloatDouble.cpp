#include <iostream>
#include <iomanip> // Para não arredondar números reais

int main(){
    float numero;
    numero = 55.56;

    double numero2 = 45345.904555f;

    std::cout << "Valor do número: " << numero << "\n";
    std::cout << "Valor do número 2: " << std::setprecision(12) << numero2 << "\n"; // Tirando o arredondamento
}