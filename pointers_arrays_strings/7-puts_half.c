#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne
 * @str: Pointeur vers la chaîne de caractères
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

    /* Calcul de la longueur de la chaîne */
	while (str[len] != '\0')
	len++;

    /* Début de la moitié à afficher */
	if (len % 2 == 0)
	i = len / 2;

	else
	i = (len + 1) / 2;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}

