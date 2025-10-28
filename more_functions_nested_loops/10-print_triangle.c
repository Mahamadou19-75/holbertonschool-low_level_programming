#include "main.h"

/**
 * print_triangle - affiche un triangle dans le terminal
 * @size: taille du triangle
 *
 * Description: si size est inférieur ou égal à 0, affiche uniquement
 *              un retour à la ligne. Utilise le caractère '#' pour
 *              dessiner le triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n'); /* nouvelle ligne si size <= 0 */
		return;
	}

	for (i = 1; i <= size; i++) /* boucle pour chaque ligne */
	{
		/* afficher les espaces avant les '#' */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* afficher les '#' */
		for (k = 0; k < i; k++)
			_putchar('#');

		_putchar('\n'); /* passer à la ligne suivante */
	}
}
