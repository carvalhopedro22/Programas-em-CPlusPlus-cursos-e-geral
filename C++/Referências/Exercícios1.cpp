#include <iostream>

using namespace std;

int main(){
    int numero{1024};
    int numero2{2024};

    // A referência precisa ser inicializada assim que é criada
    // Referência não é variável, é apenas um rótulo
    int &RefNum = numero2;
    RefNum = 5644;

    int *ptr;
    ptr = &numero;
    *ptr = 4048;
    cout << "Valor de número: " << *ptr << "\n";
    // No ponteiro podemos colocar outros endereços. Em referências não.
    ptr = &numero2;
    *ptr = numero + 2000;
    cout << "Valor de número2: " << *ptr << "\n";
    return 0;
}