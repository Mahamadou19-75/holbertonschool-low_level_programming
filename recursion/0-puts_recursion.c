#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères suivie d'un '\n
 * @s: Pointeur vers la chaîne de caractères à afficher.
 *
 * Cette fonction affiche chaque caractère de la chaîne un par un,
 * en utilisant la récursion, jusqu'à atteindre le caractère nul '\0'.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Condition d'arrêt : fin de la chaîne */
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);           /* Affiche le caractère courant */
	_puts_recursion(s + 1); /* Appelle récursivement sur le caractère suiva */
}

