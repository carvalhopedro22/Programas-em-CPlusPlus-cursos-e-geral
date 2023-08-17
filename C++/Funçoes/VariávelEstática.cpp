#include <iostream>

int ContadorChamada(){
    // Variável estática: Após a saída da função, o valor da variável não será perdido
    static int NumChamadasDaFuncao = 0;
    NumChamadasDaFuncao++;
    return NumChamadasDaFuncao;
}

using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        cout << ContadorChamada() << "\n";
    }
}