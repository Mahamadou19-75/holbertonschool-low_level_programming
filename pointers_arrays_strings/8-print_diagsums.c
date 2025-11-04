#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - affiche la somme des deux diagonales d'une matrice carrée
 * @a: pointeur vers le premier élément du tableau
 * @size: taille (nombre de lignes/colonnes) de la matrice carrée
 *
 * Description:
 * Cette fonction calcule la somme de la diagonale principale et
 * de la diagonale secondaire d'une matrice carrée d'entiers.
 * Elle affiche ensuite ces deux sommes séparées par une virgule.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int somme_diag1 = 0;
	int somme_diag2 = 0;

	for (i = 0; i < size; i++)
	{
	somme_diag1 += a[i * size + i];
	somme_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", somme_diag1, somme_diag2);
}
