#include <iostream>
#include <cstdlib>
#include <ctime>

float Dado () {
	srand(time(NULL));
	return(1+ rand() % 6); 
}

int main () {
	
	std::cout << "Numero sorteado: " << Dado();
	
	return 0;
}
