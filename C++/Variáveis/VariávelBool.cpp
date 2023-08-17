#include <iostream>
#include <iomanip>

int main(){
    bool encontrou; // qualquer coisa diferente de 0 é true
    
    encontrou = 1;
    std::cout << "Valor de encontrou: " << encontrou << "\n";

    encontrou = 0;
    std::cout << "Valor de encontrou: " << encontrou << "\n";

    encontrou = true;
    std::cout << "Valor de encontrou: " << encontrou << "\n";

    encontrou = false;
    std::cout << "Valor de encontrou: " << encontrou << "\n";
}