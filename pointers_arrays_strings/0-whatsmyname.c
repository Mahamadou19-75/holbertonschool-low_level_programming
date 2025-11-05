#include <stdio.h>

/**
 * main - affiche le nom du programme
 * @argc: nombre d’arguments passés au programme
 * @argv: tableau contenant les arguments (chaînes de caractères)
 *
 * Return: toujours 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* On n’utilise pas argc dans ce programme */
	printf("%s\n", argv[0]);
	return (0);
}
