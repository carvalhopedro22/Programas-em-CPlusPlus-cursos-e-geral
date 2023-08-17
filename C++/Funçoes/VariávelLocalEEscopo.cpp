#include <iostream>

using namespace std;

int main(){
    int i; // declarado fora do escopo do FOR
    for(i = 0; i < 5; i++){
        int j = i + 2; // declarado dentro do escopo do FOR
        cout << i << " " << j << "\n";
    }
    cout << "Valor final de i: " << i; // aqui não temos erro pois i foi declarado fora do bloco
    // Se fizermos a mesma linha com j, teremos erro pois j está dentro apenas do escopo do FOR
}