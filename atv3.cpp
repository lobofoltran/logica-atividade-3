#include <iostream>

float valida (float n1, float n2, float n3) {
	if (n1 > n2 && n1 > n3) {
		return 1;
	} else if (n2 > n1 && n2 > n3) {
		return 2;
	} else {
		return 3;
	}
}

int main () {
	float numero1, numero2, numero3;
	
	std::cout << "Insira o primeiro numero: ";
	std::cin >> numero1;
	
	std::cout << "Insira o segundo numero: ";
	std::cin >> numero2;
	
	std::cout << "Insira o terceiro numero: ";
	std::cin >> numero3;
	
	if (valida(numero1, numero2, numero3) == 1) {
		std::cout << "\nPrimeiro numero maior.";
	} else if (valida(numero1, numero2, numero3) == 2) {
		std::cout << "\nSegundo numero maior.";
	} else {
		std::cout << "\nTerceiro numero maior";
	}
	
	return 0;
}
