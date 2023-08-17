#include <iostream>

using namespace std;

int main(){
    int numero1, numero2;
    int soma;

    cout << "Digite o primeiro número: " << "\n";
    cin >> numero1;
    cout << "Número 1: " << numero1 << "\n";

    cout << "Digite o segundo número: " << "\n";
    cin >> numero2;
    cout << "Número 2: " << numero2 << "\n";

    soma = numero1 + numero2;
    cout << "A soma vale: " << soma << "\n";

    // o mesmo esquema para -, *, / e %
}