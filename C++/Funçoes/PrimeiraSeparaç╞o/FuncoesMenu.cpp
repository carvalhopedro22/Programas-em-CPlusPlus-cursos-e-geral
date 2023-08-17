#include <iostream>
#include <string>
#include "FuncoesMenu.h" // Entre aspas quando incluir .h

using namespace std;

// Aqui no .cpp - Implementações das funções do arquivo .h
void ExibirMenu(){
    
    do {   
        cout << "Tickets cinema" << "\n";
        cout << "1 - Meia entrada" << "\n";
        cout << "2 - Inteira" << "\n";
        cout << "3 - Sair" << "\n";
        
        // A função está chamando a função ProcessarEscolha
        
    } while(ProcessarEscolha(RetornarEscolha()) != 3); // enquanto a opção não for o 3 o menu aparecerá
}

int RetornarEscolha(){
    int escolha = 0;
    cout << "Escolha sua opção: ";
    cin >> escolha;
    //ProcessarEscolha(escolha);
    return escolha;
}

int ProcessarEscolha(int TipoEscolha){
    switch(TipoEscolha){
        case 1: cout << "Meia entrada" << "\n"; 
            break;
        case 2: cout << "Inteira" << "\n"; 
            break;
        case 3: cout << "Saindo do menu" << "\n"; 
            break;
        default: cout << "Opção Inválida" << "\n";
            break;        
    }
    return TipoEscolha;
}