// const TIPO NUM_VIDAS = 10
// #define NUM_VIDAS = 10

#include <iostream>
// Usar define abaixo dos includes
#define NUM_VIDAS 10 // sem ponto e vírgula aqui

using namespace std;

int main(){
    // const int NUM_VIDAS = 10;
    int TotalDeVidas;
    TotalDeVidas = NUM_VIDAS - 1;

    cout << "Total de vidas: " << TotalDeVidas << "\n";
    cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << "\n";
}