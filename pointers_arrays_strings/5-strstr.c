#include "main.h"
#include <stddef.h> /* pour NULL */

/**
 * _strstr - localise une sous-chaîne dans une autre chaîne
 * @haystack: la chaîne principale où chercher
 * @needle: la sous-chaîne à trouver
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée dans haystack,
 *         ou NULL si needle n'est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	break;
	}
	if (needle[j] == '\0')
	return (haystack + i);
	}

	return (NULL);
}
