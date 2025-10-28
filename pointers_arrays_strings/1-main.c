#include "main.h"
#include <stdio.h>

/**
 * main - vérifie la fonction swap_int
 *
 * Return: toujours 0
 */
int main(void)
{
	int a = 98;
	int b = 42;

	printf("Avant swap : a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("Après swap : a = %d, b = %d\n", a, b);

	return (0);
}
