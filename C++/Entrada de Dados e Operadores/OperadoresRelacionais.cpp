#include <iostream>

using namespace std;

int main(){
    int numero1, numero2;
    bool comparacao;

    cout << "Digite o primeiro número: " << "\n";
    cin >> numero1;

    cout << "Digite o segundo número: " << "\n";
    cin >> numero2;

    comparacao = (numero1 == numero2);
    cout << "numero1 = numero2?: " << comparacao << "\n";

    comparacao = (numero1 != numero2);
    cout << "numero1 != numero2?: " << comparacao << "\n";

    comparacao = (numero1 > numero2);
    cout << "numero1 > numero2?: " << comparacao << "\n";

    comparacao = (numero1 < numero2);
    cout << "numero1 < numero2?: " << comparacao << "\n";

    comparacao = (numero1 >= numero2);
    cout << "numero1 >= numero2?: " << comparacao << "\n";

    comparacao = (numero1 <= numero2);
    cout << "numero1 <= numero2?: " << comparacao << "\n";
}