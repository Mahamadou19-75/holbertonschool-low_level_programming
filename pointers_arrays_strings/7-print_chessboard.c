#include "main.h"

/**
 * print_chessboard - affiche un échiquier de 8x8
 * @a: tableau représentant l'échiquier
 *
 * Description: Cette fonction parcourt un tableau 8x8 de caractères
 * et affiche chaque élément avec _putchar, ligne par ligne.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	_putchar(a[i][j]);
	}
	_putchar('\n');
	}
}
