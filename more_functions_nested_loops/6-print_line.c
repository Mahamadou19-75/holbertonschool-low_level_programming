#include "main.h"

/**
 * print_line - dessine une ligne droite dans le terminal
 * @n: nombre de fois que le caractère '_' doit être affiché
 *
 * Description: si n est inférieur ou égal à 0, la fonction n'affiche
 *              qu'un retour à la ligne.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n'); /* affichage d'une nouvelle ligne */
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_'); /* affichage du caractère _ n fois */

	_putchar('\n'); /* passage à la ligne après la fin de la ligne */
}
