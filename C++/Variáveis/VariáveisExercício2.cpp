#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int var1 = 9;
    float var2 = 8.7;
    double var3 = 67.987;
    char var4 = 'P';

    cout << "Valor de var1: " << var1 << "\n";
    cout << "Tamanho de var1: " << sizeof(var1) << "Bytes" << "\n";
    cout << "Endereço de var1: " << &var1 << "\n";

    cout << "Valor de var2: " << var2 << "\n";
    cout << "Tamanho de var2: " << sizeof(var2) << "Bytes" << "\n";
    cout << "Endereço de var2: " << &var2 << "\n";

    cout << "Valor de var3: " << var3 << "\n";
    cout << "Tamanho de var3: " << sizeof(var3) << "Bytes" << "\n";
    cout << "Endereço de var3: " << &var3 << "\n";

    cout << "Valor de var4: " << var4 << "\n";
    cout << "Tamanho de var4: " << sizeof(var4) << "Bytes" << "\n";
    cout << "Endereço de var4: " << &var4 << "\n";
}