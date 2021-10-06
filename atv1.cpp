#include <iostream>

int fn1 (int parametro) {
	if (parametro < 0) {
	return 1;
	} else {
		return 0;
	}
}

int main () {
	int numero;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if (fn1(numero)) {
		std::cout << "\nNumero negativo";
	} else {
		std::cout << "\nNumero positivo";
	}

	return 0;
}
