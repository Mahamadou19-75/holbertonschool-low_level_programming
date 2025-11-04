#include "main.h"
#include <stdio.h>

/**
 * main - teste la fonction _strstr
 *
 * Return: toujours 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	/* recherche la sous-chaîne f dans la chaîne s */
	t = _strstr(s, f);

	/* affiche la partie de s à partir de la sous-chaîne trouvée */
	printf("%s\n", t);

	return (0);
}
