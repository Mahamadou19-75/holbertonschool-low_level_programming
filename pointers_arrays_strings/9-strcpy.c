#include "main.h"

/**
 * _strcpy - copie la chaîne pointée par src, y compris le caractère nul
 *           dans le buffer pointé par dest
 * @dest: buffer de destination
 * @src: chaîne source
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i]; i++)
	dest[i] = src[i];


	dest[i] = '\0';
	return (dest);
}
