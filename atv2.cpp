#include <iostream>

float bhaskara (float raiz1, float raiz2, float parametroA, float parametroB, float parametroC) {
	raiz1 = (- parametroB + (delta(parametroA, parametroB, parametroC))) / 2 * parametroA;
	raiz2 = (- parametroB - (delta(parametroA, parametroB, parametroC))) / 2 * parametroA;
}

float delta (float parametroA, float parametroB, float parametroC) {
	parametroB * parametroB - 4* parametroA * parametroC;
}

int main () {
	int a, b, c;
	
	std::cout << "Calculadora Bhaskara\n\nDigite o numero de a: ";
	std::cin >> a;
	
	std::cout << "Digite o numero de b: ";
	std::cin >> b;
	
	std::cout << "Digite o numero de c: ";
	std::cin >> c;

	bhaskara(a, b, c);
	delta(a, b, c);
	
	return 0;
}
