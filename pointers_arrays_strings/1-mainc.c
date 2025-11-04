#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - affiche le contenu d'un buffer en hexadécimal
 * @buffer: adresse de la mémoire à afficher
 * @size: taille de la mémoire à afficher
 *
 * Return: rien
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
    {
        /* Affiche un espace entre les octets sauf au début de la ligne */
	if (i % 10)
	printf(" ");
        /* Passe à la ligne tous les 10 octets */
	if (!(i % 10) && i)
	printf("\n");
        /* Affiche l'octet en hexadécimal sur deux chiffres */
	printf("0x%02x", buffer[i]);
	i++;
	}
	printf("\n");
}
/**
 * main - teste la fonction _memcpy
 *
 * Return: toujours 0
 */
int main(void)
{
	char buffer[98] = {0}; /* buffer de destination initialisé à 0 */
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}; /* buffer source */

	/* Affiche le buffer avant la copie */
	simple_print_buffer(buffer, 98);

	/* Copie 10 octets de buffer2 dans buffer à partir de l'index 50 */
	_memcpy(buffer + 50, buffer2, 10);

	printf("-------------------------------------------------\n");

	/* Affiche le buffer après la copie */
	simple_print_buffer(buffer, 98);

	return (0);
}
