#include <iostream>

using namespace std;

void TrocaNumeros(int *num1, int *num2);

int main(){
    // numero1 e numero2 são variáveis locais da função main
    int numero1, numero2;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Valores antes da troca: " << "\n";
    cout << "Numero1: " << numero1 << "\n";
    cout << "Numero2: " << numero2 << "\n";

    cout << "Valores depois da troca: " << "\n";
    // Endereços que serão colocados em *num1 e *num2
    TrocaNumeros(&numero1, &numero2);

    cout << "Numero1: " << numero1 << "\n";
    cout << "Numero2: " << numero2 << "\n";
    return 0;
}

void TrocaNumeros(int *num1, int *num2){
    int temp{*num1};
    *num1 = *num2;
    *num2 = temp;
}