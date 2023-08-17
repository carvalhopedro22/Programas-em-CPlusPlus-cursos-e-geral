#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    srand((unsigned)time(0));
    int randomNumber;
    // Gerar dez números aleatórios entre 1 e 35
    for(int i = 0; i < 10; i++){
        randomNumber = (rand() % 35) + 1;
        cout << randomNumber << "\n";
    }
}