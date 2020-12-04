#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned long int entier = 2868838400;
	int tailleoctets = sizeof(entier);
	int taillebits = 8 * tailleoctets;
	int i = 0;
	printf("On a besoin de %d octets et de %d bits pour coder 2868838400\n", tailleoctets, taillebits);

	while (entier>0) {

		if ((entier & 1) == 1) {
			printf("Bit %d :  ON\n", i);
		}

		else {
			printf("Bit %d :  OFF\n", i);
		}

		entier = entier >> 1;
		i=i+1;
	}

	// tous les bits sont bien affichés et cela correspond bien au nombre donné.

	printf("\nBye ! Have a nice day !\n");

}