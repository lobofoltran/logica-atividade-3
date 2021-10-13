#include <iostream>

float valida (float n) {
	if (n >= 0) {
		return 0;
	} else {
		return 1;
	}
}

int main () {
	float numero = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if (valida (numero) == 0) {
		std::cout << "Numero positivo.";
	} else {
		std::cout << "Numero negativo.";
	}
	
	return 0;
}
