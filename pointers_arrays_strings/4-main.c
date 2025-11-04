#include "main.h"
#include <stdio.h>

/**
 * main - teste la fonction _strpbrk
 *
 * Return: toujours 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	/* recherche le premier caractère de s présent dans f */
	t = _strpbrk(s, f);

	/* affiche le reste de la chaîne à partir de ce caractère */
	printf("%s\n", t);

	return (0);
}
