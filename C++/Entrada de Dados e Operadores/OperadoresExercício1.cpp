#include <iostream>

using namespace std;

int main(){
    float numero1, numero2, numero3;

    cout << "Digite o primeiro número: " << "\n";
    cin >> numero1;

    cout << "Digite o segundo número: " << "\n";
    cin >> numero2;

    cout << "Digite o terceiro número: " << "\n";
    cin >> numero3;

    float media = (numero1 + numero2 + numero3)/3;

    cout << "A média dos números vale: " << media << "\n";

}