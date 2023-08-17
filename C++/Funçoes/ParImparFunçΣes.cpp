#include <iostream>

using namespace std;


// Protótipo da função
bool isPar(int num);


int main(){
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if(isPar(numero)){
        cout << "Núero: " << numero << " PAR" << "\n";
    } else {
        cout << "Núero: " << numero << " ÍMPAR" << "\n";
    }

    return 0;
}


bool isPar(int num){
    if(num % 2 == 0){
        return true;
    } else {
        return false;
    }
}