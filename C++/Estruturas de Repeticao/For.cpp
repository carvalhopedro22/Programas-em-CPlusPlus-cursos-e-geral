#include <iostream>
#include <string>

using namespace std;

int main(){
    int soma = 0;

    for(int i = 1; i <= 100; i++){
        soma = soma + i;    
    }
    cout << "A soma vale: " << soma << "\n";

}