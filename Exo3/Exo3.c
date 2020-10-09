#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#define carre(x) (x) * (x) 
#define NBMAXNOTES 30

int main() {

	float note = 0;			// note de l'�l�ve 
	float notes[NBMAXNOTES] = { 0 };		// tableau de notes
	float note_min = 20;
	float note_max = 0;
	float somme = 0;				//somme utilis�e pour la moyenne
	float somme2 = 0;				//somme utilis�e pour l'�cart type
	int absence = 0;				//compteur d'absences
	int n = 0;						//compteur de remplissage du tableau
	int i = 1;
	int j = 0;
	char c;						//caract�re qui sera saisi
	
	for (j; j < NBMAXNOTES; ++j) {
		notes[j] = -2;
	}
	

	while(i<= NBMAXNOTES) {

		printf("\nEntrer la note no %d : ", i);
		scanf_s("%f", &note);

		if(note>=0 && note<=20){
			notes[n] = note;
			i += 1;
			n += 1;
			somme += note;
			if (note > note_max) {
				note_max = note;
			}

			if (note < note_min) {
				note_min = note;
			}
		}

		else {
			_cputs("El�ve absent ? ou voulez-vous arr�ter la saisie des notes ? A / O / N : ");
			do
			{
				c = _getch();
				c = toupper(c);		//convertit les minuscules en majuscules

				switch (c)
				{
				case 'A':
					absence += 1;
					note = -1;
					notes[n] = note;
					i += 1;
					n += 1;
					break;

				case 'O':
					i = NBMAXNOTES +1;
					break;

				case 'N':
					do {
						printf("\nEntrer la note no %d : ", i);
						scanf_s("%f", &note);
					} while (note < 0 || note>20);
					if (note > note_max) {
						note_max = note;
					}

					if (note < note_min) {
						note_min = note;
					}
					somme += note;
					notes[n] = note;
					i += 1;
					n += 1;
				}

			} while (c != 'A' && c!='O' && c!='N'  );

		}
	}


	float moyenne = somme / n;
	for (j = 0; j < n; j++) {
		float valeur = notes[j] - moyenne;
		if (notes[j] != -1) {
			somme2 = somme2 + carre(valeur);
		}
		
	}
	float ecart = (1 / (n - 1)) * somme2;
	float ecart_type = sqrt(ecart);

	printf("\nNote max : %f\nNote min : %f\nMoyenne : %f\nL'ecart type est : %f \nIl y a %d absence(s)\n", note_max, note_min, moyenne, ecart_type,absence);
	printf("\nLes notes sont: \n");
	
	for (j = 0; j < n; j++) {
		printf("\nLa note no %d est : %f", j, notes[j]);
	}
}


