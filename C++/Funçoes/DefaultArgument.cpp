#include <iostream>

void Coordenadas(int x, int y, int z);
// Valores padrões: int x = 3, int y = 5, int z = 7, por exemplo

using namespace std;

int main(){
    Coordenadas(5,4,3);
    return 0;
}

void Coordenadas(int x, int y, int z){
    x *= 10;
    y *= 10;
    z *= 10;
    cout << "(" << x << " " << y << " " << z << ")" << "\n";
}