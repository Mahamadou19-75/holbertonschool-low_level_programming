#include "main.h"

/**
 * print_diagonal - dessine une ligne diagonale dans le terminal
 * @n: nombre de fois que le caractère '\' doit être affiché
 *
 * Description: si n est inférieur ou égal à 0, la fonction n'affiche
 *              qu'un retour à la ligne.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n'); /* affiche une nouvelle ligne si n <= 0 */
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* afficher les espaces avant le caractère \ */
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');  /* affiche le caractère \ */
		_putchar('\n');  /* passe à la ligne suivante */
	}
}
