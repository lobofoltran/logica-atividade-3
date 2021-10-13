#include <iostream>
#include <cstdlib>
#include <ctime>

float Dado () {
	srand(time(NULL));
	return(1+ rand() % 6); 
}

int main () {
	
	for (int i = 0; i < 1000; i++)  {
		std::cout << "\nNumero sorteado: " << Dado();
	}

	return 0;
}
