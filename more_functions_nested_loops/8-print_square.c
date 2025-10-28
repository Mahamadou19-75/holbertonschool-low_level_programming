#include "main.h"

/**
 * print_square - affiche un carré dans le terminal
 * @size: taille du carré
 *
 * Description: si size est inférieur ou égal à 0, affiche uniquement
 *              un retour à la ligne. Utilise le caractère '#' pour
 *              dessiner le carré.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n'); /* affiche une ligne vide si size <= 0 */
		return;
	}

	for (i = 0; i < size; i++) /* boucle pour chaque ligne */
	{
		for (j = 0; j < size; j++) /* boucle pour chaque colonne */
			_putchar('#');        /* affiche le caractère '#' */

		_putchar('\n'); /* passe à la ligne suivante */
	}
}
