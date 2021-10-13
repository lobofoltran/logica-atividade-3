#include <iostream>

float notaMaior (float n1, float n2, float n3) {
	if (n1 > n2 && n1 > n3) {
		return n1;
	} else if (n2 > n1 && n2 > n3) {
		return n2;
	} else {
		return n3;
	}
}

float notaMenor (float n1, float n2, float n3) {
	if (n1 < n2 && n1 < n3) {
		return n1;
	} else if (n2 < n1 && n2 < n3) {
		return n2;
	} else {
		return n3;
	}
}

float media3 (float n1, float n2, float n3) {
	return((n1 + n2 + n3) / 3);
}

float media2Maior (float n1, float n2, float n3) {
		if (n1 > n2 && n1 > n3) {
		if (n2 > n3) {
			return((n1 + n2) / 2);
		} else {
			return((n1 + n3) / 2);
		}
	} else if (n2 > n1 && n2 > n3) {
		if (n1 > n3) {
			return((n2 + n1) / 2);
		} else {
			return((n2 + n3) / 2);
		}
	} else if (n3 > n1 && n3 > n2) {
		if (n1 > n2) {
			return((n3 + n1) / 2);
		} else {
			return((n3 + n2) / 2);
		}
	}
}

int main () {
	float prova1, prova2, prova3;
	
	std::cout << "Insira o valor da prova 1: ";
	std::cin >> prova1;

	std::cout << "Insira o valor da prova 2: ";
	std::cin >> prova2;
	
	std::cout << "Insira o valor da prova 3: ";
	std::cin >> prova3;
	
	std::cout << "\nMaior nota: " << notaMaior(prova1, prova2, prova3);
	std::cout << "\nMenor nota: " << notaMenor(prova1, prova2, prova3);
	std::cout << "\nMedia das 3 provas: " << media3(prova1, prova2, prova3);
	std::cout << "\nMedia das 2 maiores provas: " << media2Maior(prova1, prova2, prova3);
	
	return 0;
}
