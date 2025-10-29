#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: la chaîne à mesurer
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
