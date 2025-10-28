#include <stdio.h>

/**
 * main - Imprime les nombres de 1 à 100 avec FizzBuzz
 *
 * Description: Pour les multiples de 3, imprime "Fizz".
 *              Pour les multiples de 5, imprime "Buzz".
 *              Pour les multiples de 3 et 5, imprime "FizzBuzz".
 *              Chaque valeur est séparée par un espace.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100) /* ajoute un espace après chaque élément sauf le dernier */
			printf(" ");
	}
	printf("\n"); /* nouvelle ligne à la fin */
	return (0);
}
