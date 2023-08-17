#include <iostream>
#include <string>

using namespace std;

int main(){
    int num = 0;

    // Mostra todos os números de 0 a 50
   
    /* while(num <= 50){
        cout << num << "\n";
        num++;
    } */

    // Mostrar os número pares de 0 a 50
    while(num <= 50){
        if(num % 2 == 0){
            cout << num << "\n";
        }
        num++;
    }
}