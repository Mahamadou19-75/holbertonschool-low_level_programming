#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* pour éviter l'avertissement si argv n'est pas utilisé */
	printf("%d\n", argc - 1);
	return (0);
}
