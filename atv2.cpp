#include <iostream>

float delta (float a, float b, float c) {
	float delta = (( b * b ) - 4 * a * c );
}

int main () {
	float a, b, c;
	
	std::cout << "Digite o numero de A: ";
	std::cin >> a;
	
	std::cout << "Digite o numero de B: ";
	std::cin >> b;
	
	std::cout << "Digite o numero de C: ";
	std::cin >> c;
	
	std::cout << "Resultado: " << delta(a, b, c);
	
	return 0;
}
