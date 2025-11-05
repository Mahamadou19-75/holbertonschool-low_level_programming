#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments (not used)
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* on ignore argc car inutile */
	printf("%s\n", argv[0]);
	return (0);
}
