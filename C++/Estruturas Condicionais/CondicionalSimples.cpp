#include <iostream>
#include <string>

using namespace std;

int main(){
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
}