#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
 * _strchr - localise un caractère dans une chaîne de caractères
 * @s: chaîne dans laquelle chercher
 * @c: caractère à trouver
 *
 * Return: un pointeur vers la première occurrence de c dans s,
 *         ou NULL si c n'est pas trouvé
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* Vérifie si le caractère recherché est le caractère nul '\0' final */
	if (*s == c)
		return (s);

	return (NULL);
}
