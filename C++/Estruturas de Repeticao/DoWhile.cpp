#include <iostream>
#include <string>

using namespace std;

int main(){
    int escolha = 0;

    do {   
        cout << "Tickets cinema" << "\n";
        cout << "1 - Meia entrada" << "\n";
        cout << "2 - Inteira" << "\n";
        cout << "3 - Sair" << "\n";
        cout << "Escolha sua opção: ";
        cin >> escolha;

        switch(escolha){
            case 1: cout << "Meia entrada" << "\n"; 
                break;
            case 2: cout << "Inteira" << "\n"; 
                break;
            case 3: cout << "Saindo do menu" << "\n"; 
                break;
            default: cout << "Opção Inválida" << "\n";
                break;
        }
    } while(escolha != 3); // enquanto a opção não for o 3 o menu aparecerá
}