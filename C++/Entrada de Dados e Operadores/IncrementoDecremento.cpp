#include <iostream>

using namespace std;

int main(){
    int num1{10}, num2{20}, resultado;

    cout << "Valor atual de num1: " << num1 << "e" << "num2: " << num2 << "\n";

    //num2++ é o mesmo que num2 = num2 + 1, incrementa somente depois da instrução (pós-fixado)
    //num1 vai receber num2 atual e apenas depois disso num2 é incrementado
    num1 = num2++;
    cout << "Valor atual de num1: " << num1 << "e" << "num2: " << num2 << "\n";

    //Aqui é pré-fixado. A variável é incrementada primeiro para depois ser atribuída
    num2 = ++num1;
    cout << "Valor atual de num1: " << num1 << "e" << "num2: " << num2 << "\n";
}