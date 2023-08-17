#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1, num2;
    char operacao;
    
    cout << "Digite um número: ";
    cin >> num1;

    cout << "Digite um número: ";
    cin >> num2;

    cout << "Qual operação deseja efetuar? \n+ Adição \n- Subtraçao \n* Multiplicação \n/ Divisão\n";
    cout << "Digite sua opção: ";
    cin >> operacao;

    switch(operacao){
        case '+': cout << "\nSoma de Num1 + Num2 = " << num1 + num2 << "\n";
            break;
        
        case '-': cout << "\nSubtração de Num1 - Num2 = " << num1 - num2 << "\n";
            break;

        case '*': cout << "\nMultiplicação de Num1 * Num2 = " << num1 * num2 << "\n";
            break;
        
        case '/': cout << "\nDivisão de Num1 / Num2 = " << num1 / num2 << "\n";
            break;
        
        default: cout << "\nVocê não digitou um operador válido" << "\n";
            break;
    }
}