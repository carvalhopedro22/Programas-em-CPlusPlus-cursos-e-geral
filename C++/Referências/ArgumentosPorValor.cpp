#include <iostream>

using namespace std;

void TrocaNumeros(int &num1, int &num2);

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
    // Essa chamada não vai funcionar pois a troca ocorre apenas nas variáveis locais da função TrocaNUmeros
    // As variáveis da main tem endereços diferentes das variáveis da TrocaNumeros
    TrocaNumeros(numero1, numero2);

    // Então precisamos fazer assim: colocar o & no protótipo e na função
    // Temos que fazer a passagem de argumentos por valor, copiando o valor de uma função à outra
    cout << "Numero1: " << numero1 << "\n";
    cout << "Numero2: " << numero2 << "\n";
    return 0;
}

// num1 e num2 são variáveis locais da função TrocaNumeros
void TrocaNumeros(int &num1, int &num2){
    // Precisamos de um local temporário para armazenar num1
    int temp{num1};
    num1 = num2;
    num2 = temp;
}