#include "main.h"
#include <stdio.h>

/**
 * main - teste la fonction _strspn
 *
 * Return: toujours 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
 /* calcule le nombre de caractères initiaux de s présents dans */

	unsigned int n = _strspn(s, f);

 /* affiche le résultat */
	printf("%u\n", n);


	return (0);
}
