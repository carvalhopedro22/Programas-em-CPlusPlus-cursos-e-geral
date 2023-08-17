#include <iostream>
#include <string>

using namespace std;

int main(){
    bool FezSol, CarroPronto, SalarioDepositado;
    bool Acesso;
    string Senha = "c++";
    string SenhaDigitada;

    cout << "Digite a senha: " << "\n";
    cin >> SenhaDigitada;

    if(SenhaDigitada == Senha){
        cout << "Acesso permitido" << "\n";
        Acesso = true;
    } else {
        cout << "Acesso negado" << "\n";
    }

    if(Acesso == true){
        if(FezSol && CarroPronto && SalarioDepositado){
            cout << "Podemos ir para a praia" << "\n";
        } else {
            cout << "Não podemos ir para a praia" << "\n";
        }
    }
}