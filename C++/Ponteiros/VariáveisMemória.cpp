#include <iostream>

int main(){
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho Variavel Numero: " << sizeof(Numero)<< "Bytes\n";
	std::cout << "\n Tamanho Variavel Salario: " << sizeof(Salario) << "Bytes\n";
	std::cout << "\n Endereço de memória da Variável Numero: " << &Numero << "\n";
	std::cout << "\n Endereço de memória da Variável Salário: " << &Salario << "\n";
    
	return 0;
}