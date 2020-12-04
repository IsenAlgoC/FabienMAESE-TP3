#include <stdio.h>
#include <stdlib.h>

int main() {

	int MyAddress_w = 192;
	int MyAddress_x = 168;
	int MyAddress_y = 129;
	int MyAddress_z = 10;
	int IPv4MaskLength = 24;

	int Adresse_Machine;

	// adresse réseau : 


		//Adresse_reseau = Adresse_machine AND masque
		//	L’adresse de broadcast, qui permet de s’adresser à l’ensemble des machines d’un même réseau local
		//	est calculée comme suit :
		//Adresse_broascast = Adresse_reseau OR NOT(masque)
		//	Le programme affiche :
		//adresse IPv4 = 192.168.129.10 / 24
		//	adresse du reseau = 192.168.129.0 / 24
		//	adresse broadcast = 192.168.129.255


	// je n'ai pas compris cet exercice et il est un peu tard pour demander, je l'avoue (04/12)

}