#include <stdio.h>
#include <stdlib.h>
#define carre(x) (x) * (x) 

int main() {

	int nb = 5;
	printf("%d", carre(nb));
	printf("\n%d", carre(nb + 1));			// On obtient 6² = 11. Le problème est que la machine effectue (5+1)*(5+1)
											// sans compter les parenthèses : 5 + 1*5 + 1 = 11
}											// on propose de rajouter des parenthèses dans la macro : cela fonctionne