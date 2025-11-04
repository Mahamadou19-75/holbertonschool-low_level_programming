#include "main.h"

/**
 * _memcpy - copie n octets d'une zone mémoire vers une autre
 * @dest: pointeur vers la zone mémoire de destination
 * @src: pointeur vers la zone mémoire source
 * @n: nombre d'octets à copier
 *
 * Return: pointeur vers la zone mémoire de destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Parcourt les n octets à copier */
	for (i = 0; i < n; i++)
	{

	/* Copie chaque octet de src vers dest */
	dest[i] = src[i];

	}

	/* Retourne le pointeur vers la mémoire destination */
	return (dest);
}
