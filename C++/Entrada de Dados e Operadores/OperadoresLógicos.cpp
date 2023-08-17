#include <iostream>

using namespace std;

int main(){
    int numero;
    bool MaiorQue100, ResultadoLogico;

    cout << "Digite o número: " << "\n";
    cin >> numero;

    MaiorQue100 = (numero > 100);
    cout << "O resultado lógico da comparação é: " << MaiorQue100 << "\n";

    ResultadoLogico = ((numero > 100) && (numero != 0));
    cout << "O resultado lógico da comparação é: " << ResultadoLogico << "\n";

    ResultadoLogico = ((numero > 100) || (numero < 1000));
    cout << "O resultado lógico da comparação é: " << ResultadoLogico << "\n";
}