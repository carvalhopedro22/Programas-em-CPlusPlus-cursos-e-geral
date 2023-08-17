#include <iostream>
#include <string>

using namespace std;

int main(){
    double Numero01, Numero02, MaiorNumero;

    cout << "Digite o primeiro número: " << "\n";
    cin >> Numero01;

    cout << "Digite o segundo número: " << "\n";
    cin >> Numero02;

    // Utilizando condicional com IF
    
    /* if(Numero01 > Numero02){
        cout << "Numero01 maior que Numero02" << "\n";
    } else {
        cout << "Numero02 maior que Numero01" << "\n";
    } */

    // Utilizando condicional com op Ternário

    // Se o número01 for maior, a variável MaiorNumero recebe Numero01. Caso contrário recebe Numero02
    MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
    cout << "Maior número digitado: " << MaiorNumero << "\n";

    // O operador ternário está decidindo qual comando será executado
    (Numero01 > Numero02) ? cout << "Numero01 maior\n" : cout << "Numero02 maior\n";
}