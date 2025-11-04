#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - affiche le contenu d’un buffer en hexadécimal
 * @buffer: adresse de la mémoire à afficher
 * @size: taille de la mémoire à afficher
 *
 * Return: Rien
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
	{
	if (i % 10)

	printf(" ");

	if (!(i % 10) && i)
	printf("\n");
	printf("0x%02x", buffer[i]);
	i++;
	}
	printf("\n");
}

/**
 * main - teste la fonction _memset
 *
 * Return: Toujours 0
 */
int main(void)
{
	char buffer[98] = {0x00};

	printf("Contenu initial du buffer :\n");
	simple_print_buffer(buffer, 98);

    /* Appel de notre fonction pour remplir la mémoire */
	_memset(buffer, 0x01, 95);

	printf("-------------------------------------------------\n");
	printf("Contenu du buffer après _memset :\n");
	simple_print_buffer(buffer, 98);

	return (0);
}
